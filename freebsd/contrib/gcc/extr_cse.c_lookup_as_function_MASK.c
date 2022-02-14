
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_elt {int exp; struct table_elt* next_same_value; struct table_elt* first_same_value; } ;
typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,int,int) ;
 struct table_elt* FUNC_7 (int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static rtx
FUNC_8 (rtx VAR_3, enum rtx_code VAR_4)
{
  struct table_elt *VAR_5
    = FUNC_7 (VAR_3, FUNC_4 (VAR_3, VAR_1), FUNC_1 (VAR_3));




  if (VAR_5 == 0 && VAR_4 == VAR_0
      && FUNC_2 (FUNC_1 (VAR_3)) < FUNC_2 (VAR_2))
    {
      VAR_3 = FUNC_5 (VAR_3);
      FUNC_3 (VAR_3, VAR_2);
      VAR_5 = FUNC_7 (VAR_3, FUNC_4 (VAR_3, VAR_1), VAR_2);
    }

  if (VAR_5 == 0)
    return 0;

  for (VAR_5 = VAR_5->first_same_value; VAR_5; VAR_5 = VAR_5->next_same_value)
    if (FUNC_0 (VAR_5->exp) == VAR_4

 && FUNC_6 (VAR_5->exp, VAR_5->exp, 1, 0))
      return VAR_5->exp;

  return 0;
}
