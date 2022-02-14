
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;


 struct frame_info* FUNC_0 (struct frame_info*) ;
 struct frame_info* FUNC_1 (struct frame_info*) ;

struct frame_info *
FUNC_2 (struct frame_info *VAR_0,
       int *VAR_1)
{
  struct frame_info *VAR_2;
  struct frame_info *VAR_3;



  while (*VAR_1 > 0)
    {
      VAR_2 = FUNC_1 (VAR_0);
      if (VAR_2 == 0)
 break;
      (*VAR_1)--;
      VAR_0 = VAR_2;
    }

  if (*VAR_1 < 0)
    {
      while (*VAR_1 < 0)
 {
   VAR_3 = FUNC_0 (VAR_0);
   if (!VAR_3)
     break;
   VAR_0 = VAR_3;
   (*VAR_1)++;
 }
    }
  return VAR_0;
}
