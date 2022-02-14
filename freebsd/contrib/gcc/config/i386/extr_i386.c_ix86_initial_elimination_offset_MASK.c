
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ix86_frame {scalar_t__ frame_pointer_offset; scalar_t__ stack_pointer_offset; scalar_t__ hard_frame_pointer_offset; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ix86_frame*) ;

HOST_WIDE_INT
FUNC_2 (int VAR_4, int VAR_5)
{
  struct ix86_frame VAR_6;
  FUNC_1 (&VAR_6);

  if (VAR_4 == VAR_0 && VAR_5 == VAR_2)
    return VAR_6.hard_frame_pointer_offset;
  else if (VAR_4 == VAR_1
    && VAR_5 == VAR_2)
    return VAR_6.hard_frame_pointer_offset - VAR_6.frame_pointer_offset;
  else
    {
      FUNC_0 (VAR_5 == VAR_3);

      if (VAR_4 == VAR_0)
 return VAR_6.stack_pointer_offset;

      FUNC_0 (VAR_4 == VAR_1);
      return VAR_6.stack_pointer_offset - VAR_6.frame_pointer_offset;
    }
}
