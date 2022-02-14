
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_data {scalar_t__ prefix_lines; } ;
typedef scalar_t__ lin ;



lin
FUNC_0 (struct file_data const *VAR_0, lin VAR_1)
{
  return VAR_1 + VAR_0->prefix_lines + 1;
}
