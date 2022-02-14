
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {void* regcache_data; } ;



void
FUNC_0 (struct thread_info *VAR_0, void *VAR_1)
{
  VAR_0->regcache_data = VAR_1;
}
