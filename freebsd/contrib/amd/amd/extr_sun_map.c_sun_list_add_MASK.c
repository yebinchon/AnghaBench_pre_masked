
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sun_list {TYPE_1__* last; TYPE_1__* first; } ;
struct TYPE_3__ {struct TYPE_3__* q_forw; struct TYPE_3__* q_back; } ;
typedef TYPE_1__ qelem ;



void
FUNC_0(struct sun_list *VAR_0, qelem *VAR_1)
{
  if (VAR_0->last == ((void*)0)) {
    VAR_0->last = VAR_1;
    VAR_0->first = VAR_1;
    VAR_1->q_back = ((void*)0);
  }
  else {
    VAR_0->last->q_forw = VAR_1;
    VAR_1->q_back = VAR_0->last;
    VAR_0->last = VAR_1;
  }

  VAR_1->q_forw = ((void*)0);
}
