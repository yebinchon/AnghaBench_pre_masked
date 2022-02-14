
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_callback {int dummy; } ;
struct evbuffer {struct bufferevent* parent; } ;
struct bufferevent {int dummy; } ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (struct evbuffer*) ;
 int FUNC_3 (struct evbuffer*,int) ;

__attribute__((used)) static void
FUNC_4(struct event_callback *VAR_0, void *VAR_1)
{
 struct bufferevent *VAR_2 = ((void*)0);
 struct evbuffer *VAR_3 = VAR_1;



 FUNC_0(VAR_3);
 VAR_2 = VAR_3->parent;
 FUNC_3(VAR_3, 1);
 FUNC_2(VAR_3);
 if (VAR_2)
  FUNC_1(VAR_2);
}
