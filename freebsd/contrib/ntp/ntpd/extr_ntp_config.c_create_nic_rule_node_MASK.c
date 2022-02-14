
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int match_class; char* if_name; int action; } ;
typedef TYPE_1__ nic_rule_node ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;

nic_rule_node *
FUNC_2(
 int VAR_0,
 char *VAR_1,
 int VAR_2
 )
{
 nic_rule_node *VAR_3;

 FUNC_0(VAR_0 != 0 || VAR_1 != ((void*)0));

 VAR_3 = FUNC_1(sizeof(*VAR_3));
 VAR_3->match_class = VAR_0;
 VAR_3->if_name = VAR_1;
 VAR_3->action = VAR_2;

 return VAR_3;
}
