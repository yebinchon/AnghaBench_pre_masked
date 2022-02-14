
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ offsetT ;
struct TYPE_4__ {scalar_t__ X_op; scalar_t__ X_add_number; } ;
typedef TYPE_1__ expressionS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static offsetT
FUNC_3 (expressionS *VAR_2)
{
  FUNC_2 (VAR_2);
  if (VAR_2->X_op != VAR_1)
    {
      if (VAR_2->X_op != VAR_0)
 FUNC_1 (FUNC_0("bad or irreducible absolute expression"));
      VAR_2->X_add_number = 0;
    }
  return VAR_2->X_add_number;
}
