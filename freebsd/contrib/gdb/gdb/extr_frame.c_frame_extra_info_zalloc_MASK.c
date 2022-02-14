
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {struct frame_extra_info* extra_info; } ;
struct frame_extra_info {int dummy; } ;


 struct frame_extra_info* FUNC_0 (long) ;

struct frame_extra_info *
FUNC_1 (struct frame_info *VAR_0, long VAR_1)
{
  VAR_0->extra_info = FUNC_0 (VAR_1);
  return VAR_0->extra_info;
}
