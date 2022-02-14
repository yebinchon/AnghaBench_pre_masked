
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ipflags1; int ipmsglim; int ipuser; int ippathid; } ;
union iucv_param {TYPE_1__ ctrl; } ;
typedef int u8 ;
struct iucv_path {int flags; int msglim; void* private; int pathid; } ;
struct iucv_handler {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,union iucv_param*) ;
 union iucv_param** VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (union iucv_param*,int ,int) ;
 size_t FUNC_6 () ;

int FUNC_7(struct iucv_path *VAR_4, struct iucv_handler *VAR_5,
       u8 VAR_6[16], void *VAR_7)
{
 union iucv_param *VAR_8;
 int VAR_9;

 FUNC_2();
 if (FUNC_0(VAR_2)) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_8 = VAR_3[FUNC_6()];
 FUNC_5(VAR_8, 0, sizeof(union iucv_param));
 VAR_8->ctrl.ippathid = VAR_4->pathid;
 VAR_8->ctrl.ipmsglim = VAR_4->msglim;
 if (VAR_6)
  FUNC_4(VAR_8->ctrl.ipuser, VAR_6, sizeof(VAR_8->ctrl.ipuser));
 VAR_8->ctrl.ipflags1 = VAR_4->flags;

 VAR_9 = FUNC_1(VAR_1, VAR_8);
 if (!VAR_9) {
  VAR_4->private = VAR_7;
  VAR_4->msglim = VAR_8->ctrl.ipmsglim;
  VAR_4->flags = VAR_8->ctrl.ipflags1;
 }
out:
 FUNC_3();
 return VAR_9;
}
