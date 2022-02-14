
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct db_variable {int dummy; } ;
typedef int db_expr_t ;
struct TYPE_4__ {int tf_esp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct db_variable *VAR_2, db_expr_t *VAR_3, int VAR_4)
{

 if (VAR_1 == ((void*)0))
  return (0);

 if (VAR_4 == VAR_0)
  *VAR_3 = FUNC_1(VAR_1);
 else if (FUNC_0(VAR_1))
  VAR_1->tf_esp = *VAR_3;
 return (1);
}
