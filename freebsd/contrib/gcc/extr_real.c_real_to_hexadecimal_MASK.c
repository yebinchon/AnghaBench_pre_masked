
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cl; size_t sign; int* sig; scalar_t__ decimal; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;




 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*) ;
 size_t FUNC_5 (char*) ;

void
FUNC_6 (char *VAR_3, const REAL_VALUE_TYPE *VAR_4, size_t VAR_5,
       size_t VAR_6, int VAR_7)
{
  int VAR_8, VAR_9, VAR_10 = FUNC_0 (VAR_4);
  char *VAR_11, *VAR_12;
  char VAR_13[16];
  size_t VAR_14;

  switch (VAR_4->cl)
    {
    case 128:
      VAR_10 = 0;
      break;
    case 129:
      break;
    case 131:
      FUNC_4 (VAR_3, (VAR_4->sign ? "-Inf" : "+Inf"));
      return;
    case 130:

      FUNC_4 (VAR_3, (VAR_4->sign ? "-NaN" : "+NaN"));
      return;
    default:
      FUNC_2 ();
    }

  if (VAR_4->decimal)
    {

      FUNC_4 (VAR_3, "N/A");
      return;
    }

  if (VAR_6 == 0)
    VAR_6 = VAR_1 / 4;



  FUNC_3 (VAR_13, "p%+d", VAR_10);
  VAR_14 = VAR_5 - FUNC_5 (VAR_13) - VAR_4->sign - 4 - 1;
  FUNC_1 (VAR_14 <= VAR_5);
  if (VAR_6 > VAR_14)
    VAR_6 = VAR_14;

  VAR_11 = VAR_3;
  if (VAR_4->sign)
    *VAR_11++ = '-';
  *VAR_11++ = '0';
  *VAR_11++ = 'x';
  *VAR_11++ = '0';
  *VAR_11++ = '.';
  VAR_12 = VAR_11;

  for (VAR_8 = VAR_2 - 1; VAR_8 >= 0; --VAR_8)
    for (VAR_9 = VAR_0 - 4; VAR_9 >= 0; VAR_9 -= 4)
      {
 *VAR_11++ = "0123456789abcdef"[(VAR_4->sig[VAR_8] >> VAR_9) & 15];
 if (--VAR_6 == 0)
   goto out;
      }

 out:
  if (VAR_7)
    while (VAR_11 > VAR_12 + 1 && VAR_11[-1] == '0')
      VAR_11--;

  FUNC_3 (VAR_11, "p%+d", VAR_10);
}
