
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int segT ;
struct TYPE_4__ {scalar_t__ X_op; scalar_t__ X_add_number; } ;
typedef TYPE_1__ expressionS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static segT
FUNC_3 (register expressionS *VAR_5)
{
  register segT VAR_6;

  VAR_6 = FUNC_2 (VAR_5);
  if (VAR_5->X_op == VAR_3
      || VAR_5->X_op == VAR_0
      || VAR_5->X_op == VAR_1)
    {
      FUNC_1 (FUNC_0("expected address expression"));
      VAR_5->X_op = VAR_2;
      VAR_5->X_add_number = 0;
      VAR_6 = VAR_4;
    }
  return VAR_6;
}
