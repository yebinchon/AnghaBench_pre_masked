
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct type* FUNC_2 (struct type*,int ) ;
 int FUNC_3 (struct type*) ;

__attribute__((used)) static int
FUNC_4 (struct type *VAR_2)
{
  if (FUNC_1 (VAR_2) == VAR_1 && FUNC_3 (VAR_2) == 1)
    {
      struct type *VAR_3 = FUNC_2 (VAR_2, 0);
      FUNC_0 (VAR_3);

      return (FUNC_1 (VAR_3) == VAR_0
       || FUNC_4 (VAR_3));
    }

  return 0;
}
