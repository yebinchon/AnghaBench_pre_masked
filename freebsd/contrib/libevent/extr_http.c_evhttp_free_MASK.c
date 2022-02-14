
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_server_alias {struct evhttp_server_alias* alias; int aliases; struct evhttp_server_alias* vhost_pattern; int virtualhosts; struct evhttp_server_alias* what; int callbacks; int connections; int listener; int sockets; } ;
struct evhttp_connection {int dummy; } ;
struct evhttp_cb {struct evhttp_cb* alias; int aliases; struct evhttp_cb* vhost_pattern; int virtualhosts; struct evhttp_cb* what; int callbacks; int connections; int listener; int sockets; } ;
struct evhttp_bound_socket {struct evhttp_bound_socket* alias; int aliases; struct evhttp_bound_socket* vhost_pattern; int virtualhosts; struct evhttp_bound_socket* what; int callbacks; int connections; int listener; int sockets; } ;
struct evhttp {struct evhttp* alias; int aliases; struct evhttp* vhost_pattern; int virtualhosts; struct evhttp* what; int callbacks; int connections; int listener; int sockets; } ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct evhttp_server_alias*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct evhttp_connection*) ;
 int FUNC_4 (struct evhttp_server_alias*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_5(struct evhttp* VAR_2)
{
 struct evhttp_cb *VAR_3;
 struct evhttp_connection *VAR_4;
 struct evhttp_bound_socket *VAR_5;
 struct evhttp* VAR_6;
 struct evhttp_server_alias *VAR_7;


 while ((VAR_5 = FUNC_0(&VAR_2->sockets)) != ((void*)0)) {
  FUNC_1(&VAR_2->sockets, VAR_5, VAR_0);

  FUNC_2(VAR_5->listener);

  FUNC_4(VAR_5);
 }

 while ((VAR_4 = FUNC_0(&VAR_2->connections)) != ((void*)0)) {

  FUNC_3(VAR_4);
 }

 while ((VAR_3 = FUNC_0(&VAR_2->callbacks)) != ((void*)0)) {
  FUNC_1(&VAR_2->callbacks, VAR_3, VAR_0);
  FUNC_4(VAR_3->what);
  FUNC_4(VAR_3);
 }

 while ((VAR_6 = FUNC_0(&VAR_2->virtualhosts)) != ((void*)0)) {
  FUNC_1(&VAR_2->virtualhosts, VAR_6, VAR_1);

  FUNC_5(VAR_6);
 }

 if (VAR_2->vhost_pattern != ((void*)0))
  FUNC_4(VAR_2->vhost_pattern);

 while ((VAR_7 = FUNC_0(&VAR_2->aliases)) != ((void*)0)) {
  FUNC_1(&VAR_2->aliases, VAR_7, VAR_0);
  FUNC_4(VAR_7->alias);
  FUNC_4(VAR_7);
 }

 FUNC_4(VAR_2);
}
