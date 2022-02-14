
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct event_base*,int *) ;
 int FUNC_2 (struct bufferevent*,short,void*) ;

__attribute__((used)) static void
FUNC_3(struct bufferevent *VAR_0, short VAR_1, void *VAR_2)
{
 struct event_base *VAR_3 = VAR_2;
 if (VAR_1 == ~0) {
  FUNC_0(("Event successfully triggered."));
  FUNC_1(VAR_3, ((void*)0));
  return;
 }
 FUNC_2(VAR_0, VAR_1, VAR_2);
}
