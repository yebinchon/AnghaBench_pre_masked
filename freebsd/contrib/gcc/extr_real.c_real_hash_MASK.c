
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cl; int sign; unsigned long* sig; int canonical; int signalling; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 size_t VAR_1 ;
 int FUNC_1 () ;





unsigned int
FUNC_2 (const REAL_VALUE_TYPE *VAR_2)
{
  unsigned int VAR_3;
  size_t VAR_4;

  VAR_3 = VAR_2->cl | (VAR_2->sign << 2);
  switch (VAR_2->cl)
    {
    case 128:
    case 131:
      return VAR_3;

    case 129:
      VAR_3 |= FUNC_0 (VAR_2) << 3;
      break;

    case 130:
      if (VAR_2->signalling)
 VAR_3 ^= (unsigned int)-1;
      if (VAR_2->canonical)
 return VAR_3;
      break;

    default:
      FUNC_1 ();
    }

  if (sizeof(unsigned long) > sizeof(unsigned int))
    for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
      {
 unsigned long VAR_5 = VAR_2->sig[VAR_4];
 VAR_3 ^= VAR_5 ^ (VAR_5 >> (VAR_0 / 2));
      }
  else
    for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
      VAR_3 ^= VAR_2->sig[VAR_4];

  return VAR_3;
}
