
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evhttp_connection {int fd; struct evhttp_connection* address; struct evhttp_connection* bind_address; int * bufev; int read_more_deferred_cb; int retry_ev; struct evhttp* http_server; int requests; int closecb_arg; int (* closecb ) (struct evhttp_connection*,int ) ;} ;
struct evhttp {int connections; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct evhttp_request* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct evhttp_connection*,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct evhttp_connection*) ;
 int FUNC_11 (struct evhttp_connection*,struct evhttp_request*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct evhttp_connection*) ;
 int FUNC_14 (struct evhttp_connection*) ;
 int VAR_4 ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (struct evhttp_connection*,int ) ;

void
FUNC_17(struct evhttp_connection *VAR_5)
{
 struct evhttp_request *VAR_6;


 if (VAR_5->fd != -1) {
  if (FUNC_10(VAR_5) && VAR_5->closecb != ((void*)0))
   (*VAR_5->closecb)(VAR_5, VAR_5->closecb_arg);
 }






 while ((VAR_6 = FUNC_0(&VAR_5->requests)) != ((void*)0)) {
  FUNC_11(VAR_5, VAR_6);
 }

 if (VAR_5->http_server != ((void*)0)) {
  struct evhttp *VAR_7 = VAR_5->http_server;
  FUNC_1(&VAR_7->connections, VAR_5, VAR_4);
 }

 if (FUNC_9(&VAR_5->retry_ev)) {
  FUNC_8(&VAR_5->retry_ev);
  FUNC_6(&VAR_5->retry_ev);
 }

 if (VAR_5->bufev != ((void*)0))
  FUNC_3(VAR_5->bufev);

 FUNC_7(FUNC_13(VAR_5),
     &VAR_5->read_more_deferred_cb);

 if (VAR_5->fd == -1)
  VAR_5->fd = FUNC_5(VAR_5->bufev);

 if (VAR_5->fd != -1) {
  FUNC_2(VAR_5->bufev, VAR_2|VAR_3);
  FUNC_15(VAR_5->fd, VAR_1);
  if (!(FUNC_4(VAR_5->bufev) & VAR_0)) {
   FUNC_12(VAR_5->fd);
  }
 }

 if (VAR_5->bind_address != ((void*)0))
  FUNC_14(VAR_5->bind_address);

 if (VAR_5->address != ((void*)0))
  FUNC_14(VAR_5->address);

 FUNC_14(VAR_5);
}
