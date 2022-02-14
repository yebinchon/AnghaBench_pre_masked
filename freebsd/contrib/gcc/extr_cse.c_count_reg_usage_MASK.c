
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;



 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__) ;

 scalar_t__ FUNC_2 (scalar_t__) ;







 int const FUNC_3 (scalar_t__) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int) ;




 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_8 (scalar_t__) ;


 size_t FUNC_9 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;

 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;

 int const VAR_3 ;
 scalar_t__ FUNC_14 (scalar_t__,int) ;
 scalar_t__ FUNC_15 (scalar_t__,int,int) ;
 int FUNC_16 (scalar_t__,int) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_18 () ;
 int FUNC_19 (scalar_t__) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_20 (rtx VAR_6, int *VAR_7, rtx VAR_8, int VAR_9)
{
  enum rtx_code VAR_10;
  rtx VAR_11;
  const char *VAR_12;
  int VAR_13, VAR_14;

  if (VAR_6 == 0)
    return;

  switch (VAR_10 = FUNC_3 (VAR_6))
    {
    case 130:
      if (VAR_6 != VAR_8)
 VAR_7[FUNC_9 (VAR_6)] += VAR_9;
      return;

    case 131:
    case 142:
    case 140:
    case 138:
    case 139:
    case 137:
    case 128:
    case 132:
      return;

    case 141:


      if (FUNC_6 (FUNC_14 (VAR_6, 0)))
 FUNC_20 (FUNC_14 (FUNC_14 (VAR_6, 0), 0), VAR_7, VAR_0, VAR_9);
      return;

    case 129:

      if (!FUNC_11 (FUNC_12 (VAR_6)))
 FUNC_20 (FUNC_12 (VAR_6), VAR_7, VAR_0, VAR_9);
      FUNC_20 (FUNC_13 (VAR_6), VAR_7,
         VAR_8 ? VAR_8 : FUNC_12 (VAR_6),
         VAR_9);
      return;

    case 143:
    case 135:
    case 133:


      if (VAR_4 && FUNC_19 (FUNC_8 (VAR_6)))
 VAR_8 = VAR_5;
      if (VAR_10 == 143)
 FUNC_20 (FUNC_2 (VAR_6), VAR_7, VAR_8, VAR_9);
      FUNC_20 (FUNC_8 (VAR_6), VAR_7, VAR_8, VAR_9);




      VAR_11 = FUNC_17 (VAR_6);
      if (VAR_11)
 {
   rtx VAR_15 = FUNC_14 (VAR_11, 0);

   if (FUNC_3 (VAR_15) == 136)


     do
       {
  FUNC_20 (FUNC_14 (VAR_15, 0), VAR_7, VAR_8, VAR_9);
  VAR_15 = FUNC_14 (VAR_15, 1);
       }
     while (VAR_15 && FUNC_3 (VAR_15) == 136);
   else
     FUNC_20 (VAR_15, VAR_7, VAR_8, VAR_9);
 }
      return;

    case 136:
      if (FUNC_10 (VAR_6) == VAR_1
   || (FUNC_10 (VAR_6) != VAR_2 && FUNC_3 (FUNC_14 (VAR_6,0)) == VAR_3)


   || FUNC_3 (FUNC_14 (VAR_6, 0)) == 141)
 FUNC_20 (FUNC_14 (VAR_6, 0), VAR_7, VAR_0, VAR_9);

      FUNC_20 (FUNC_14 (VAR_6, 1), VAR_7, VAR_0, VAR_9);
      return;

    case 144:


      if (FUNC_7 (VAR_6))
 VAR_8 = VAR_0;

      for (VAR_13 = FUNC_1 (VAR_6) - 1; VAR_13 >= 0; VAR_13--)
 FUNC_20 (FUNC_0 (VAR_6, VAR_13), VAR_7, VAR_8, VAR_9);
      return;

    case 134:
      FUNC_18 ();

    default:
      break;
    }

  VAR_12 = FUNC_4 (VAR_10);
  for (VAR_13 = FUNC_5 (VAR_10) - 1; VAR_13 >= 0; VAR_13--)
    {
      if (VAR_12[VAR_13] == 'e')
 FUNC_20 (FUNC_14 (VAR_6, VAR_13), VAR_7, VAR_8, VAR_9);
      else if (VAR_12[VAR_13] == 'E')
 for (VAR_14 = FUNC_16 (VAR_6, VAR_13) - 1; VAR_14 >= 0; VAR_14--)
   FUNC_20 (FUNC_15 (VAR_6, VAR_13, VAR_14), VAR_7, VAR_8, VAR_9);
    }
}
