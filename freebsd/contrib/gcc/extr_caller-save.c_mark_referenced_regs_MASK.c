
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (size_t) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_11 (scalar_t__,int) ;
 scalar_t__ FUNC_12 (scalar_t__,int,int) ;
 int FUNC_13 (scalar_t__,int) ;
 int** VAR_9 ;
 int VAR_10 ;
 scalar_t__* VAR_11 ;
 scalar_t__* VAR_12 ;
 int* VAR_13 ;

__attribute__((used)) static void
FUNC_14 (rtx VAR_14)
{
  enum rtx_code VAR_15 = FUNC_0 (VAR_14);
  const char *VAR_16;
  int VAR_17, VAR_18;

  if (VAR_15 == VAR_6)
    FUNC_14 (FUNC_9 (VAR_14));
  if (VAR_15 == VAR_6 || VAR_15 == VAR_1)
    {
      VAR_14 = FUNC_7 (VAR_14);
      VAR_15 = FUNC_0 (VAR_14);
      if ((VAR_15 == VAR_5 && FUNC_5 (VAR_14) < VAR_2)
   || VAR_15 == VAR_4 || VAR_15 == VAR_0
   || (VAR_15 == VAR_7 && FUNC_6 (FUNC_10 (VAR_14))
       && FUNC_5 (FUNC_10 (VAR_14)) < VAR_2



       && ((FUNC_2 (FUNC_1 (VAR_14))
     >= FUNC_2 (FUNC_1 (FUNC_10 (VAR_14))))
    || (FUNC_2 (FUNC_1 (FUNC_10 (VAR_14)))
        <= VAR_8))))
 return;
    }
  if (VAR_15 == VAR_3 || VAR_15 == VAR_7)
    {
      VAR_14 = FUNC_11 (VAR_14, 0);
      VAR_15 = FUNC_0 (VAR_14);
    }

  if (VAR_15 == VAR_5)
    {
      int VAR_19 = FUNC_5 (VAR_14);
      int VAR_20 = (VAR_19 < VAR_2 ? VAR_19
         : VAR_13[VAR_19]);

      if (VAR_20 >= 0)
 {
   int VAR_21 = VAR_9[VAR_20][FUNC_1 (VAR_14)];
   while (VAR_21-- > 0)
     FUNC_8 (VAR_10, VAR_20 + VAR_21);
 }



      else if (VAR_12[VAR_19] != 0)
 FUNC_14 (FUNC_11 (VAR_12[VAR_19], 0));
      else if (VAR_11[VAR_19] != 0)
 FUNC_14 (VAR_11[VAR_19]);
      return;
    }

  VAR_16 = FUNC_3 (VAR_15);
  for (VAR_17 = FUNC_4 (VAR_15) - 1; VAR_17 >= 0; VAR_17--)
    {
      if (VAR_16[VAR_17] == 'e')
 FUNC_14 (FUNC_11 (VAR_14, VAR_17));
      else if (VAR_16[VAR_17] == 'E')
 for (VAR_18 = FUNC_13 (VAR_14, VAR_17) - 1; VAR_18 >= 0; VAR_18--)
   FUNC_14 (FUNC_12 (VAR_14, VAR_17, VAR_18));
    }
}
