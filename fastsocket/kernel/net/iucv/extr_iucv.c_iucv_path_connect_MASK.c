
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ippathid; int ipflags1; int ipmsglim; int ipuser; int iptarget; int ipvmid; } ;
union iucv_param {TYPE_1__ ctrl; } ;
typedef int u8 ;
struct iucv_path {size_t pathid; int list; void* private; struct iucv_handler* handler; int flags; int msglim; } ;
struct iucv_handler {int paths; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,union iucv_param*) ;
 int FUNC_4 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 union iucv_param** VAR_5 ;
 struct iucv_path** VAR_6 ;
 int FUNC_5 (size_t,int ) ;
 int VAR_7 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (union iucv_param*,int ,int) ;
 size_t FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct iucv_path *VAR_8, struct iucv_handler *VAR_9,
        u8 VAR_10[8], u8 VAR_11[8], u8 VAR_12[16],
        void *VAR_13)
{
 union iucv_param *VAR_14;
 int VAR_15;

 FUNC_10(&VAR_7);
 FUNC_4();
 if (FUNC_2(VAR_2)) {
  VAR_15 = -VAR_0;
  goto out;
 }
 VAR_14 = VAR_5[FUNC_9()];
 FUNC_8(VAR_14, 0, sizeof(union iucv_param));
 VAR_14->ctrl.ipmsglim = VAR_8->msglim;
 VAR_14->ctrl.ipflags1 = VAR_8->flags;
 if (VAR_10) {
  FUNC_7(VAR_14->ctrl.ipvmid, VAR_10, sizeof(VAR_14->ctrl.ipvmid));
  FUNC_0(VAR_14->ctrl.ipvmid, sizeof(VAR_14->ctrl.ipvmid));
  FUNC_1(VAR_14->ctrl.ipvmid, sizeof(VAR_14->ctrl.ipvmid));
 }
 if (VAR_11) {
  FUNC_7(VAR_14->ctrl.iptarget, VAR_11,
         sizeof(VAR_14->ctrl.iptarget));
  FUNC_0(VAR_14->ctrl.iptarget, sizeof(VAR_14->ctrl.iptarget));
  FUNC_1(VAR_14->ctrl.iptarget, sizeof(VAR_14->ctrl.iptarget));
 }
 if (VAR_12)
  FUNC_7(VAR_14->ctrl.ipuser, VAR_12, sizeof(VAR_14->ctrl.ipuser));

 VAR_15 = FUNC_3(VAR_1, VAR_14);
 if (!VAR_15) {
  if (VAR_14->ctrl.ippathid < VAR_4) {
   VAR_8->pathid = VAR_14->ctrl.ippathid;
   VAR_8->msglim = VAR_14->ctrl.ipmsglim;
   VAR_8->flags = VAR_14->ctrl.ipflags1;
   VAR_8->handler = VAR_9;
   VAR_8->private = VAR_13;
   FUNC_6(&VAR_8->list, &VAR_9->paths);
   VAR_6[VAR_8->pathid] = VAR_8;
  } else {
   FUNC_5(VAR_14->ctrl.ippathid,
       VAR_3);
   VAR_15 = -VAR_0;
  }
 }
out:
 FUNC_11(&VAR_7);
 return VAR_15;
}
