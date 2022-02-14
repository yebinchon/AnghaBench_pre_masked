
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long* sig; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static bool
FUNC_0 (REAL_VALUE_TYPE *VAR_2, const REAL_VALUE_TYPE *VAR_3,
      unsigned int VAR_4)
{
  unsigned long VAR_5 = 0;
  unsigned int VAR_6, VAR_7 = 0;

  if (VAR_4 >= VAR_0)
    {
      for (VAR_6 = 0, VAR_7 = VAR_4 / VAR_0; VAR_6 < VAR_7; ++VAR_6)
 VAR_5 |= VAR_3->sig[VAR_6];
      VAR_4 &= VAR_0 - 1;
    }

  if (VAR_4 != 0)
    {
      VAR_5 |= VAR_3->sig[VAR_7] & (((unsigned long)1 << VAR_4) - 1);
      for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
 {
   VAR_2->sig[VAR_6]
     = (((VAR_7 + VAR_6 >= VAR_1 ? 0 : VAR_3->sig[VAR_7 + VAR_6]) >> VAR_4)
        | ((VAR_7 + VAR_6 + 1 >= VAR_1 ? 0 : VAR_3->sig[VAR_7 + VAR_6 + 1])
    << (VAR_0 - VAR_4)));
 }
    }
  else
    {
      for (VAR_6 = 0; VAR_7 + VAR_6 < VAR_1; ++VAR_6)
 VAR_2->sig[VAR_6] = VAR_3->sig[VAR_7 + VAR_6];
      for (; VAR_6 < VAR_1; ++VAR_6)
 VAR_2->sig[VAR_6] = 0;
    }

  return VAR_5 != 0;
}
