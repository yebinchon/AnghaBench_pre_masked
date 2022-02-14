
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int symbolS ;
typedef scalar_t__ segT ;
typedef int relax_substateT ;
typedef int offsetT ;
struct TYPE_4__ {scalar_t__ X_op; int X_add_number; int * X_add_symbol; } ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ,int,int,int ,int *,int,char*) ;
 int * FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6 (segT VAR_7, expressionS *VAR_8, int VAR_9)
{
  if (VAR_7 != VAR_5 && VAR_7 != VAR_4)
    FUNC_1 (FUNC_0("invalid segment \"%s\""), FUNC_5 (VAR_7));

  if (VAR_5 == VAR_4)
    {
      if (VAR_9 != 0)
 FUNC_2 (FUNC_0("ignoring fill value in absolute section"));
      if (VAR_8->X_op != VAR_1)
 {
   FUNC_1 (FUNC_0("only constant offsets supported in absolute section"));
   VAR_8->X_add_number = 0;
 }
      VAR_3 = VAR_8->X_add_number;
    }
  else
    {
      char *VAR_10;
      symbolS *VAR_11 = VAR_8->X_add_symbol;
      offsetT VAR_12 = VAR_8->X_add_number * VAR_0;

      if (VAR_8->X_op != VAR_1 && VAR_8->X_op != VAR_2)
 {

   VAR_11 = FUNC_4 (VAR_8);
   VAR_12 = 0;
 }

      VAR_10 = FUNC_3 (VAR_6, 1, 1, (relax_substateT) 0, VAR_11, VAR_12, (char *) 0);
      *VAR_10 = VAR_9;
    }
}
