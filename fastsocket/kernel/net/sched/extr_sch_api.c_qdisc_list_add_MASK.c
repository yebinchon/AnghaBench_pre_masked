
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct Qdisc {scalar_t__ parent; int flags; int list; } ;
struct TYPE_4__ {TYPE_1__* qdisc; } ;
struct TYPE_3__ {int list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 TYPE_2__* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_2(struct Qdisc *VAR_2)
{
 if ((VAR_2->parent != VAR_1) && !(VAR_2->flags & VAR_0))
  FUNC_0(&VAR_2->list, &FUNC_1(VAR_2)->qdisc->list);
}
