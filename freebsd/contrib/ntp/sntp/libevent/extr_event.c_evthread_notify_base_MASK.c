
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int (* th_notify_fn ) (struct event_base*) ;int is_notify_pending; } ;


 int FUNC_0 (struct event_base*) ;
 int FUNC_1 (struct event_base*) ;

__attribute__((used)) static int
FUNC_2(struct event_base *VAR_0)
{
 FUNC_0(VAR_0);
 if (!VAR_0->th_notify_fn)
  return -1;
 if (VAR_0->is_notify_pending)
  return 0;
 VAR_0->is_notify_pending = 1;
 return VAR_0->th_notify_fn(VAR_0);
}
