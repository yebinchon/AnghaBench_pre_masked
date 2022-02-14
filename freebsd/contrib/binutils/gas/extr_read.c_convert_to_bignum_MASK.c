
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int valueT ;
struct TYPE_3__ {int X_add_number; int X_op; scalar_t__ X_unsigned; } ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static void
FUNC_0 (expressionS *VAR_5)
{
  valueT VAR_6;
  unsigned int VAR_7;

  VAR_6 = VAR_5->X_add_number;
  for (VAR_7 = 0; VAR_7 < sizeof (VAR_5->X_add_number) / VAR_0; VAR_7++)
    {
      VAR_4[VAR_7] = VAR_6 & VAR_1;
      VAR_6 >>= VAR_2;
    }


  if ((VAR_5->X_add_number < 0) != !VAR_5->X_unsigned)
    VAR_4[VAR_7++] = VAR_5->X_unsigned ? 0 : VAR_1;
  VAR_5->X_op = VAR_3;
  VAR_5->X_add_number = VAR_7;
}
