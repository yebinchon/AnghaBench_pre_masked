
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int group_num; int group; } ;
typedef TYPE_1__ EAP_PWD_group ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;

EAP_PWD_group * FUNC_5(u16 VAR_1)
{
 EAP_PWD_group *VAR_2;

 if (!FUNC_1(VAR_1, 1)) {
  FUNC_4(VAR_0, "EAP-pwd: unsuitable group %u", VAR_1);
  return ((void*)0);
 }
 VAR_2 = FUNC_3(sizeof(EAP_PWD_group));
 if (!VAR_2)
  return ((void*)0);
 VAR_2->group = FUNC_0(VAR_1);
 if (!VAR_2->group) {
  FUNC_4(VAR_0, "EAP-pwd: unable to create EC group");
  FUNC_2(VAR_2);
  return ((void*)0);
 }

 VAR_2->group_num = VAR_1;
 FUNC_4(VAR_0, "EAP-pwd: provisioned group %d", VAR_1);

 return VAR_2;
}
