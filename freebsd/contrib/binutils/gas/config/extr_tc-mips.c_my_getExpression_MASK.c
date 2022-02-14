
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ valueT ;
struct TYPE_5__ {scalar_t__ X_op; int X_add_symbol; } ;
typedef TYPE_1__ expressionS ;
struct TYPE_6__ {scalar_t__ mips16; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 char* VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 () ;
 char* VAR_4 ;
 TYPE_3__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9 (expressionS *VAR_7, char *VAR_8)
{
  char *VAR_9;
  valueT VAR_10;

  VAR_9 = VAR_4;
  VAR_4 = VAR_8;
  FUNC_4 (VAR_7);
  VAR_2 = VAR_4;
  VAR_4 = VAR_9;





  if (VAR_5.mips16
      && VAR_7->X_op == VAR_1
      && FUNC_6 (FUNC_0 (VAR_7->X_add_symbol), VAR_0) == 0
      && FUNC_1 (VAR_7->X_add_symbol) == VAR_6
      && FUNC_8 (VAR_7->X_add_symbol) == VAR_3
      && FUNC_7 (VAR_7->X_add_symbol)
      && (VAR_10 = FUNC_2 (VAR_7->X_add_symbol)) == FUNC_5 ())
    FUNC_3 (VAR_7->X_add_symbol, VAR_10 + 1);
}
