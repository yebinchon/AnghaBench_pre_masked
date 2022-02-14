
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int userdone; int output_buffer; struct evhttp_connection* evcon; } ;
struct evhttp_connection {int requests; } ;
struct evbuffer {int dummy; } ;


 int FUNC_0 (int) ;
 struct evhttp_request* FUNC_1 (int *) ;
 int FUNC_2 (int ,struct evbuffer*) ;
 int FUNC_3 (struct evhttp_connection*,struct evhttp_request*) ;
 int FUNC_4 (struct evhttp_request*) ;
 int VAR_0 ;
 int FUNC_5 (struct evhttp_connection*,int ,int *) ;

__attribute__((used)) static inline void
FUNC_6(struct evhttp_request *VAR_1, struct evbuffer *VAR_2)
{
 struct evhttp_connection *VAR_3 = VAR_1->evcon;

 if (VAR_3 == ((void*)0)) {
  FUNC_4(VAR_1);
  return;
 }

 FUNC_0(FUNC_1(&VAR_3->requests) == VAR_1);


 VAR_1->userdone = 1;


 if (VAR_2 != ((void*)0))
  FUNC_2(VAR_1->output_buffer, VAR_2);


 FUNC_3(VAR_3, VAR_1);

 FUNC_5(VAR_3, VAR_0, ((void*)0));
}
