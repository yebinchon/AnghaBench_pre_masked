
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
struct TYPE_2__ {scalar_t__ locs; } ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int) ;

int
FUNC_7 (rtx VAR_1, int VAR_2)
{
  enum rtx_code VAR_3 = FUNC_1 (VAR_1);
  const char *VAR_4 = FUNC_2 (VAR_3);
  int VAR_5, VAR_6;

  if (FUNC_1 (VAR_1) == VAR_0
      && (! VAR_2 || FUNC_0 (VAR_1)->locs == 0))
    return 1;

  for (VAR_5 = FUNC_3 (VAR_3) - 1; VAR_5 >= 0; VAR_5--)
    {
      if (VAR_4[VAR_5] == 'e' && FUNC_7 (FUNC_4 (VAR_1, VAR_5), VAR_2))
 return 1;
      else if (VAR_4[VAR_5] == 'E')
 for (VAR_6 = 0; VAR_6 < FUNC_6 (VAR_1, VAR_5); VAR_6++)
   if (FUNC_7 (FUNC_5 (VAR_1, VAR_5, VAR_6), VAR_2))
     return 1;
    }

  return 0;
}
