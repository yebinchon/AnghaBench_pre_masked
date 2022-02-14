
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int db_expr_t ;
typedef scalar_t__ c_db_sym_t ;
struct TYPE_3__ {int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,char const**,int *) ;
 TYPE_1__* VAR_1 ;
 char* FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

void
FUNC_3(c_db_sym_t VAR_2, const char **VAR_3, db_expr_t *VAR_4)
{
 db_expr_t VAR_5;

 if (VAR_2 == VAR_0) {
  *VAR_3 = ((void*)0);
  return;
 }

 FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_5);

 if (FUNC_2(VAR_2))
  *VAR_3 = FUNC_1(VAR_2, VAR_1->name);
 if (VAR_4)
  *VAR_4 = VAR_5;
}
