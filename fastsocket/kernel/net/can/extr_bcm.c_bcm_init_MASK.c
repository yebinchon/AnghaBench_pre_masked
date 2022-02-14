
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int notifier_call; } ;
struct bcm_sock {TYPE_1__ notifier; int rx_ops; int tx_ops; int * bcm_proc_read; scalar_t__ dropped_usr_msgs; scalar_t__ ifindex; scalar_t__ bound; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct bcm_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_1)
{
 struct bcm_sock *VAR_2 = FUNC_1(VAR_1);

 VAR_2->bound = 0;
 VAR_2->ifindex = 0;
 VAR_2->dropped_usr_msgs = 0;
 VAR_2->bcm_proc_read = ((void*)0);

 FUNC_0(&VAR_2->tx_ops);
 FUNC_0(&VAR_2->rx_ops);


 VAR_2->notifier.notifier_call = VAR_0;

 FUNC_2(&VAR_2->notifier);

 return 0;
}
