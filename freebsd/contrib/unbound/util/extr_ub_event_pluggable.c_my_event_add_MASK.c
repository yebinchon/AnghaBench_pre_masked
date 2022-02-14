
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ub_event {int dummy; } ;
struct timeval {int dummy; } ;
struct TYPE_2__ {int ev; } ;


 TYPE_1__* FUNC_0 (struct ub_event*) ;
 int FUNC_1 (int *,struct timeval*) ;

__attribute__((used)) static int
FUNC_2(struct ub_event* VAR_0, struct timeval* VAR_1)
{
 return FUNC_1(&FUNC_0(VAR_0)->ev, VAR_1);
}
