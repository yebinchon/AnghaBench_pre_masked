
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {struct event_base* ev_base; } ;



struct event_base *
FUNC_0(struct bufferevent *VAR_0)
{
 return VAR_0->ev_base;
}
