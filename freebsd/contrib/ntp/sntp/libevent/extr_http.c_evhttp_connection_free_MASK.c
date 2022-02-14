
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int fd; struct evhttp_request* conn_address; struct evhttp_request* address; struct evhttp_request* bind_address; int * bufev; int read_more_deferred_cb; int retry_ev; struct evhttp* http_server; int requests; int closecb_arg; int (* closecb ) (struct evhttp_request*,int ) ;} ;
struct evhttp_connection {int fd; struct evhttp_connection* conn_address; struct evhttp_connection* address; struct evhttp_connection* bind_address; int * bufev; int read_more_deferred_cb; int retry_ev; struct evhttp* http_server; int requests; int closecb_arg; int (* closecb ) (struct evhttp_request*,int ) ;} ;
struct evhttp {int connections; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct evhttp_request* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct evhttp_request*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct evhttp_request*) ;
 int FUNC_9 (struct evhttp_request*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct evhttp_request*) ;
 int FUNC_12 (struct evhttp_request*) ;
 int VAR_2 ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (struct evhttp_request*,int ) ;

void
FUNC_15(struct evhttp_connection *VAR_3)
{
 struct evhttp_request *VAR_4;


 if (VAR_3->fd != -1) {
  if (FUNC_8(VAR_3) && VAR_3->closecb != ((void*)0))
   (*VAR_3->closecb)(VAR_3, VAR_3->closecb_arg);
 }






 while ((VAR_4 = FUNC_0(&VAR_3->requests)) != ((void*)0)) {
  FUNC_1(&VAR_3->requests, VAR_4, VAR_2);
  FUNC_9(VAR_4);
 }

 if (VAR_3->http_server != ((void*)0)) {
  struct evhttp *VAR_5 = VAR_3->http_server;
  FUNC_1(&VAR_5->connections, VAR_3, VAR_2);
 }

 if (FUNC_7(&VAR_3->retry_ev)) {
  FUNC_6(&VAR_3->retry_ev);
  FUNC_4(&VAR_3->retry_ev);
 }

 if (VAR_3->bufev != ((void*)0))
  FUNC_2(VAR_3->bufev);

 FUNC_5(FUNC_11(VAR_3),
     &VAR_3->read_more_deferred_cb);

 if (VAR_3->fd != -1) {
  FUNC_13(VAR_3->fd, VAR_1);
  if (!(FUNC_3(VAR_3->bufev) & VAR_0)) {
   FUNC_10(VAR_3->fd);
  }
 }

 if (VAR_3->bind_address != ((void*)0))
  FUNC_12(VAR_3->bind_address);

 if (VAR_3->address != ((void*)0))
  FUNC_12(VAR_3->address);

 if (VAR_3->conn_address != ((void*)0))
  FUNC_12(VAR_3->conn_address);

 FUNC_12(VAR_3);
}
