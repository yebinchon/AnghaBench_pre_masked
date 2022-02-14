
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {int ev_write; int ev_read; struct event_base* ev_base; int * be_ops; } ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 int VAR_0 ;
 int FUNC_2 (struct event_base*,int *) ;

int
FUNC_3(struct event_base *VAR_1, struct bufferevent *VAR_2)
{
 int VAR_3 = -1;

 FUNC_0(VAR_2);
 if (VAR_2->be_ops != &VAR_0)
  goto done;

 VAR_2->ev_base = VAR_1;

 VAR_3 = FUNC_2(VAR_1, &VAR_2->ev_read);
 if (VAR_3 == -1)
  goto done;

 VAR_3 = FUNC_2(VAR_1, &VAR_2->ev_write);
done:
 FUNC_1(VAR_2);
 return VAR_3;
}
