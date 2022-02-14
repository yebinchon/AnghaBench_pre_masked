
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcl_list {int region; int tree; } ;


 int FUNC_0 (struct tcl_list*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int *) ;

void
FUNC_3(struct tcl_list* VAR_1)
{
 if(!VAR_1)
  return;
 FUNC_2(&VAR_1->tree, VAR_0, ((void*)0));
 FUNC_1(VAR_1->region);
 FUNC_0(VAR_1);
}
