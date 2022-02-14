
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {struct target_ops* beneath; } ;



struct target_ops *
FUNC_0 (struct target_ops *VAR_0)
{
  return VAR_0->beneath;
}
