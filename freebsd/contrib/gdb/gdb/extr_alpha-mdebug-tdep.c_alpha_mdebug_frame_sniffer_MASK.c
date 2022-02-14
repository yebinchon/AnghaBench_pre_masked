
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_unwind {int dummy; } ;
struct frame_info {int dummy; } ;
typedef int * alpha_extra_func_info_t ;
typedef int CORE_ADDR ;


 struct frame_unwind const VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (struct frame_info*) ;

const struct frame_unwind *
FUNC_3 (struct frame_info *VAR_1)
{
  CORE_ADDR VAR_2 = FUNC_2 (VAR_1);
  alpha_extra_func_info_t VAR_3;



  VAR_3 = FUNC_1 (VAR_2);
  if (VAR_3 == ((void*)0))
    return ((void*)0);



  if (FUNC_0 (VAR_2, VAR_3))
    return ((void*)0);

  return &VAR_0;
}
