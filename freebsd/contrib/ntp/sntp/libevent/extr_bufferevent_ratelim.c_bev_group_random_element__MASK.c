
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent_rate_limit_group {int members; int n_members; int weakrand_seed; } ;
struct bufferevent_private {int dummy; } ;
struct TYPE_2__ {int next_in_group; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct bufferevent_private* FUNC_2 (int *) ;
 struct bufferevent_private* FUNC_3 (struct bufferevent_private*,int ) ;
 int FUNC_4 (int *,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static struct bufferevent_private *
FUNC_5(struct bufferevent_rate_limit_group *VAR_1)
{
 int VAR_2;
 struct bufferevent_private *VAR_3;



 if (!VAR_1->n_members)
  return ((void*)0);

 FUNC_0(! FUNC_1(&VAR_1->members));

 VAR_2 = FUNC_4(&VAR_1->weakrand_seed, VAR_1->n_members);

 VAR_3 = FUNC_2(&VAR_1->members);
 while (VAR_2--)
  VAR_3 = FUNC_3(VAR_3, VAR_0->next_in_group);

 return VAR_3;
}
