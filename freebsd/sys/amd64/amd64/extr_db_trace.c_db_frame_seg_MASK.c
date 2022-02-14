
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct db_variable {scalar_t__ valuep; } ;
typedef scalar_t__ db_expr_t ;


 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct db_variable *VAR_2, db_expr_t *VAR_3, int VAR_4)
{
 uint16_t *VAR_5;

 if (VAR_1 == ((void*)0))
  return (0);

 VAR_5 = (uint16_t *)((uintptr_t)VAR_1 + (db_expr_t)VAR_2->valuep);
 if (VAR_4 == VAR_0)
  *VAR_3 = *VAR_5;
 else
  *VAR_5 = *VAR_3;
 return (1);
}
