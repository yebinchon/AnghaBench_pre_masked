
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct persist_active_timeout_called {int n; short* events; int * tvs; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(evutil_socket_t VAR_0, short VAR_1, void *VAR_2)
{
 struct persist_active_timeout_called *VAR_3 = VAR_2;
 if (VAR_3->n < 15) {
  VAR_3->events[VAR_3->n] = VAR_1;
  FUNC_0(&VAR_3->tvs[VAR_3->n], ((void*)0));
  ++VAR_3->n;
 }
}
