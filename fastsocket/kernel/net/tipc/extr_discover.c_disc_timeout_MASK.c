
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct link_req {int timer_intv; TYPE_3__* bearer; int timer; int dest; int buf; } ;
struct TYPE_8__ {int lock; } ;
struct TYPE_6__ {scalar_t__ count; } ;
struct TYPE_7__ {TYPE_4__ publ; TYPE_2__ nodes; TYPE_1__* media; } ;
struct TYPE_5__ {int (* send_msg ) (int ,TYPE_4__*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_4__*,int *) ;

__attribute__((used)) static void FUNC_4(struct link_req *VAR_2)
{
 FUNC_1(&VAR_2->bearer->publ.lock);

 VAR_2->bearer->media->send_msg(VAR_2->buf, &VAR_2->bearer->publ, &VAR_2->dest);

 if ((VAR_2->timer_intv == VAR_1) ||
     (VAR_2->timer_intv == VAR_0)) {

 } else {
  VAR_2->timer_intv *= 2;
  if (VAR_2->timer_intv > VAR_0)
   VAR_2->timer_intv = VAR_0;
  if ((VAR_2->timer_intv == VAR_0) &&
      (VAR_2->bearer->nodes.count))
   VAR_2->timer_intv = VAR_1;
 }
 FUNC_0(&VAR_2->timer, VAR_2->timer_intv);

 FUNC_2(&VAR_2->bearer->publ.lock);
}
