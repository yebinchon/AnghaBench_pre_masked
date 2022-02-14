
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int use_operand_p ;
typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static inline void
FUNC_7 (use_operand_p VAR_1)
{
  tree VAR_2 = VAR_0;
  tree VAR_3 = FUNC_3 (VAR_1);
  tree VAR_4 = FUNC_0 (VAR_3) ? VAR_3 : FUNC_2 (VAR_3);

  if (FUNC_6 (VAR_4))
    VAR_2 = FUNC_4 (VAR_4);
  else if (FUNC_5 (VAR_3))
    VAR_2 = FUNC_4 (VAR_3);

  if (VAR_2 && VAR_2 != VAR_3)
    FUNC_1 (VAR_1, VAR_2);
}
