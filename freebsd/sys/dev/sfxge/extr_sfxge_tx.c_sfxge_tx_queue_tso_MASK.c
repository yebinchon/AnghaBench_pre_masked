
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sfxge_txq {int added; int ptr_mask; scalar_t__ n_pend_desc; scalar_t__ max_pkt_desc; int tso_bursts; int tso_pdrop_no_rsrc; int tso_pdrop_too_many; TYPE_1__* stmp; } ;
struct sfxge_tso_state {unsigned int header_len; unsigned int in_len; unsigned int dma_addr; scalar_t__ packet_space; scalar_t__ segs_space; int fw_assisted; } ;
struct mbuf {int dummy; } ;
struct TYPE_6__ {unsigned int ds_len; unsigned int ds_addr; } ;
typedef TYPE_2__ bus_dma_segment_t ;
struct TYPE_5__ {scalar_t__ flags; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sfxge_txq*,struct sfxge_tso_state*) ;
 int FUNC_3 (struct sfxge_txq*,struct sfxge_tso_state*,TYPE_2__ const*,struct mbuf*) ;
 int FUNC_4 (struct sfxge_txq*,struct sfxge_tso_state*,unsigned int*) ;

__attribute__((used)) static int
FUNC_5(struct sfxge_txq *VAR_3, struct mbuf *VAR_4,
     const bus_dma_segment_t *VAR_5, int VAR_6,
     int VAR_7)
{
 struct sfxge_tso_state VAR_8;
 unsigned int VAR_9;
 unsigned VAR_10 = 0;

 FUNC_3(VAR_3, &VAR_8, VAR_5, VAR_4);

 while (VAR_5->ds_len + VAR_10 <= VAR_8.header_len) {
  VAR_10 += VAR_5->ds_len;
  --VAR_6;
  FUNC_0(VAR_6, ("no payload found in TSO packet"));
  ++VAR_5;
 }
 VAR_8.in_len = VAR_5->ds_len - (VAR_8.header_len - VAR_10);
 VAR_8.dma_addr = VAR_5->ds_addr + (VAR_8.header_len - VAR_10);

 VAR_9 = (VAR_3->added + VAR_7) & VAR_3->ptr_mask;
 if (FUNC_1(FUNC_4(VAR_3, &VAR_8, &VAR_9)))
  return (-1);

 while (1) {
  FUNC_2(VAR_3, &VAR_8);

  FUNC_0(VAR_3->stmp[VAR_9].flags == 0, ("stmp flags are not 0"));
  VAR_9 = (VAR_9 + 1) & VAR_3->ptr_mask;


  if (VAR_8.in_len == 0) {
   --VAR_6;
   if (VAR_6 == 0)
    break;
   ++VAR_5;
   VAR_8.in_len = VAR_5->ds_len;
   VAR_8.dma_addr = VAR_5->ds_addr;
  }


  if ((VAR_8.packet_space == 0) | (VAR_8.segs_space == 0)) {
   unsigned int VAR_11 =
       (VAR_8.fw_assisted & VAR_2) ?
       VAR_0 :
       (VAR_8.fw_assisted & VAR_1) ? 1 : 0;






   if (VAR_3->n_pend_desc + VAR_11 +
       1 + VAR_6 > VAR_3->max_pkt_desc) {
    VAR_3->tso_pdrop_too_many++;
    break;
   }
   if (FUNC_1(FUNC_4(VAR_3, &VAR_8,
         &VAR_9))) {
    VAR_3->tso_pdrop_no_rsrc++;
    break;
   }
  }
 }

 VAR_3->tso_bursts++;
 return (VAR_9);
}
