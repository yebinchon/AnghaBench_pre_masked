
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sfxge_txq {int common; int n_pend_desc; int * pend_desc; } ;
struct sfxge_tso_state {int dma_addr; int in_len; int packet_space; int fw_assisted; scalar_t__ out_len; int seqnum; int segs_space; int seg_size; } ;
typedef int efx_desc_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int,int,int *) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct sfxge_txq *VAR_2,
       struct sfxge_tso_state *VAR_3)
{
 efx_desc_t *VAR_4;
 int VAR_5;
 uint64_t VAR_6 = VAR_3->dma_addr;
 boolean_t VAR_7;

 if (VAR_3->in_len == 0 || VAR_3->packet_space == 0)
  return;

 FUNC_0(VAR_3->in_len > 0, ("TSO input length went negative"));
 FUNC_0(VAR_3->packet_space > 0, ("TSO packet space went negative"));

 if (VAR_3->fw_assisted & VAR_1) {
  VAR_5 = VAR_3->in_len;
  VAR_3->out_len -= VAR_5;
  VAR_3->seqnum += VAR_5;
  VAR_3->in_len = 0;
  if (VAR_5 < VAR_3->packet_space) {
   VAR_3->packet_space -= VAR_5;
   VAR_3->segs_space--;
  } else {
   VAR_3->packet_space = VAR_3->seg_size -
       (VAR_5 - VAR_3->packet_space) % VAR_3->seg_size;
   VAR_3->segs_space =
       VAR_0 - 1 -
       (VAR_3->packet_space != VAR_3->seg_size);
  }
 } else {
  VAR_5 = FUNC_2(VAR_3->in_len, VAR_3->packet_space);
  VAR_3->packet_space -= VAR_5;
  VAR_3->out_len -= VAR_5;
  VAR_3->dma_addr += VAR_5;
  VAR_3->in_len -= VAR_5;
 }





 VAR_7 = (VAR_3->out_len == 0) | (VAR_3->packet_space == 0) |
     (VAR_3->segs_space == 0);

 VAR_4 = &VAR_2->pend_desc[VAR_2->n_pend_desc++];
 FUNC_1(VAR_2->common, VAR_6, VAR_5, VAR_7, VAR_4);
}
