
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned long* sig; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0 (REAL_VALUE_TYPE *VAR_1, const REAL_VALUE_TYPE *VAR_2,
    const REAL_VALUE_TYPE *VAR_3, int VAR_4)
{
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5)
    {
      unsigned long VAR_6 = VAR_2->sig[VAR_5];
      unsigned long VAR_7 = VAR_6 - VAR_3->sig[VAR_5];

      if (VAR_4)
 {
   VAR_4 = VAR_7 > VAR_6;
   VAR_4 |= ~--VAR_7 == 0;
 }
      else
 VAR_4 = VAR_7 > VAR_6;

      VAR_1->sig[VAR_5] = VAR_7;
    }

  return VAR_4;
}
