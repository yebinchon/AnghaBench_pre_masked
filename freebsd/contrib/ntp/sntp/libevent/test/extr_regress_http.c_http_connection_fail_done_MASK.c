
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evhttp_connection {int dummy; } ;
struct event_base {int dummy; } ;


 int FUNC_0 (struct event_base*,int *) ;
 int FUNC_1 (struct evhttp_connection*) ;
 struct event_base* FUNC_2 (struct evhttp_connection*) ;
 int VAR_0 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct evhttp_request *VAR_1, void *VAR_2)
{
       struct evhttp_connection *VAR_3 = VAR_2;
       struct event_base *VAR_4 = FUNC_2(VAR_3);





       FUNC_3(!VAR_1);

       FUNC_1(VAR_3);

       VAR_0 = 1;

 end:
       FUNC_0(VAR_4, ((void*)0));
}
