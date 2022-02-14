
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* sig; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_0 (REAL_VALUE_TYPE *VAR_2, const REAL_VALUE_TYPE *VAR_3)
{
  unsigned int VAR_4;

  for (VAR_4 = VAR_1 - 1; VAR_4 > 0; --VAR_4)
    VAR_2->sig[VAR_4] = (VAR_3->sig[VAR_4] << 1) | (VAR_3->sig[VAR_4-1] >> (VAR_0 - 1));
  VAR_2->sig[0] = VAR_3->sig[0] << 1;
}
