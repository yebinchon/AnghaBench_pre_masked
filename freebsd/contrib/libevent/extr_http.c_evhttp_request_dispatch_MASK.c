
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evhttp_connection {scalar_t__ state; int requests; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 struct evhttp_request* FUNC_1 (int *) ;
 int FUNC_2 (struct evhttp_connection*) ;
 int FUNC_3 (struct evhttp_connection*,struct evhttp_request*) ;
 int FUNC_4 (struct evhttp_connection*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct evhttp_connection* VAR_3)
{
 struct evhttp_request *VAR_4 = FUNC_1(&VAR_3->requests);


 if (VAR_4 == ((void*)0))
  return;


 FUNC_2(VAR_3);


 FUNC_0(VAR_3->state == VAR_0);

 VAR_3->state = VAR_1;


 FUNC_3(VAR_3, VAR_4);

 FUNC_4(VAR_3, VAR_2, ((void*)0));
}
