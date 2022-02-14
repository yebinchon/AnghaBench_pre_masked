
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int dummy; } ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
typedef int hook_p ;
struct TYPE_5__ {int * hook; } ;
struct TYPE_4__ {TYPE_2__ lower; TYPE_2__ upper; scalar_t__ timer_scheduled; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (TYPE_2__*,struct timeval*) ;

__attribute__((used)) static void
FUNC_3(node_p VAR_0, hook_p VAR_1, void *VAR_2, int VAR_3)
{
 const priv_p VAR_4 = FUNC_0(VAR_0);
 struct timeval VAR_5;

 VAR_4->timer_scheduled = 0;
 FUNC_1(&VAR_5);
 if (VAR_4->upper.hook != ((void*)0))
  FUNC_2(&VAR_4->upper, &VAR_5);
 if (VAR_4->lower.hook != ((void*)0))
  FUNC_2(&VAR_4->lower, &VAR_5);
}
