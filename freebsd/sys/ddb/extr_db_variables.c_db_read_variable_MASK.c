
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db_variable {int (* fcn ) (struct db_variable*,int *,int ) ;int * valuep; } ;
typedef int (* db_varfcn_t ) (struct db_variable*,int *,int ) ;
typedef int db_expr_t ;


 int VAR_0 ;
 int FUNC_0 (struct db_variable*,int *,int ) ;
 int FUNC_1 (struct db_variable*,int *,int ) ;

int
FUNC_2(struct db_variable *VAR_1, db_expr_t *VAR_2)
{
 db_varfcn_t *VAR_3 = &VAR_1->fcn;

 if (VAR_3 == FUNC_0) {
  *VAR_2 = *(VAR_1->valuep);
  return (1);
 }
 return ((*VAR_3)(VAR_1, VAR_2, VAR_0));
}
