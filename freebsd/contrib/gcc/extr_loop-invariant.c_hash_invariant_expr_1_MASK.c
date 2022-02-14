
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct invariant {unsigned int eqto; } ;
struct df_ref {int dummy; } ;
typedef int rtx ;
typedef int hashval_t ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;



 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int) ;
 int VAR_0 ;
 struct df_ref* FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ,int*,int *,int) ;
 struct invariant* FUNC_11 (struct df_ref*) ;

__attribute__((used)) static hashval_t
FUNC_12 (rtx VAR_1, rtx VAR_2)
{
  enum rtx_code VAR_3 = FUNC_0 (VAR_2);
  int VAR_4, VAR_5;
  const char *VAR_6;
  hashval_t VAR_7 = VAR_3;
  int VAR_8;
  struct df_ref *VAR_9;
  struct invariant *VAR_10;

  switch (VAR_3)
    {
    case 131:
    case 132:
    case 128:
    case 133:
    case 130:
      return FUNC_10 (VAR_2, FUNC_1 (VAR_2), &VAR_8, ((void*)0), 0);

    case 129:
      VAR_9 = FUNC_8 (VAR_0, VAR_1, VAR_2);
      if (!VAR_9)
 return FUNC_10 (VAR_2, FUNC_1 (VAR_2), &VAR_8, ((void*)0), 0);
      VAR_10 = FUNC_11 (VAR_9);
      if (!VAR_10)
 return FUNC_10 (VAR_2, FUNC_1 (VAR_2), &VAR_8, ((void*)0), 0);

      FUNC_9 (VAR_10->eqto != ~0u);
      return VAR_10->eqto;

    default:
      break;
    }

  VAR_6 = FUNC_2 (VAR_3);
  for (VAR_4 = FUNC_3 (VAR_3) - 1; VAR_4 >= 0; VAR_4--)
    {
      if (VAR_6[VAR_4] == 'e')
 VAR_7 ^= FUNC_12 (VAR_1, FUNC_4 (VAR_2, VAR_4));
      else if (VAR_6[VAR_4] == 'E')
 {
   for (VAR_5 = 0; VAR_5 < FUNC_7 (VAR_2, VAR_4); VAR_5++)
     VAR_7 ^= FUNC_12 (VAR_1, FUNC_6 (VAR_2, VAR_4, VAR_5));
 }
      else if (VAR_6[VAR_4] == 'i' || VAR_6[VAR_4] == 'n')
 VAR_7 ^= FUNC_5 (VAR_2, VAR_4);
    }

  return VAR_7;
}
