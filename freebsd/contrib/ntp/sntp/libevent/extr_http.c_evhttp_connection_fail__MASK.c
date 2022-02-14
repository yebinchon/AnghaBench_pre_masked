
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {void (* error_cb ) (int,void*) ;void (* cb ) (struct evhttp_request*,void*) ;void* cb_arg; } ;
struct evhttp_connection {int flags; int requests; int bufev; } ;
typedef enum evhttp_request_error { ____Placeholder_evhttp_request_error } evhttp_request_error ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 struct evhttp_request* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct evhttp_request*,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct evhttp_connection*) ;
 int FUNC_7 (struct evhttp_connection*) ;
 int FUNC_8 (struct evhttp_request*,int) ;
 int FUNC_9 (struct evhttp_connection*) ;
 int FUNC_10 (struct evhttp_request*) ;
 int VAR_4 ;
 void FUNC_11 (struct evhttp_request*,void*) ;

void
FUNC_12(struct evhttp_connection *VAR_5,
    enum evhttp_request_error VAR_6)
{
 const int VAR_7 = FUNC_2();
 struct evhttp_request* VAR_8 = FUNC_3(&VAR_5->requests);
 void (*VAR_9)(struct evhttp_request *, void *);
 void *VAR_10;
 void (*VAR_11)(enum evhttp_request_error, void *);
 void *VAR_12;
 FUNC_0(VAR_8 != ((void*)0));

 FUNC_5(VAR_5->bufev, VAR_2|VAR_3);

 if (VAR_5->flags & VAR_0) {
  if (FUNC_8(VAR_8, VAR_6) == -1)
   FUNC_7(VAR_5);
  return;
 }

 VAR_11 = VAR_8->error_cb;
 VAR_12 = VAR_8->cb_arg;

 if (VAR_6 != VAR_1) {

  VAR_9 = VAR_8->cb;
  VAR_10 = VAR_8->cb_arg;
 } else {
  VAR_9 = ((void*)0);
  VAR_10 = ((void*)0);
 }





 FUNC_4(&VAR_5->requests, VAR_8, VAR_4);
 FUNC_10(VAR_8);


 FUNC_9(VAR_5);


 if (FUNC_3(&VAR_5->requests) != ((void*)0))
  FUNC_6(VAR_5);





 FUNC_1(VAR_7);


 if (VAR_11 != ((void*)0))
  VAR_11(VAR_6, VAR_12);
 if (VAR_9 != ((void*)0))
  (*VAR_9)(((void*)0), VAR_10);
}
