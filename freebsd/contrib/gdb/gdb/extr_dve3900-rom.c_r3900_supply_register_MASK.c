
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regno; int * name; } ;


 int FUNC_0 (int,char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int *,int) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_1, int VAR_2, char *VAR_3, int VAR_4)
{
  int VAR_5 = -1;
  int VAR_6;
  char VAR_7[10];
  char *VAR_8;


  if (VAR_2 < 2 || VAR_2 > 7 || VAR_4 != 9)
    return;


  for (VAR_6 = 0; VAR_0[VAR_6].name != ((void*)0); VAR_6++)
    {
      int VAR_9 = FUNC_1 (VAR_0[VAR_6].name);
      if (VAR_9 == VAR_2 && FUNC_2 (VAR_1, VAR_0[VAR_6].name, VAR_9) == 0)
 {
   VAR_5 = VAR_0[VAR_6].regno;
   break;
 }
    }
  if (VAR_5 == -1)
    return;


  for (VAR_6 = 0, VAR_8 = VAR_7; VAR_6 < VAR_4; VAR_6++)
    if (VAR_3[VAR_6] != ' ')
      *VAR_8++ = VAR_3[VAR_6];
  *VAR_8 = '\0';

  FUNC_0 (VAR_5, VAR_7);
}
