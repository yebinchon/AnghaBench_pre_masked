
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* use_operand_p ;
struct TYPE_10__ {struct TYPE_10__* next; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static inline use_operand_p
FUNC_4 (use_operand_p VAR_0, use_operand_p VAR_1,
        use_operand_p VAR_2)
{
  FUNC_2 (FUNC_0 (VAR_0) == FUNC_0 (VAR_1));

  if (VAR_0 != VAR_1)
    {

      if (VAR_2->next == VAR_0)
 VAR_2 = VAR_0;
      else
 {

   FUNC_1 (VAR_0);
   FUNC_3 (VAR_0, VAR_2);
   VAR_2 = VAR_0;
 }
    }
  return VAR_2;
}
