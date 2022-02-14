
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct frame_base {int dummy; } ;
typedef int * alpha_extra_func_info_t ;
typedef int CORE_ADDR ;


 struct frame_base const VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (struct frame_info*) ;

__attribute__((used)) static const struct frame_base *
FUNC_2 (struct frame_info *VAR_1)
{
  CORE_ADDR VAR_2 = FUNC_1 (VAR_1);
  alpha_extra_func_info_t VAR_3;



  VAR_3 = FUNC_0 (VAR_2);
  if (VAR_3 == ((void*)0))
    return ((void*)0);

  return &VAR_0;
}
