
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ippathid; int ipuser; } ;
union iucv_param {TYPE_1__ ctrl; } ;
typedef int u8 ;
struct iucv_path {int pathid; } ;


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

int FUNC_7(struct iucv_path *VAR_4, u8 VAR_5[16])
{
 union iucv_param *VAR_6;
 int VAR_7;

 FUNC_2();
 if (FUNC_0(VAR_2)) {
  VAR_7 = -VAR_0;
  goto out;
 }
 VAR_6 = VAR_3[FUNC_6()];
 FUNC_5(VAR_6, 0, sizeof(union iucv_param));
 if (VAR_5)
  FUNC_4(VAR_6->ctrl.ipuser, VAR_5, sizeof(VAR_6->ctrl.ipuser));
 VAR_6->ctrl.ippathid = VAR_4->pathid;
 VAR_7 = FUNC_1(VAR_1, VAR_6);
out:
 FUNC_3();
 return VAR_7;
}
