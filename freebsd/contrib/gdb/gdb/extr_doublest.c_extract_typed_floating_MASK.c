
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef int DOUBLEST ;


 scalar_t__ FUNC_0 (struct type const*) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (struct type const*) ;
 int FUNC_2 (struct type const*) ;
 int FUNC_3 (void const*,int ) ;
 int FUNC_4 (int *,void const*,int *) ;
 int FUNC_5 (int) ;

DOUBLEST
FUNC_6 (const void *VAR_1, const struct type *VAR_2)
{
  DOUBLEST VAR_3;

  FUNC_5 (FUNC_0 (VAR_2) == VAR_0);

  if (FUNC_1 (VAR_2) == ((void*)0))


    return FUNC_3 (VAR_1, FUNC_2 (VAR_2));

  FUNC_4 (FUNC_1 (VAR_2), VAR_1, &VAR_3);
  return VAR_3;
}
