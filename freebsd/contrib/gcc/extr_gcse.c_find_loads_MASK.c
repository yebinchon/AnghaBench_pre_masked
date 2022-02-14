
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int,int) ;
 int FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static bool
FUNC_9 (rtx VAR_1, rtx VAR_2, int VAR_3)
{
  const char * VAR_4;
  int VAR_5, VAR_6;
  int VAR_7 = 0;

  if (!VAR_1)
    return 0;

  if (FUNC_0 (VAR_1) == VAR_0)
    VAR_1 = FUNC_4 (VAR_1);

  if (FUNC_3 (VAR_1))
    {
      if (FUNC_8 (VAR_1, VAR_2, VAR_3))
 return 1;
    }


  VAR_4 = FUNC_1 (FUNC_0 (VAR_1));

  for (VAR_5 = FUNC_2 (FUNC_0 (VAR_1)) - 1; VAR_5 >= 0 && !VAR_7; VAR_5--)
    {
      if (VAR_4[VAR_5] == 'e')
 VAR_7 |= FUNC_9 (FUNC_5 (VAR_1, VAR_5), VAR_2, VAR_3);
      else if (VAR_4[VAR_5] == 'E')
 for (VAR_6 = FUNC_7 (VAR_1, VAR_5) - 1; VAR_6 >= 0; VAR_6--)
   VAR_7 |= FUNC_9 (FUNC_6 (VAR_1, VAR_5, VAR_6), VAR_2, VAR_3);
    }
  return VAR_7;
}
