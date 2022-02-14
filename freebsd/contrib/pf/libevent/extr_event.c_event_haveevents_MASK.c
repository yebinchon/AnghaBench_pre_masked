
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {scalar_t__ event_count; } ;



int
FUNC_0(struct event_base *VAR_0)
{
 return (VAR_0->event_count > 0);
}
