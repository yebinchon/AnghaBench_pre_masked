
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
typedef size_t substitution_identifier_index_t ;


 scalar_t__ FUNC_0 (int * const) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int * const) ;
 int * FUNC_5 (int * const) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int * const) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static inline int
FUNC_10 (const tree VAR_1,
       const substitution_identifier_index_t VAR_2)
{
  tree VAR_3 = ((void*)0);
  tree VAR_4 = ((void*)0);

  if (FUNC_4 (VAR_1))
    {
      VAR_3 = FUNC_5 (VAR_1);
      VAR_4 = VAR_1;
    }
  else if (FUNC_0 (VAR_1))
    {
      VAR_3 = VAR_1;
      VAR_4 = FUNC_7 (VAR_1);
    }
  else

    return 0;

  return (FUNC_3 (FUNC_1 (VAR_4))
   && FUNC_6 (VAR_3)
   && FUNC_8 (VAR_3)
   && (FUNC_2 (FUNC_9 (VAR_3))
       == VAR_0[VAR_2]));
}
