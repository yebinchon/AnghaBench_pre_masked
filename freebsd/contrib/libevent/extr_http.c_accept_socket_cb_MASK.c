
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct evhttp {int dummy; } ;
struct evconnlistener {int dummy; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct evhttp*,int ,struct sockaddr*,int) ;

__attribute__((used)) static void
FUNC_1(struct evconnlistener *VAR_0, evutil_socket_t VAR_1, struct sockaddr *VAR_2, int VAR_3, void *VAR_4)
{
 struct evhttp *VAR_5 = VAR_4;

 FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3);
}
