
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int substitution_identifier_index_t ;


 int FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int const) ;
 int FUNC_3 (int const) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (int const,int const) ;

__attribute__((used)) static inline int
FUNC_7 (const tree VAR_1,
     const substitution_identifier_index_t VAR_2)
{
  tree VAR_3;

  if (!FUNC_6 (VAR_1, VAR_2))
    return 0;

  if (FUNC_2 (VAR_1))
    VAR_3 = FUNC_3 (VAR_1);
  else if (FUNC_1 (VAR_1))
    VAR_3 = FUNC_0 (VAR_1);
  else

    return 0;

  return
    FUNC_5 (VAR_3) == 1
    && FUNC_4 (VAR_3, 0) == VAR_0;
}
