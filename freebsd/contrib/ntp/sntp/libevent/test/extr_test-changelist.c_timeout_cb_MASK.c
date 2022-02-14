
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int dummy; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct event*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(evutil_socket_t VAR_0, short VAR_1, void *VAR_2)
{
 FUNC_1("timeout fired, time to end test\n");
 FUNC_0(*(struct event**)VAR_2);
 return;
}
