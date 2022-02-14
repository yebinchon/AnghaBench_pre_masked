
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_3__* rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
struct TYPE_13__ {TYPE_1__* fld; } ;
struct TYPE_14__ {TYPE_2__ u; } ;
struct TYPE_12__ {TYPE_3__* rt_rtx; } ;


 int FUNC_0 (TYPE_3__*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_3__* FUNC_3 (TYPE_3__*,int) ;
 TYPE_3__* FUNC_4 (TYPE_3__*,int,int) ;
 int FUNC_5 (TYPE_3__*,int) ;

int
FUNC_6 (rtx *VAR_0, rtx VAR_1)
{
  enum rtx_code VAR_2 = FUNC_0 (VAR_1);
  const char *VAR_3 = FUNC_1 (VAR_2);
  int VAR_4, VAR_5;

  for (VAR_4 = FUNC_2 (VAR_2) - 1; VAR_4 >= 0; VAR_4--)
    {
      if (VAR_0 == &VAR_1->u.fld[VAR_4].rt_rtx)
 return 1;
      if (VAR_3[VAR_4] == 'e')
 {
   if (FUNC_6 (VAR_0, FUNC_3 (VAR_1, VAR_4)))
     return 1;
 }
      else if (VAR_3[VAR_4] == 'E')
 for (VAR_5 = FUNC_5 (VAR_1, VAR_4) - 1; VAR_5 >= 0; VAR_5--)
   if (FUNC_6 (VAR_0, FUNC_4 (VAR_1, VAR_4, VAR_5)))
     return 1;
    }
  return 0;
}
