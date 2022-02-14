
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
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int,int) ;
 int FUNC_7 (scalar_t__,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_8 (rtx VAR_10)
{
  RTX_CODE VAR_11;
  int VAR_12;
  int VAR_13;
  const char *VAR_14;

  if (VAR_10 == 0)
    return;

  VAR_11 = FUNC_0 (VAR_10);

  if (VAR_11 == VAR_1 || VAR_11 == VAR_2
      || VAR_11 == VAR_4)
    VAR_8 = FUNC_3 (VAR_8, FUNC_5 (VAR_10, 0));
  if (VAR_11 == VAR_0 || VAR_11 == VAR_3 || VAR_11 == VAR_5)
    VAR_7 = FUNC_3 (VAR_7, FUNC_5 (VAR_10, 0));
  if (VAR_11 == VAR_6)
    VAR_9 = FUNC_3 (VAR_9, FUNC_5 (VAR_10, 0));

  VAR_14 = FUNC_1 (VAR_11);
  VAR_13 = FUNC_2 (VAR_11);
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
    {
      if (VAR_14[VAR_12] == 'e' || VAR_14[VAR_12] == 'u')
 FUNC_8 (FUNC_4 (VAR_10, VAR_12));
      else if (VAR_14[VAR_12] == 'E')
 {
   int VAR_15;
   for (VAR_15 = 0; VAR_15 < FUNC_7 (VAR_10, VAR_12); VAR_15++)
     FUNC_8 (FUNC_6 (VAR_10, VAR_12, VAR_15));
 }
    }
}
