
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;

 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static inline bool
FUNC_5 (tree VAR_1)
{
  if (VAR_1 == VAR_0)
    return 0;

  switch (FUNC_3 (VAR_1))
    {
    case 128:
      if (FUNC_4 (FUNC_0 (VAR_1),
          FUNC_2 (VAR_1))
   && FUNC_4 (FUNC_1 (VAR_1),
      FUNC_2 (VAR_1)))
 return 1;
      else
 return 0;

    default:
      return 0;
    }
}
