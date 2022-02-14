
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evmap_signal {int events; } ;
struct event_base {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct event_base *VAR_0, int VAR_1,
    struct evmap_signal *VAR_2, void *VAR_3)
{
 return FUNC_0(&VAR_2->events);
}
