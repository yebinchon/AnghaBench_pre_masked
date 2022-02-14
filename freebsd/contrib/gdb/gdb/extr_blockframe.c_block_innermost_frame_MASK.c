
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct block {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (struct block*) ;
 scalar_t__ FUNC_1 (struct block*) ;
 scalar_t__ FUNC_2 (struct frame_info*) ;
 struct frame_info* FUNC_3 (struct frame_info*) ;

struct frame_info *
FUNC_4 (struct block *VAR_0)
{
  struct frame_info *VAR_1;
  CORE_ADDR VAR_2;
  CORE_ADDR VAR_3;
  CORE_ADDR VAR_4;

  if (VAR_0 == ((void*)0))
    return ((void*)0);

  VAR_2 = FUNC_1 (VAR_0);
  VAR_3 = FUNC_0 (VAR_0);

  VAR_1 = ((void*)0);
  while (1)
    {
      VAR_1 = FUNC_3 (VAR_1);
      if (VAR_1 == ((void*)0))
 return ((void*)0);
      VAR_4 = FUNC_2 (VAR_1);
      if (VAR_4 >= VAR_2 && VAR_4 < VAR_3)
 return VAR_1;
    }
}
