
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int segT ;
struct TYPE_5__ {scalar_t__ X_op; int * X_add_symbol; int * X_op_symbol; } ;
typedef TYPE_1__ expressionS ;
struct TYPE_6__ {scalar_t__ type; void* error; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_13 ;
 char* VAR_14 ;
 TYPE_3__ VAR_15 ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3 (expressionS * VAR_16, char **VAR_17)
{
  char *VAR_18;
  segT VAR_19;

  VAR_18 = VAR_14;
  VAR_14 = *VAR_17;
  VAR_13 = 1;
  VAR_19 = FUNC_1 (VAR_16);
  VAR_13 = 0;

  if (VAR_16->X_op == VAR_5)
    {
      *VAR_17 = VAR_14;
      VAR_14 = VAR_18;
      VAR_15.error = FUNC_0("illegal expression");
      return (int) VAR_1;
    }



  if (VAR_16->X_op == VAR_4
      || (VAR_16->X_add_symbol
          && (FUNC_2 (VAR_16->X_add_symbol)
              || (VAR_16->X_op_symbol && FUNC_2 (VAR_16->X_op_symbol)))))
    {
      VAR_15.error = FUNC_0("invalid constant");
      *VAR_17 = VAR_14;
      VAR_14 = VAR_18;
      return (int) VAR_1;
    }

  if ((VAR_16->X_add_symbol != ((void*)0))
      && (VAR_15.type != VAR_7)
      && (VAR_15.type != VAR_9)
      && (VAR_15.type != VAR_8)
      && (VAR_15.type != VAR_6)
      && (VAR_15.type != VAR_2)
      && (VAR_15.type != VAR_11)
      && (VAR_15.type != VAR_10)
      && (VAR_15.type != VAR_3))
    {
      VAR_15.error = VAR_0;
      *VAR_17 = VAR_14;
      VAR_14 = VAR_18;
      return (int) VAR_1;
    }

  *VAR_17 = VAR_14;
  VAR_14 = VAR_18;
  return VAR_12;
}
