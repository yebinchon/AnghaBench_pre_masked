
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evbuffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct evbuffer*,char*,char*) ;
 int FUNC_1 (struct evbuffer*) ;
 struct evbuffer* FUNC_2 () ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (struct evhttp_request*) ;
 int FUNC_5 (struct evhttp_request*,int ,char*,struct evbuffer*) ;

__attribute__((used)) static void
FUNC_6(struct evhttp_request *VAR_1, void *VAR_2)
{
 struct evbuffer *VAR_3 = FUNC_2();

 FUNC_3(FUNC_4(VAR_1), "Content-Type", "text/xml; charset=UTF-8");
 FUNC_0(VAR_3, "Hello, %s!", "127.0.0.1");

 FUNC_5(VAR_1, VAR_0, "OK", VAR_3);
 FUNC_1(VAR_3);
}
