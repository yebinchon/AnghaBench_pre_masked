
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long expires; int timer; } ;
struct rpc_wait_queue {TYPE_1__ timer_list; } ;


 int FUNC_0 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_1(struct rpc_wait_queue *VAR_0, unsigned long VAR_1)
{
 VAR_0->timer_list.expires = VAR_1;
 FUNC_0(&VAR_0->timer_list.timer, VAR_1);
}
