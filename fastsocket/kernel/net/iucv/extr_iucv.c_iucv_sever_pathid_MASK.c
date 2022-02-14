
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ippathid; int ipuser; } ;
union iucv_param {TYPE_1__ ctrl; } ;
typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int ,union iucv_param*) ;
 union iucv_param** VAR_1 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (union iucv_param*,int ,int) ;
 size_t FUNC_3 () ;

__attribute__((used)) static int FUNC_4(u16 VAR_2, u8 VAR_3[16])
{
 union iucv_param *VAR_4;

 VAR_4 = VAR_1[FUNC_3()];
 FUNC_2(VAR_4, 0, sizeof(union iucv_param));
 if (VAR_3)
  FUNC_1(VAR_4->ctrl.ipuser, VAR_3, sizeof(VAR_4->ctrl.ipuser));
 VAR_4->ctrl.ippathid = VAR_2;
 return FUNC_0(VAR_0, VAR_4);
}
