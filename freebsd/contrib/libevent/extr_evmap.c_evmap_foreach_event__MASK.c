
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evmap_foreach_event_helper {void* arg; int fn; } ;
struct event_base {int dummy; } ;
typedef int event_base_foreach_event_cb ;


 int VAR_0 ;
 int FUNC_0 (struct event_base*,int ,struct evmap_foreach_event_helper*) ;
 int VAR_1 ;
 int FUNC_1 (struct event_base*,int ,struct evmap_foreach_event_helper*) ;

int
FUNC_2(struct event_base *VAR_2,
    event_base_foreach_event_cb VAR_3, void *VAR_4)
{
 struct evmap_foreach_event_helper VAR_5;
 int VAR_6;
 VAR_5.fn = VAR_3;
 VAR_5.arg = VAR_4;
 if ((VAR_6 = FUNC_0(VAR_2, VAR_0, &VAR_5)))
  return VAR_6;
 return FUNC_1(VAR_2, VAR_1, &VAR_5);
}
