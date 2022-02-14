
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long* sig; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0 (const REAL_VALUE_TYPE *VAR_1, const REAL_VALUE_TYPE *VAR_2)
{
  int VAR_3;

  for (VAR_3 = VAR_0 - 1; VAR_3 >= 0; --VAR_3)
    {
      unsigned long VAR_4 = VAR_1->sig[VAR_3];
      unsigned long VAR_5 = VAR_2->sig[VAR_3];

      if (VAR_4 > VAR_5)
 return 1;
      if (VAR_4 < VAR_5)
 return -1;
    }

  return 0;
}
