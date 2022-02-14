
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int* sig; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static void
FUNC_0 (REAL_VALUE_TYPE *VAR_2, const REAL_VALUE_TYPE *VAR_3,
      unsigned int VAR_4)
{
  unsigned int VAR_5, VAR_6 = VAR_4 / VAR_0;

  VAR_4 &= VAR_0 - 1;
  if (VAR_4 != 0)
    {
      for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
 {
   VAR_2->sig[VAR_5]
     = (((VAR_6 + VAR_5 >= VAR_1 ? 0 : VAR_3->sig[VAR_6 + VAR_5]) >> VAR_4)
        | ((VAR_6 + VAR_5 + 1 >= VAR_1 ? 0 : VAR_3->sig[VAR_6 + VAR_5 + 1])
    << (VAR_0 - VAR_4)));
 }
    }
  else
    {
      for (VAR_5 = 0; VAR_6 + VAR_5 < VAR_1; ++VAR_5)
 VAR_2->sig[VAR_5] = VAR_3->sig[VAR_6 + VAR_5];
      for (; VAR_5 < VAR_1; ++VAR_5)
 VAR_2->sig[VAR_5] = 0;
    }
}
