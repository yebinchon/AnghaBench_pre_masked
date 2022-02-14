
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_rate_limit_group {scalar_t__ n_members; int lock; int master_refill_event; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bufferevent_rate_limit_group*) ;
 int FUNC_3 (struct bufferevent_rate_limit_group*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct bufferevent_rate_limit_group*) ;

void
FUNC_6(struct bufferevent_rate_limit_group *VAR_1)
{
 FUNC_2(VAR_1);
 FUNC_1(0 == VAR_1->n_members);
 FUNC_4(&VAR_1->master_refill_event);
 FUNC_3(VAR_1);
 FUNC_0(VAR_1->lock, VAR_0);
 FUNC_5(VAR_1);
}
