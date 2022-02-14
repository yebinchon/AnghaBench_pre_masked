
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct evconnlistener {int dummy; } ;
typedef scalar_t__ evutil_socket_t ;
typedef int ev_socklen_t ;


 scalar_t__ FUNC_0 (struct evconnlistener*) ;
 int FUNC_1 (scalar_t__,struct sockaddr*,int *) ;

int
FUNC_2(struct evconnlistener *VAR_0,
    struct sockaddr *VAR_1, ev_socklen_t *VAR_2)
{
 evutil_socket_t VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 <= 0)
  return -1;
 return FUNC_1(VAR_3, VAR_1, VAR_2);
}
