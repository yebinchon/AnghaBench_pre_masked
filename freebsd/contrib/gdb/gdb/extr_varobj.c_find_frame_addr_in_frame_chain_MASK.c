
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (struct frame_info*) ;
 struct frame_info* FUNC_1 (struct frame_info*) ;

__attribute__((used)) static struct frame_info *
FUNC_2 (CORE_ADDR VAR_0)
{
  struct frame_info *VAR_1 = ((void*)0);

  if (VAR_0 == (CORE_ADDR) 0)
    return ((void*)0);

  while (1)
    {
      VAR_1 = FUNC_1 (VAR_1);
      if (VAR_1 == ((void*)0))
 return ((void*)0);
      if (FUNC_0 (VAR_1) == VAR_0)
 return VAR_1;
    }
}
