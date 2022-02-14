
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcl_list {int region; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct tcl_list*) ;

struct tcl_list*
FUNC_3(void)
{
 struct tcl_list* VAR_0 = (struct tcl_list*)FUNC_0(1,
  sizeof(struct tcl_list));
 if(!VAR_0)
  return ((void*)0);
 VAR_0->region = FUNC_1();
 if(!VAR_0->region) {
  FUNC_2(VAR_0);
  return ((void*)0);
 }
 return VAR_0;
}
