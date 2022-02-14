
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct link_req {scalar_t__ timer_intv; int timer; TYPE_2__* bearer; } ;
struct TYPE_3__ {scalar_t__ count; } ;
struct TYPE_4__ {TYPE_1__ nodes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;

void FUNC_1(struct link_req *VAR_2)
{
 if (!VAR_2)
  return;

 if (VAR_2->timer_intv == VAR_1) {
  if (!VAR_2->bearer->nodes.count) {
   VAR_2->timer_intv = VAR_0;
   FUNC_0(&VAR_2->timer, VAR_2->timer_intv);
  }
 } else if (VAR_2->timer_intv == VAR_0) {
  if (VAR_2->bearer->nodes.count) {
   VAR_2->timer_intv = VAR_1;
   FUNC_0(&VAR_2->timer, VAR_2->timer_intv);
  }
 } else {

 }
}
