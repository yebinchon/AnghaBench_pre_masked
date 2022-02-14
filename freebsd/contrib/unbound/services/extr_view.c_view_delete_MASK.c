
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {struct view* name; int respip_set; int local_zones; int lock; } ;


 int FUNC_0 (struct view*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct view* VAR_0)
{
 if(!VAR_0)
  return;
 FUNC_2(&VAR_0->lock);
 FUNC_1(VAR_0->local_zones);
 FUNC_3(VAR_0->respip_set);
 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0);
}
