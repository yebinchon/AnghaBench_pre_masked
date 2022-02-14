
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_bound_socket {struct evconnlistener* listener; } ;
struct evhttp {int sockets; } ;
struct evconnlistener {int dummy; } ;


 int FUNC_0 (int *,struct evhttp_bound_socket*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct evconnlistener*,int ,struct evhttp*) ;
 struct evhttp_bound_socket* FUNC_2 (int) ;
 int VAR_1 ;

struct evhttp_bound_socket *
FUNC_3(struct evhttp *VAR_2, struct evconnlistener *VAR_3)
{
 struct evhttp_bound_socket *VAR_4;

 VAR_4 = FUNC_2(sizeof(struct evhttp_bound_socket));
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 VAR_4->listener = VAR_3;
 FUNC_0(&VAR_2->sockets, VAR_4, VAR_1);

 FUNC_1(VAR_3, VAR_0, VAR_2);
 return VAR_4;
}
