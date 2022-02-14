
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_elt {scalar_t__ related_value; scalar_t__ exp; struct table_elt* next_same_value; struct table_elt* first_same_value; } ;
typedef scalar_t__ rtx ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 struct table_elt* FUNC_6 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static rtx
FUNC_9 (rtx VAR_1, struct table_elt *VAR_2)
{
  struct table_elt *VAR_3 = 0;
  struct table_elt *VAR_4, *VAR_5;
  HOST_WIDE_INT VAR_6;





  if (VAR_2 != 0 && VAR_2->related_value != 0)
    VAR_3 = VAR_2;
  else if (VAR_2 == 0 && FUNC_0 (VAR_1) == VAR_0)
    {
      rtx VAR_7 = FUNC_5 (VAR_1);
      if (VAR_7 != 0)
 VAR_3 = FUNC_6 (VAR_7,
         FUNC_3 (VAR_7, FUNC_1 (VAR_7)),
         FUNC_1 (VAR_7));
    }

  if (VAR_3 == 0)
    return 0;




  VAR_4 = VAR_3;
  while (1)
    {
      if (FUNC_8 (VAR_1, VAR_4->exp))
 VAR_5 = 0;
      else
 for (VAR_5 = VAR_4->first_same_value; VAR_5; VAR_5 = VAR_5->next_same_value)
   if (FUNC_2 (VAR_5->exp))
     break;

      if (VAR_5)
 break;

      VAR_4 = VAR_4->related_value;




      if (VAR_4 == VAR_3 || VAR_4 == 0)
 break;
    }

  if (VAR_5 == 0)
    return 0;

  VAR_6 = (FUNC_4 (VAR_1) - FUNC_4 (VAR_4->exp));

  return FUNC_7 (VAR_5->exp, VAR_6);
}
