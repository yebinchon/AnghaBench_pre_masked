
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ub_event_base {int dummy; } ;
struct ub_event {int dummy; } ;
struct timeval {int dummy; } ;
struct TYPE_4__ {int ev; } ;
struct TYPE_3__ {int base; } ;


 TYPE_2__* FUNC_0 (struct ub_event*) ;
 TYPE_1__* FUNC_1 (struct ub_event_base*) ;
 int VAR_0 ;
 int FUNC_2 (void (*) (int,short,void*)) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int,int ,int ,void*) ;
 int FUNC_5 (int *,struct timeval*) ;

__attribute__((used)) static int
FUNC_6(struct ub_event* VAR_1, struct ub_event_base* VAR_2,
 void (*VAR_3)(int, short, void*), void* VAR_4, struct timeval* VAR_5)
{
 FUNC_4(&FUNC_0(VAR_1)->ev, -1, VAR_0,FUNC_2(VAR_3),VAR_4);
 if (FUNC_3(FUNC_1(VAR_2)->base, &FUNC_0(VAR_1)->ev)
  != 0)
  return -1;
 return FUNC_5(&FUNC_0(VAR_1)->ev, VAR_5);
}
