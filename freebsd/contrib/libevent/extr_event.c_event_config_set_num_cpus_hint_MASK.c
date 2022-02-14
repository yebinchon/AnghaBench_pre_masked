
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_config {int n_cpus_hint; } ;



int
FUNC_0(struct event_config *VAR_0, int VAR_1)
{
 if (!VAR_0)
  return (-1);
 VAR_0->n_cpus_hint = VAR_1;
 return (0);
}
