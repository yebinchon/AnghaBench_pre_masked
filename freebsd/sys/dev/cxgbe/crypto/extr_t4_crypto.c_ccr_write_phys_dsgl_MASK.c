
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t vm_paddr_t ;
typedef size_t u_int ;
struct sglist {size_t sg_nseg; TYPE_4__* sg_segs; } ;
struct phys_sge_pairs {void** len; int * addr; } ;
struct TYPE_7__ {scalar_t__ hash_val; void* qid; int opcode; } ;
struct cpl_rx_phys_dsgl {TYPE_3__ rss_hdr_int; void* pcirlxorder_to_noofsgentr; void* op_to_tid; } ;
struct ccr_softc {TYPE_2__* rxq; struct sglist* sg_dsgl; } ;
struct TYPE_8__ {size_t ss_len; size_t ss_paddr; } ;
struct TYPE_5__ {size_t abs_id; } ;
struct TYPE_6__ {TYPE_1__ iq; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (size_t) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (size_t) ;

__attribute__((used)) static void
FUNC_11(struct ccr_softc *VAR_3, void *VAR_4, int VAR_5)
{
 struct sglist *VAR_6;
 struct cpl_rx_phys_dsgl *VAR_7;
 struct phys_sge_pairs *VAR_8;
 vm_paddr_t VAR_9;
 size_t VAR_10;
 u_int VAR_11, VAR_12;

 VAR_6 = VAR_3->sg_dsgl;
 VAR_7 = VAR_4;
 VAR_7->op_to_tid = FUNC_9(FUNC_4(VAR_1) |
     FUNC_2(0));
 VAR_7->pcirlxorder_to_noofsgentr = FUNC_9(
     FUNC_6(0) |
     FUNC_5(0) |
     FUNC_7(0) | FUNC_1(0) |
     FUNC_3(VAR_5));
 VAR_7->rss_hdr_int.opcode = VAR_0;
 VAR_7->rss_hdr_int.qid = FUNC_8(VAR_3->rxq->iq.abs_id);
 VAR_7->rss_hdr_int.hash_val = 0;
 VAR_8 = (struct phys_sge_pairs *)(VAR_7 + 1);
 VAR_12 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_6->sg_nseg; VAR_11++) {
  VAR_10 = VAR_6->sg_segs[VAR_11].ss_len;
  VAR_9 = VAR_6->sg_segs[VAR_11].ss_paddr;
  do {
   VAR_8->addr[VAR_12] = FUNC_10(VAR_9);
   if (VAR_10 > VAR_2) {
    VAR_8->len[VAR_12] = FUNC_8(VAR_2);
    VAR_9 += VAR_2;
    VAR_10 -= VAR_2;
   } else {
    VAR_8->len[VAR_12] = FUNC_8(VAR_10);
    VAR_10 = 0;
   }
   VAR_12++;
   if (VAR_12 == 8) {
    VAR_8++;
    VAR_12 = 0;
   }
  } while (VAR_10 != 0);
 }
 FUNC_0(VAR_12 + 8 * (VAR_8 - (struct phys_sge_pairs *)(VAR_7 + 1)) == VAR_5);
}
