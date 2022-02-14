
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_connection {scalar_t__ state; int bufev; struct event_base* base; } ;
struct event_base {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct event_base*,int ) ;

void
FUNC_2(struct evhttp_connection *VAR_1,
    struct event_base *VAR_2)
{
 FUNC_0(VAR_1->base == ((void*)0));
 FUNC_0(VAR_1->state == VAR_0);
 VAR_1->base = VAR_2;
 FUNC_1(VAR_2, VAR_1->bufev);
}
