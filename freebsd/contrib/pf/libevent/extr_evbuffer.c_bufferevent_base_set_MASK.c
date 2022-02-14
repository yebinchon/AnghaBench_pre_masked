
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {int ev_write; int ev_read; } ;


 int FUNC_0 (struct event_base*,int *) ;

int
FUNC_1(struct event_base *VAR_0, struct bufferevent *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, &VAR_1->ev_read);
 if (VAR_2 == -1)
  return (VAR_2);

 VAR_2 = FUNC_0(VAR_0, &VAR_1->ev_write);
 return (VAR_2);
}
