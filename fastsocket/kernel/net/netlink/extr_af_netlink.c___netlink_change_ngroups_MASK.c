
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {size_t sk_protocol; } ;
struct netlink_table {unsigned int groups; unsigned long* listeners; } ;
struct listeners_rcu_head {unsigned long* ptr; int rcu_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,int ) ;
 unsigned long* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (unsigned long*,unsigned long*,scalar_t__) ;
 int VAR_2 ;
 struct netlink_table* VAR_3 ;
 int FUNC_5 (unsigned long*,unsigned long*) ;

int FUNC_6(struct sock *VAR_4, unsigned int VAR_5)
{
 unsigned long *VAR_6, *VAR_7 = ((void*)0);
 struct listeners_rcu_head *VAR_8;
 struct netlink_table *VAR_9 = &VAR_3[VAR_4->sk_protocol];

 if (VAR_5 < 32)
  VAR_5 = 32;

 if (FUNC_1(VAR_9->groups) < FUNC_1(VAR_5)) {
  VAR_6 = FUNC_3(FUNC_1(VAR_5) +
        sizeof(struct listeners_rcu_head),
        VAR_1);
  if (!VAR_6)
   return -VAR_0;
  VAR_7 = VAR_9->listeners;
  FUNC_4(VAR_6, VAR_7, FUNC_1(VAR_9->groups));
  FUNC_5(VAR_9->listeners, VAR_6);







  VAR_8 = (void *)(VAR_9->listeners +
     FUNC_0(VAR_9->groups));
  VAR_8->ptr = VAR_7;
  FUNC_2(&VAR_8->rcu_head, VAR_2);
 }
 VAR_9->groups = VAR_5;

 return 0;
}
