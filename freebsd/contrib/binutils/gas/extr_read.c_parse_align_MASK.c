
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int offsetT ;
struct TYPE_3__ {scalar_t__ X_op; int X_unsigned; } ;
typedef TYPE_1__ expressionS ;
typedef int addressT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 char* VAR_1 ;

offsetT
FUNC_6 (int VAR_2)
{
  expressionS VAR_3;
  addressT VAR_4;

  FUNC_0 ();
  if (*VAR_1 != ',')
    {
    no_align:
      FUNC_2 (FUNC_1("expected alignment after size"));
      FUNC_5 ();
      return -1;
    }

  VAR_1++;
  FUNC_0 ();

  VAR_4 = FUNC_4 (&VAR_3);
  if (VAR_3.X_op == VAR_0)
    goto no_align;

  if (!VAR_3.X_unsigned)
    {
      FUNC_3 (FUNC_1("alignment negative; 0 assumed"));
      VAR_4 = 0;
    }

  if (VAR_2 && VAR_4 != 0)
    {

      unsigned int VAR_5 = 0;
      while ((VAR_4 & 1) == 0)
 VAR_4 >>= 1, ++VAR_5;
      if (VAR_4 != 1)
 {
   FUNC_2 (FUNC_1("alignment not a power of 2"));
   FUNC_5 ();
   return -1;
 }
      VAR_4 = VAR_5;
    }
  return VAR_4;
}
