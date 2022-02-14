
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct function {int x_frame_offset; } ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static HOST_WIDE_INT
FUNC_0 (struct function *VAR_1)
{
  if (VAR_0)
    return -VAR_1->x_frame_offset;
  else
    return VAR_1->x_frame_offset;
}
