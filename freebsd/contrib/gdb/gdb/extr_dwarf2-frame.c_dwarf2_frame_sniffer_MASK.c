
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_unwind {int dummy; } ;
struct frame_info {int dummy; } ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (int *) ;
 struct frame_unwind const VAR_0 ;
 int FUNC_1 (struct frame_info*) ;

const struct frame_unwind *
FUNC_2 (struct frame_info *VAR_1)
{



  CORE_ADDR VAR_2 = FUNC_1 (VAR_1);
  if (FUNC_0 (&VAR_2))
    return &VAR_0;

  return ((void*)0);
}
