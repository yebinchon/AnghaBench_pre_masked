
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch_tree {scalar_t__ tag_protocol; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

bool FUNC_1(void *VAR_1)
{
 struct dsa_switch_tree *VAR_2 = VAR_1;

 return !!(VAR_2->tag_protocol == FUNC_0(VAR_0));
}
