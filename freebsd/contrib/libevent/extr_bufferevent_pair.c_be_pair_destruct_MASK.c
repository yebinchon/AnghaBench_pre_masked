
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ own_lock; } ;
struct bufferevent_pair {TYPE_3__* unlinked_partner; TYPE_2__ bev; } ;
struct bufferevent {int dummy; } ;
struct TYPE_4__ {int own_lock; } ;
struct TYPE_6__ {TYPE_1__ bev; } ;


 struct bufferevent_pair* FUNC_0 (struct bufferevent*) ;

__attribute__((used)) static void
FUNC_1(struct bufferevent *VAR_0)
{
 struct bufferevent_pair *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->unlinked_partner && VAR_1->bev.own_lock) {
  VAR_1->unlinked_partner->bev.own_lock = 1;
  VAR_1->bev.own_lock = 0;
 }
 VAR_1->unlinked_partner = ((void*)0);
}
