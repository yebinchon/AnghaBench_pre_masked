
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {scalar_t__ chunked; struct evhttp_connection* evcon; } ;
struct evhttp_connection {int bufev; } ;
struct evbuffer {int dummy; } ;


 struct evbuffer* FUNC_0 (int ) ;
 int FUNC_1 (struct evbuffer*,char*,int) ;
 int FUNC_2 (struct evbuffer*,struct evbuffer*) ;
 int FUNC_3 (struct evbuffer*,char*,unsigned int) ;
 scalar_t__ FUNC_4 (struct evbuffer*) ;
 int FUNC_5 (struct evhttp_request*) ;
 int FUNC_6 (struct evhttp_connection*,void (*) (struct evhttp_connection*,void*),void*) ;

void
FUNC_7(struct evhttp_request *VAR_0, struct evbuffer *VAR_1,
    void (*VAR_2)(struct evhttp_connection *, void *), void *VAR_3)
{
 struct evhttp_connection *VAR_4 = VAR_0->evcon;
 struct evbuffer *VAR_5;

 if (VAR_4 == ((void*)0))
  return;

 VAR_5 = FUNC_0(VAR_4->bufev);

 if (FUNC_4(VAR_1) == 0)
  return;
 if (!FUNC_5(VAR_0))
  return;
 if (VAR_0->chunked) {
  FUNC_3(VAR_5, "%x\r\n",
        (unsigned)FUNC_4(VAR_1));
 }
 FUNC_2(VAR_5, VAR_1);
 if (VAR_0->chunked) {
  FUNC_1(VAR_5, "\r\n", 2);
 }
 FUNC_6(VAR_4, VAR_2, VAR_3);
}
