
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* sig; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0 (const REAL_VALUE_TYPE *VAR_1)
{
  int VAR_2;

  for (VAR_2 = VAR_0 - 1; VAR_2 >= 0; --VAR_2)
    if (VAR_1->sig[VAR_2])
      return 1;

  return 0;
}
