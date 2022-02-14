
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int kind; } ;
struct evhttp_connection {scalar_t__ state; int requests; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct evhttp_request* FUNC_1 (int *) ;
 int FUNC_2 (struct evhttp_connection*) ;

__attribute__((used)) static void
FUNC_3(struct evhttp_connection *VAR_2, void *VAR_3)
{

 struct evhttp_request *VAR_4 = FUNC_1(&VAR_2->requests);
 FUNC_0(VAR_4 != ((void*)0));

 FUNC_0(VAR_2->state == VAR_0);


 VAR_4->kind = VAR_1;

 FUNC_2(VAR_2);
}
