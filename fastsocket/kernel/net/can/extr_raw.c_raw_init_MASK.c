
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_4__ {int notifier_call; } ;
struct TYPE_3__ {int can_mask; scalar_t__ can_id; } ;
struct raw_sock {int count; int loopback; TYPE_2__ notifier; scalar_t__ recv_own_msgs; TYPE_1__ dfilter; TYPE_1__* filter; scalar_t__ ifindex; scalar_t__ bound; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct raw_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_2)
{
 struct raw_sock *VAR_3 = FUNC_0(VAR_2);

 VAR_3->bound = 0;
 VAR_3->ifindex = 0;


 VAR_3->dfilter.can_id = 0;
 VAR_3->dfilter.can_mask = VAR_0;
 VAR_3->filter = &VAR_3->dfilter;
 VAR_3->count = 1;


 VAR_3->loopback = 1;
 VAR_3->recv_own_msgs = 0;


 VAR_3->notifier.notifier_call = VAR_1;

 FUNC_1(&VAR_3->notifier);

 return 0;
}
