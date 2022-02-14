
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct invariant {unsigned int eqto; } ;
struct df_ref {int dummy; } ;
typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;





 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;



 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int) ;
 int VAR_0 ;
 struct df_ref* FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int) ;
 struct invariant* FUNC_10 (struct df_ref*) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static bool
FUNC_12 (rtx VAR_1, rtx VAR_2, rtx VAR_3, rtx VAR_4)
{
  enum rtx_code VAR_5 = FUNC_0 (VAR_2);
  int VAR_6, VAR_7;
  const char *VAR_8;
  struct df_ref *VAR_9, *VAR_10;
  struct invariant *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
  rtx VAR_13, VAR_14;




  if (VAR_5 != FUNC_0 (VAR_4) || FUNC_1 (VAR_2) != FUNC_1 (VAR_4))
    return 0;

  switch (VAR_5)
    {
    case 131:
    case 132:
    case 128:
    case 133:
    case 130:
      return FUNC_11 (VAR_2, VAR_4);

    case 129:
      VAR_9 = FUNC_8 (VAR_0, VAR_1, VAR_2);
      VAR_10 = FUNC_8 (VAR_0, VAR_3, VAR_4);
      if (VAR_9)
 VAR_11 = FUNC_10 (VAR_9);
      if (VAR_10)
 VAR_12 = FUNC_10 (VAR_10);

      if (!VAR_11 && !VAR_12)
 return FUNC_11 (VAR_2, VAR_4);

      if (!VAR_11 || !VAR_12)
 return 0;

      FUNC_9 (VAR_11->eqto != ~0u);
      FUNC_9 (VAR_12->eqto != ~0u);
      return VAR_11->eqto == VAR_12->eqto;

    default:
      break;
    }

  VAR_8 = FUNC_2 (VAR_5);
  for (VAR_6 = FUNC_3 (VAR_5) - 1; VAR_6 >= 0; VAR_6--)
    {
      if (VAR_8[VAR_6] == 'e')
 {
   VAR_13 = FUNC_4 (VAR_2, VAR_6);
   VAR_14 = FUNC_4 (VAR_4, VAR_6);

   if (!FUNC_12 (VAR_1, VAR_13, VAR_3, VAR_14))
     return 0;
 }

      else if (VAR_8[VAR_6] == 'E')
 {
   if (FUNC_7 (VAR_2, VAR_6) != FUNC_7 (VAR_4, VAR_6))
     return 0;

   for (VAR_7 = 0; VAR_7 < FUNC_7 (VAR_2, VAR_6); VAR_7++)
     {
       VAR_13 = FUNC_6 (VAR_2, VAR_6, VAR_7);
       VAR_14 = FUNC_6 (VAR_4, VAR_6, VAR_7);

       if (!FUNC_12 (VAR_1, VAR_13, VAR_3, VAR_14))
  return 0;
     }
 }
      else if (VAR_8[VAR_6] == 'i' || VAR_8[VAR_6] == 'n')
 {
   if (FUNC_5 (VAR_2, VAR_6) != FUNC_5 (VAR_4, VAR_6))
     return 0;
 }

      else
 return 0;
    }

  return 1;
}
