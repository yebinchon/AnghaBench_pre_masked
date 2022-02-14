
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_elt {scalar_t__ exp; scalar_t__ is_const; struct table_elt* next_same_value; struct table_elt* first_same_value; } ;
struct qty_table_elem {scalar_t__ const_rtx; } ;
typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 struct table_elt* FUNC_10 (scalar_t__,int ,int ) ;
 struct qty_table_elem* VAR_1 ;

__attribute__((used)) static rtx
FUNC_11 (rtx VAR_2)
{
  if (FUNC_5 (VAR_2)
      && FUNC_4 (FUNC_3 (VAR_2)))
    {
      int VAR_3 = FUNC_6 (FUNC_3 (VAR_2));
      struct qty_table_elem *VAR_4 = &VAR_1[VAR_3];

      if (VAR_4->const_rtx)
 VAR_2 = FUNC_9 (FUNC_1 (VAR_2), VAR_4->const_rtx);
    }

  if (VAR_2 == 0 || FUNC_0 (VAR_2))
    return VAR_2;






  if (FUNC_2 (VAR_2))
    {
      struct table_elt *VAR_5;

      VAR_2 = FUNC_8 (VAR_2, VAR_0);
      if (FUNC_0 (VAR_2))
 return VAR_2;

      VAR_5 = FUNC_10 (VAR_2, FUNC_7 (VAR_2, FUNC_1 (VAR_2)), FUNC_1 (VAR_2));
      if (VAR_5 == 0)
 return 0;

      for (VAR_5 = VAR_5->first_same_value; VAR_5; VAR_5 = VAR_5->next_same_value)
 if (VAR_5->is_const && FUNC_0 (VAR_5->exp))
   return VAR_5->exp;
    }

  return 0;
}
