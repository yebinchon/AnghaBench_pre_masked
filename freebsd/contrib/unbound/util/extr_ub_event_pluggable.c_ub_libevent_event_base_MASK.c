
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_event_base {int * vmt; int magic; } ;
struct my_event_base {struct ub_event_base super; struct event_base* base; } ;
struct event_base {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;

struct ub_event_base*
FUNC_1(struct event_base* VAR_2)
{




 struct my_event_base* VAR_3 = (struct my_event_base*)FUNC_0(1,
  sizeof(struct my_event_base));

 if (!VAR_3)
  return ((void*)0);
 VAR_3->super.magic = VAR_0;
 VAR_3->super.vmt = &VAR_1;
 VAR_3->base = VAR_2;
 return &VAR_3->super;

}
