
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct event_base {int dummy; } ;
struct TYPE_3__ {int output; } ;
struct TYPE_4__ {TYPE_1__ bev; } ;
struct bufferevent_pair {TYPE_2__ bev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,struct event_base*,int *,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (struct bufferevent_pair*) ;
 int FUNC_4 (int ,int ,struct bufferevent_pair*) ;
 struct bufferevent_pair* FUNC_5 (int,int) ;
 int FUNC_6 (struct bufferevent_pair*) ;

__attribute__((used)) static struct bufferevent_pair *
FUNC_7(struct event_base *VAR_2,
    int VAR_3)
{
 struct bufferevent_pair *VAR_4;
 if (! (VAR_4 = FUNC_5(1, sizeof(struct bufferevent_pair))))
  return ((void*)0);
 if (FUNC_1(&VAR_4->bev, VAR_2, &VAR_1,
  VAR_3)) {
  FUNC_6(VAR_4);
  return ((void*)0);
 }
 if (!FUNC_4(VAR_4->bev.bev.output, VAR_0, VAR_4)) {
  FUNC_0(FUNC_3(VAR_4));
  return ((void*)0);
 }

 FUNC_2(&VAR_4->bev.bev);

 return VAR_4;
}
