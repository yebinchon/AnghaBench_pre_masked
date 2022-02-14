
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat_list_arg {int cmd; int is_all; } ;
struct nat44_cfg_nat {int name; } ;
typedef int ipfw_obj_header ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int **) ;
 int FUNC_2 (struct nat44_cfg_nat*,int *) ;
 int FUNC_3 (struct nat44_cfg_nat*,int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int
FUNC_6(struct nat44_cfg_nat *VAR_2, void *VAR_3)
{
 struct nat_list_arg *VAR_4;
 ipfw_obj_header *VAR_5;

 VAR_4 = (struct nat_list_arg *)VAR_3;

 switch (VAR_4->cmd) {
 case 129:
  if (FUNC_1(VAR_2->name, VAR_4->cmd, &VAR_5) != 0) {
   FUNC_5("Error getting nat instance %s info", VAR_2->name);
   break;
  }
  FUNC_2((struct nat44_cfg_nat *)(VAR_5 + 1), ((void*)0));
  FUNC_0(VAR_5);
  break;
 case 128:
  if (FUNC_1(VAR_2->name, VAR_4->cmd, &VAR_5) == 0) {
   FUNC_3((struct nat44_cfg_nat *)(VAR_5 + 1), ((void*)0));
   FUNC_0(VAR_5);
   break;
  }

  if (VAR_4->is_all != 0 && VAR_1 == VAR_0)
   break;
  FUNC_4("Error getting nat instance %s info", VAR_2->name);
  break;
 }

 return (0);
}
