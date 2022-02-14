
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_info {size_t uid; int block; struct target_info* next; } ;
typedef int rtx ;


 size_t FUNC_0 (int ) ;
 size_t VAR_0 ;
 struct target_info** VAR_1 ;

void
FUNC_1 (rtx VAR_2)
{
  struct target_info *VAR_3;

  if (VAR_1 != ((void*)0))
    {
      for (VAR_3 = VAR_1[FUNC_0 (VAR_2) % VAR_0];
    VAR_3; VAR_3 = VAR_3->next)
 if (VAR_3->uid == FUNC_0 (VAR_2))
   break;

      if (VAR_3)
 VAR_3->block = -1;
    }
}
