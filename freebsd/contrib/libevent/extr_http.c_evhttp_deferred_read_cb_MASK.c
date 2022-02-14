
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_connection {int bufev; } ;
struct event_callback {int dummy; } ;


 int FUNC_0 (int ,struct evhttp_connection*) ;

__attribute__((used)) static void
FUNC_1(struct event_callback *VAR_0, void *VAR_1)
{
 struct evhttp_connection *VAR_2 = VAR_1;
 FUNC_0(VAR_2->bufev, VAR_2);
}
