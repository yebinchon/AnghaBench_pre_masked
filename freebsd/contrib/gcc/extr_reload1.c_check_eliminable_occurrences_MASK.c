
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elim_table {scalar_t__ from_rtx; scalar_t__ can_eliminate; } ;
typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int,int) ;
 int FUNC_6 (scalar_t__,int) ;
 struct elim_table* VAR_3 ;

__attribute__((used)) static void
FUNC_7 (rtx VAR_4)
{
  const char *VAR_5;
  int VAR_6;
  enum rtx_code VAR_7;

  if (VAR_4 == 0)
    return;

  VAR_7 = FUNC_0 (VAR_4);

  if (VAR_7 == VAR_2 && FUNC_3 (VAR_4) < VAR_0)
    {
      struct elim_table *VAR_8;

      for (VAR_8 = VAR_3; VAR_8 < &VAR_3[VAR_1]; VAR_8++)
 if (VAR_8->from_rtx == VAR_4)
   VAR_8->can_eliminate = 0;
      return;
    }

  VAR_5 = FUNC_1 (VAR_7);
  for (VAR_6 = 0; VAR_6 < FUNC_2 (VAR_7); VAR_6++, VAR_5++)
    {
      if (*VAR_5 == 'e')
 FUNC_7 (FUNC_4 (VAR_4, VAR_6));
      else if (*VAR_5 == 'E')
 {
   int VAR_9;
   for (VAR_9 = 0; VAR_9 < FUNC_6 (VAR_4, VAR_6); VAR_9++)
     FUNC_7 (FUNC_5 (VAR_4, VAR_6, VAR_9));
 }
    }
}
