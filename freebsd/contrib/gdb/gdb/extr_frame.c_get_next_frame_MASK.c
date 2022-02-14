
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {scalar_t__ level; struct frame_info* next; } ;



struct frame_info *
FUNC_0 (struct frame_info *VAR_0)
{
  if (VAR_0->level > 0)
    return VAR_0->next;
  else
    return ((void*)0);
}
