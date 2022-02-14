
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db_variable {int dummy; } ;
typedef int db_expr_t ;


 int FUNC_0 (struct db_variable**) ;
 int FUNC_1 (struct db_variable*,int *) ;

int
FUNC_2(db_expr_t *VAR_0)
{
 struct db_variable *VAR_1;

 if (!FUNC_0(&VAR_1))
  return (0);

 return (FUNC_1(VAR_1, VAR_0));
}
