
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct event {int dummy; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct event_base*) ;
 struct event* FUNC_1 (struct event_base*) ;
 int FUNC_2 (struct event_base*,int *) ;
 struct event_base* FUNC_3 (struct event*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(evutil_socket_t VAR_0, short VAR_1, void *VAR_2)
{
 struct event *VAR_3 = VAR_2;
 struct event_base *VAR_4 = FUNC_3(VAR_3);
 FUNC_0(VAR_4);
 FUNC_2(VAR_4, ((void*)0));
 FUNC_4(VAR_3 == FUNC_1(VAR_4));
}
