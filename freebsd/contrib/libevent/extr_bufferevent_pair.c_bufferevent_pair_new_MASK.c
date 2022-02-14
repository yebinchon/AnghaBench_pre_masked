
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct event_base {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct bufferevent_pair {struct bufferevent_pair* partner; TYPE_1__ bev; } ;
struct bufferevent {int output; int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bufferevent*,int ) ;
 int FUNC_1 (struct bufferevent*) ;
 struct bufferevent_pair* FUNC_2 (struct event_base*,int) ;
 struct bufferevent* FUNC_3 (struct bufferevent_pair*) ;
 int FUNC_4 (int ,int) ;

int
FUNC_5(struct event_base *VAR_2, int VAR_3,
    struct bufferevent *VAR_4[2])
{
 struct bufferevent_pair *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 int VAR_7;

 VAR_3 |= VAR_0;
 VAR_7 = VAR_3 & ~VAR_1;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_5)
  return -1;
 VAR_6 = FUNC_2(VAR_2, VAR_7);
 if (!VAR_6) {
  FUNC_1(FUNC_3(VAR_5));
  return -1;
 }

 if (VAR_3 & VAR_1) {

  FUNC_0(FUNC_3(VAR_6), VAR_5->bev.lock);
 }

 VAR_5->partner = VAR_6;
 VAR_6->partner = VAR_5;

 FUNC_4(FUNC_3(VAR_5)->input, 0);
 FUNC_4(FUNC_3(VAR_5)->output, 1);
 FUNC_4(FUNC_3(VAR_6)->input, 0);
 FUNC_4(FUNC_3(VAR_6)->output, 1);

 VAR_4[0] = FUNC_3(VAR_5);
 VAR_4[1] = FUNC_3(VAR_6);

 return 0;
}
