
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent_pair {TYPE_1__* partner; TYPE_1__* unlinked_partner; } ;
struct bufferevent {int dummy; } ;
struct TYPE_2__ {int * partner; } ;


 struct bufferevent_pair* FUNC_0 (struct bufferevent*) ;

__attribute__((used)) static void
FUNC_1(struct bufferevent *VAR_0)
{
 struct bufferevent_pair *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->partner) {
  VAR_1->unlinked_partner = VAR_1->partner;
  VAR_1->partner->partner = ((void*)0);
  VAR_1->partner = ((void*)0);
 }
}
