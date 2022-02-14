
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evbuffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct evbuffer*,int ,int ) ;
 int FUNC_1 (struct evbuffer*) ;
 struct evbuffer* FUNC_2 () ;
 int FUNC_3 (struct evhttp_request*,int ,char*,struct evbuffer*) ;

__attribute__((used)) static void
FUNC_4(struct evhttp_request *VAR_3, void *VAR_4)
{
 struct evbuffer *VAR_5 = FUNC_2();

 FUNC_0(VAR_5, VAR_1, VAR_2);


 FUNC_3(VAR_3, VAR_0, "Everything is fine", VAR_5);

 FUNC_1(VAR_5);
}
