
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int level; } ;



int
FUNC_0 (struct frame_info *VAR_0)
{
  if (VAR_0 == ((void*)0))
    return -1;
  else
    return VAR_0->level;
}
