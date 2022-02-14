
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tui_win_info {int generic; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,scalar_t__) ;
 struct tui_win_info** VAR_1 ;
 char* FUNC_2 (int *) ;

struct tui_win_info *
FUNC_3 (char *VAR_2)
{
  struct tui_win_info * VAR_3 = (struct tui_win_info *) ((void*)0);

  if (VAR_2 != (char *) ((void*)0))
    {
      int VAR_4 = 0;

      while (VAR_4 < VAR_0 && VAR_3 == ((void*)0))
 {
          if (VAR_1[VAR_4] != 0)
            {
              char *VAR_5 = FUNC_2 (&VAR_1[VAR_4]->generic);
              if (FUNC_0 (VAR_2) <= FUNC_0 (VAR_5) &&
                  FUNC_1 (VAR_2, VAR_5, FUNC_0 (VAR_2)) == 0)
                VAR_3 = VAR_1[VAR_4];
            }
   VAR_4++;
 }
    }

  return VAR_3;
}
