
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {struct frame_extra_info* extra_info; } ;
struct frame_extra_info {int dummy; } ;



struct frame_extra_info *
FUNC_0 (struct frame_info *VAR_0)
{
  return VAR_0->extra_info;
}
