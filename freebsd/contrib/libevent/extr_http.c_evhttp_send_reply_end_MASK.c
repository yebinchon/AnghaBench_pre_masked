
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int userdone; scalar_t__ chunked; struct evhttp_connection* evcon; } ;
struct evhttp_connection {int * cb_arg; int (* cb ) (struct evhttp_connection*,int *) ;int bufev; } ;
struct evbuffer {int dummy; } ;


 struct evbuffer* FUNC_0 (int ) ;
 int FUNC_1 (struct evbuffer*,char*,int) ;
 scalar_t__ FUNC_2 (struct evbuffer*) ;
 int FUNC_3 (struct evhttp_request*) ;
 int FUNC_4 (struct evhttp_connection*,int *) ;
 int FUNC_5 (struct evhttp_connection*,int (*) (struct evhttp_connection*,int *),int *) ;

void
FUNC_6(struct evhttp_request *VAR_0)
{
 struct evhttp_connection *VAR_1 = VAR_0->evcon;
 struct evbuffer *VAR_2;

 if (VAR_1 == ((void*)0)) {
  FUNC_3(VAR_0);
  return;
 }

 VAR_2 = FUNC_0(VAR_1->bufev);


 VAR_0->userdone = 1;

 if (VAR_0->chunked) {
  FUNC_1(VAR_2, "0\r\n\r\n", 5);
  FUNC_5(VAR_0->evcon, FUNC_4, ((void*)0));
  VAR_0->chunked = 0;
 } else if (FUNC_2(VAR_2) == 0) {

  FUNC_4(VAR_1, ((void*)0));
 } else {

  VAR_1->cb = FUNC_4;
  VAR_1->cb_arg = ((void*)0);
 }
}
