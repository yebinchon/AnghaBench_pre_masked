
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ segT ;
struct TYPE_6__ {scalar_t__ X_op; scalar_t__ X_op_symbol; scalar_t__ X_add_symbol; } ;
typedef TYPE_1__ expressionS ;
struct TYPE_7__ {int * error; } ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_6 ;
 char* VAR_7 ;
 TYPE_4__ VAR_8 ;
 int FUNC_3 (char) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6 (expressionS * VAR_12, char ** VAR_13, int VAR_14)
{
  char * VAR_15;
  segT VAR_16;


  if (VAR_11)
    VAR_14 = (VAR_14 == 128) ? VAR_14
                  : 129;

  switch (VAR_14)
    {
    case 130: break;
    case 131:
      if (!FUNC_3 (**VAR_13))
 {
   VAR_8.error = FUNC_0("immediate expression requires a # prefix");
   return VAR_0;
 }
      (*VAR_13)++;
      break;
    case 129:
    case 128:
      if (FUNC_3 (**VAR_13))
 (*VAR_13)++;
      break;
    default: FUNC_1 ();
    }

  FUNC_4 (VAR_12, 0, sizeof (expressionS));

  VAR_15 = VAR_7;
  VAR_7 = *VAR_13;
  VAR_6 = 1;
  VAR_16 = FUNC_2 (VAR_12);
  VAR_6 = 0;

  if (VAR_12->X_op == VAR_2)
    {

      *VAR_13 = VAR_7;
      VAR_7 = VAR_15;
      if (VAR_8.error == ((void*)0))
 VAR_8.error = FUNC_0("bad expression");
      return 1;
    }
  if (VAR_14 != 128
      && (VAR_12->X_op == VAR_1
          || (VAR_12->X_add_symbol
       && (FUNC_5 (VAR_12->X_add_symbol)
           || (VAR_12->X_op_symbol
        && FUNC_5 (VAR_12->X_op_symbol))))))
    {
      VAR_8.error = FUNC_0("invalid constant");
      *VAR_13 = VAR_7;
      VAR_7 = VAR_15;
      return 1;
    }

  *VAR_13 = VAR_7;
  VAR_7 = VAR_15;
  return 0;
}
