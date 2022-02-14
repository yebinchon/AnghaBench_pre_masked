
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qlnxr_dev {TYPE_2__* ha; } ;
struct qlnxr_cq {scalar_t__ cq_type; int cq_lock; int arm_flags; scalar_t__ cq_cons; int icid; scalar_t__ destroyed; } ;
struct ib_cq {int device; } ;
struct TYPE_6__ {TYPE_1__* ifp; } ;
typedef TYPE_2__ qlnx_host_t ;
typedef enum ib_cq_notify_flags { ____Placeholder_ib_cq_notify_flags } ib_cq_notify_flags ;
struct TYPE_5__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_2__*,char*,struct qlnxr_cq*,int ) ;
 int FUNC_1 (TYPE_2__*,char*,struct ib_cq*,int,...) ;
 int FUNC_2 (struct qlnxr_dev*,struct qlnxr_cq*,scalar_t__,int ) ;
 struct qlnxr_cq* FUNC_3 (struct ib_cq*) ;
 struct qlnxr_dev* FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int
FUNC_7(struct ib_cq *VAR_7, enum ib_cq_notify_flags VAR_8)
{
        struct qlnxr_cq *VAR_9 = FUNC_3(VAR_7);
        unsigned long VAR_10;
        struct qlnxr_dev *VAR_11;
 qlnx_host_t *VAR_12;

 VAR_11 = FUNC_4((VAR_7->device));
 VAR_12 = VAR_11->ha;

 FUNC_1(VAR_12, "enter ibcq = %p flags = 0x%x "
  "cp = %p cons = 0x%x cq_type = 0x%x\n", VAR_7,
  VAR_8, VAR_9, VAR_9->cq_cons, VAR_9->cq_type);

 if (!(VAR_12->ifp->if_drv_flags & VAR_5))
  return -VAR_2;

 if (VAR_9->destroyed) {
  FUNC_0(VAR_12, "cq was already destroyed cq = %p icid=%d\n",
   VAR_9, VAR_9->icid);
  return -VAR_2;
 }

        if (VAR_9->cq_type == VAR_6) {
                return 0;
        }

        FUNC_5(&VAR_9->cq_lock, VAR_10);

        VAR_9->arm_flags = 0;

        if (VAR_8 & VAR_4) {
                VAR_9->arm_flags |= VAR_1;
        }
        if (VAR_8 & VAR_3) {
                VAR_9->arm_flags |= VAR_0;
        }

        FUNC_2(VAR_11, VAR_9, (VAR_9->cq_cons - 1), VAR_9->arm_flags);

        FUNC_6(&VAR_9->cq_lock, VAR_10);

 FUNC_1(VAR_12, "exit ibcq = %p flags = 0x%x\n", VAR_7, VAR_8);
        return 0;
}
