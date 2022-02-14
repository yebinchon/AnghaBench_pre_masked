
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link {TYPE_1__* owner; } ;
struct TYPE_2__ {struct link** active_links; } ;



int FUNC_0(struct link *VAR_0)
{
 return ((VAR_0->owner->active_links[0] == VAR_0) ||
  (VAR_0->owner->active_links[1] == VAR_0));
}
