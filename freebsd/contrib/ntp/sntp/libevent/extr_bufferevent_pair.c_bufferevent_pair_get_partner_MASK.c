
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_pair {scalar_t__ partner; } ;
struct bufferevent {int dummy; } ;


 int FUNC_0 (struct bufferevent*) ;
 struct bufferevent* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct bufferevent*) ;
 struct bufferevent_pair* FUNC_3 (struct bufferevent*) ;

struct bufferevent *
FUNC_4(struct bufferevent *VAR_0)
{
 struct bufferevent_pair *VAR_1;
 struct bufferevent *VAR_2 = ((void*)0);
 VAR_1 = FUNC_3(VAR_0);
 if (! VAR_1)
  return ((void*)0);

 FUNC_2(VAR_0);
 if (VAR_1->partner)
  VAR_2 = FUNC_1(VAR_1->partner);
 FUNC_0(VAR_0);
 return VAR_2;
}
