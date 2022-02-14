
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int dummy; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int FUNC_0 (struct event*) ;
 int FUNC_1 (struct event*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3(evutil_socket_t VAR_1, short VAR_2, void *VAR_3)
{
 struct event *VAR_4 = VAR_3;

 FUNC_2("signal_cb: got signal %d\n", FUNC_1(VAR_4));

 if (VAR_0 >= 2)
  FUNC_0(VAR_4);

 VAR_0++;
}
