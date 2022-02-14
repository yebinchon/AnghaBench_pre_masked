
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct regpair {int lo; int hi; } ;
struct TYPE_4__ {scalar_t__ cq_context; int (* comp_handler ) (TYPE_2__*,scalar_t__) ;} ;
struct qlnxr_cq {scalar_t__ sig; int cnq_notif; TYPE_2__ ibcq; int destroyed; scalar_t__ arm_flags; } ;
struct qlnxr_cnq {int sb; int index; TYPE_1__* dev; int n_comp; int pbl; int * hw_cons_ptr; } ;
typedef int qlnx_host_t ;
struct TYPE_3__ {int rdma_ctx; int * ha; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,void*,...) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_11(void *VAR_3)
{
        struct qlnxr_cnq *VAR_4 = VAR_3;
        struct qlnxr_cq *VAR_5;
        struct regpair *VAR_6;
        u16 VAR_7, VAR_8;
 qlnx_host_t *VAR_9;

 VAR_9 = VAR_4->dev->ha;

 FUNC_2(VAR_9, "enter cnq = %p\n", VAR_3);

        FUNC_6(VAR_4->sb, VAR_0, 0 );

        FUNC_7(VAR_4->sb);

        VAR_7 = FUNC_8(*VAR_4->hw_cons_ptr);
        VAR_8 = FUNC_4(&VAR_4->pbl);

        FUNC_9();

 FUNC_2(VAR_9, "enter cnq = %p hw_comp_cons = 0x%x sw_comp_cons = 0x%x\n",
  VAR_3, VAR_7, VAR_8);

        while (VAR_8 != VAR_7) {
                VAR_6 = (struct regpair *)FUNC_3(&VAR_4->pbl);
                VAR_5 = (struct qlnxr_cq *)(uintptr_t)FUNC_0(VAR_6->hi,
                                VAR_6->lo);

                if (VAR_5 == ((void*)0)) {
   FUNC_1(VAR_9, "cq == NULL\n");
                        break;
                }

                if (VAR_5->sig != VAR_2) {
   FUNC_1(VAR_9,
    "cq->sig = 0x%x QLNXR_CQ_MAGIC_NUMBER = 0x%x\n",
    VAR_5->sig, VAR_2);
                        break;
                }
                VAR_5->arm_flags = 0;

                if (!VAR_5->destroyed && VAR_5->ibcq.comp_handler) {
   FUNC_1(VAR_9, "calling comp_handler = %p "
    "ibcq = %p cq_context = 0x%x\n",
    &VAR_5->ibcq, VAR_5->ibcq.cq_context);

                        (*VAR_5->ibcq.comp_handler) (&VAR_5->ibcq, VAR_5->ibcq.cq_context);
                }
  VAR_5->cnq_notif++;

                VAR_8 = FUNC_4(&VAR_4->pbl);

                VAR_4->n_comp++;
        }

        FUNC_5(VAR_4->dev->rdma_ctx, VAR_4->index, VAR_8);

        FUNC_6(VAR_4->sb, VAR_1, 1 );

 FUNC_2(VAR_9, "exit cnq = %p\n", VAR_3);
        return;
}
