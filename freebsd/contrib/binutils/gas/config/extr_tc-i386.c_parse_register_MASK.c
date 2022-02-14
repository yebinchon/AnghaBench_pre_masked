
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ valueT ;
typedef int symbolS ;
typedef int reg_entry ;
struct TYPE_3__ {scalar_t__ X_op; scalar_t__ X_add_number; } ;
typedef TYPE_1__ expressionS ;


 scalar_t__ VAR_0 ;
 char VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 char FUNC_1 () ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 int FUNC_2 (int) ;
 int * FUNC_3 (char*,char**) ;
 scalar_t__ VAR_6 ;
 int * FUNC_4 (char*) ;
 TYPE_1__* FUNC_5 (int *) ;

__attribute__((used)) static const reg_entry *
FUNC_6 (char *VAR_7, char **VAR_8)
{
  const reg_entry *VAR_9;

  if (*VAR_7 == VAR_1 || VAR_2)
    VAR_9 = FUNC_3 (VAR_7, VAR_8);
  else
    VAR_9 = ((void*)0);
  if (!VAR_9)
    {
      char *VAR_10 = VAR_5;
      char VAR_11;
      symbolS *VAR_12;

      VAR_5 = VAR_7;
      VAR_11 = FUNC_1 ();
      VAR_12 = FUNC_4 (VAR_7);
      if (VAR_12 && FUNC_0 (VAR_12) == VAR_6)
 {
   const expressionS *VAR_13 = FUNC_5 (VAR_12);

   FUNC_2 (VAR_13->X_op == VAR_0);
   FUNC_2 (VAR_13->X_add_number >= 0
  && (valueT) VAR_13->X_add_number < VAR_4);
   VAR_9 = VAR_3 + VAR_13->X_add_number;
   *VAR_8 = VAR_5;
 }
      *VAR_5 = VAR_11;
      VAR_5 = VAR_10;
    }
  return VAR_9;
}
