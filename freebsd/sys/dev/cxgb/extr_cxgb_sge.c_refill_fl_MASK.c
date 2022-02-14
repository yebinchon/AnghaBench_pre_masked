
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint64_t ;
struct sge_fl {size_t pidx; scalar_t__ zone; int gen; size_t size; int db_pending; int cntxt_id; int credits; struct rx_desc* desc; struct rx_sw_desc* sdesc; int buf_size; int entry_tag; } ;
struct rx_sw_desc {int flags; struct mbuf* m; int * rxsd_cl; int map; } ;
struct rx_desc {void* gen2; void* len_gen; void* addr_hi; void* addr_lo; } ;
struct TYPE_4__ {int ds_addr; } ;
struct refill_fl_cb_arg {TYPE_2__ seg; scalar_t__ error; } ;
struct TYPE_3__ {int * ext_buf; } ;
struct mbuf {TYPE_1__ m_ext; } ;
typedef int * caddr_t ;
typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *,int ,int ,struct refill_fl_cb_arg*,int ) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int) ;
 int * FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (struct mbuf*) ;
 struct mbuf* FUNC_9 (int ,int ,int ) ;
 struct mbuf* FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int VAR_7 ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (scalar_t__,int *) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_14(adapter_t *VAR_9, struct sge_fl *VAR_10, int VAR_11)
{
 struct rx_sw_desc *VAR_12 = &VAR_10->sdesc[VAR_10->pidx];
 struct rx_desc *VAR_13 = &VAR_10->desc[VAR_10->pidx];
 struct refill_fl_cb_arg VAR_14;
 struct mbuf *VAR_15;
 caddr_t VAR_16;
 int VAR_17;

 VAR_14.error = 0;
 while (VAR_11--) {




  if (VAR_10->zone == VAR_8) {
   if ((VAR_15 = FUNC_9(VAR_3, VAR_2, VAR_4)) == ((void*)0))
    break;
   VAR_16 = VAR_15->m_ext.ext_buf;
  } else {
   if ((VAR_16 = FUNC_7(((void*)0), VAR_3, VAR_10->buf_size)) == ((void*)0))
    break;
   if ((VAR_15 = FUNC_10(VAR_3, VAR_2)) == ((void*)0)) {
    FUNC_13(VAR_10->zone, VAR_16);
    break;
   }
  }
  if ((VAR_12->flags & VAR_6) == 0) {
   if ((VAR_17 = FUNC_3(VAR_10->entry_tag, 0, &VAR_12->map))) {
    FUNC_6(VAR_1, "bus_dmamap_create failed %d\n", VAR_17);
    FUNC_13(VAR_10->zone, VAR_16);
    goto done;
   }
   VAR_12->flags |= VAR_6;
  }
  VAR_14.seg.ds_addr = FUNC_11((vm_offset_t)VAR_16);

  VAR_12->flags |= VAR_5;
  VAR_12->rxsd_cl = VAR_16;
  VAR_12->m = VAR_15;
  VAR_13->addr_lo = FUNC_5(VAR_14.seg.ds_addr & 0xffffffff);
  VAR_13->addr_hi = FUNC_5(((uint64_t)VAR_14.seg.ds_addr >>32) & 0xffffffff);
  VAR_13->len_gen = FUNC_5(FUNC_1(VAR_10->gen));
  VAR_13->gen2 = FUNC_5(FUNC_2(VAR_10->gen));

  VAR_13++;
  VAR_12++;

  if (++VAR_10->pidx == VAR_10->size) {
   VAR_10->pidx = 0;
   VAR_10->gen ^= 1;
   VAR_12 = VAR_10->sdesc;
   VAR_13 = VAR_10->desc;
  }
  VAR_10->credits++;
  VAR_10->db_pending++;
 }

done:
 if (VAR_10->db_pending >= 32) {
  VAR_10->db_pending = 0;
  FUNC_12(VAR_9, VAR_0, FUNC_0(VAR_10->cntxt_id));
 }
}
