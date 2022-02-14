
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef scalar_t__ RTX_CODE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int,int) ;
 int FUNC_7 (scalar_t__,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_8 (rtx VAR_4)
{
  RTX_CODE VAR_5;
  int VAR_6;
  int VAR_7;
  const char *VAR_8;

  if (VAR_4 == 0)
    return;

  VAR_5 = FUNC_0 (VAR_4);

  if (VAR_5 == VAR_0 || VAR_5 == VAR_1
      || VAR_5 == VAR_2)
    VAR_3 = FUNC_3 (VAR_3, FUNC_5 (VAR_4, 0));

  VAR_8 = FUNC_1 (VAR_5);
  VAR_7 = FUNC_2 (VAR_5);
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
    {
      if (VAR_8[VAR_6] == 'e' || VAR_8[VAR_6] == 'u')
 FUNC_8 (FUNC_4 (VAR_4, VAR_6));
      else if (VAR_8[VAR_6] == 'E')
 {
   int VAR_9;
   for (VAR_9 = 0; VAR_9 < FUNC_7 (VAR_4, VAR_6); VAR_9++)
     FUNC_8 (FUNC_6 (VAR_4, VAR_6, VAR_9));
 }
    }
}
