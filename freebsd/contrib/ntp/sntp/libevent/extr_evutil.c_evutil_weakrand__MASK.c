
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evutil_weakrand_state {int seed; } ;
typedef int ev_int32_t ;



ev_int32_t
FUNC_0(struct evutil_weakrand_state *VAR_0)
{
 VAR_0->seed = ((VAR_0->seed) * 1103515245 + 12345) & 0x7fffffff;
 return (ev_int32_t)(VAR_0->seed);
}
