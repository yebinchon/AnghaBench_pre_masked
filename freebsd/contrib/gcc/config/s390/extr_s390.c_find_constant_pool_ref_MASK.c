
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int,int) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9 (rtx VAR_7, rtx *VAR_8)
{
  int VAR_9, VAR_10;
  const char *VAR_11;


  if (FUNC_1 (VAR_7) == VAR_2
      && FUNC_5 (VAR_7, 1) == VAR_5)
    return;

  if (FUNC_1 (VAR_7) == VAR_6
      && FUNC_5 (VAR_7, 1) == VAR_3)
    return;

  FUNC_8 (FUNC_1 (VAR_7) != VAR_1
              || !FUNC_0 (VAR_7));

  if (FUNC_1 (VAR_7) == VAR_2 && FUNC_5 (VAR_7, 1) == VAR_4)
    {
      rtx VAR_12 = FUNC_6 (VAR_7, 0, 0);
      FUNC_8 (FUNC_1 (VAR_12) == VAR_1
           && FUNC_0 (VAR_12));

      if (*VAR_8 == VAR_0)
 *VAR_8 = VAR_12;
      else
 FUNC_8 (*VAR_8 == VAR_12);

      return;
    }

  VAR_11 = FUNC_2 (FUNC_1 (VAR_7));
  for (VAR_9 = FUNC_3 (FUNC_1 (VAR_7)) - 1; VAR_9 >= 0; VAR_9--)
    {
      if (VAR_11[VAR_9] == 'e')
        {
          FUNC_9 (FUNC_4 (VAR_7, VAR_9), VAR_8);
        }
      else if (VAR_11[VAR_9] == 'E')
        {
          for (VAR_10 = 0; VAR_10 < FUNC_7 (VAR_7, VAR_9); VAR_10++)
            FUNC_9 (FUNC_6 (VAR_7, VAR_9, VAR_10), VAR_8);
        }
    }
}
