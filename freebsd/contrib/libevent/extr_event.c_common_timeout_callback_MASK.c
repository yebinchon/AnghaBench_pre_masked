
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; int tv_usec; } ;
struct event_base {int dummy; } ;
struct TYPE_2__ {scalar_t__ tv_sec; int tv_usec; } ;
struct event {TYPE_1__ ev_timeout; } ;
struct common_timeout_list {int events; struct event_base* base; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct event_base*,int ) ;
 int FUNC_1 (struct event_base*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct event* FUNC_2 (int *) ;
 int FUNC_3 (struct common_timeout_list*,struct timeval*,struct event*) ;
 int FUNC_4 (struct event*,int ,int) ;
 int FUNC_5 (struct event*,int ) ;
 int FUNC_6 (struct event_base*,struct timeval*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7(evutil_socket_t VAR_4, short VAR_5, void *VAR_6)
{
 struct timeval VAR_7;
 struct common_timeout_list *VAR_8 = VAR_6;
 struct event_base *VAR_9 = VAR_8->base;
 struct event *VAR_10 = ((void*)0);
 FUNC_0(VAR_9, VAR_3);
 FUNC_6(VAR_9, &VAR_7);
 while (1) {
  VAR_10 = FUNC_2(&VAR_8->events);
  if (!VAR_10 || VAR_10->ev_timeout.tv_sec > VAR_7.tv_sec ||
      (VAR_10->ev_timeout.tv_sec == VAR_7.tv_sec &&
   (VAR_10->ev_timeout.tv_usec&VAR_2) > VAR_7.tv_usec))
   break;
  FUNC_5(VAR_10, VAR_0);
  FUNC_4(VAR_10, VAR_1, 1);
 }
 if (VAR_10)
  FUNC_3(VAR_8, &VAR_7, VAR_10);
 FUNC_1(VAR_9, VAR_3);
}
