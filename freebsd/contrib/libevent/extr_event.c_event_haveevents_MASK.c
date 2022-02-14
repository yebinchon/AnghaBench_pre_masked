
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {scalar_t__ virtual_event_count; scalar_t__ event_count; } ;



__attribute__((used)) static int
FUNC_0(struct event_base *VAR_0)
{

 return (VAR_0->virtual_event_count > 0 || VAR_0->event_count > 0);
}
