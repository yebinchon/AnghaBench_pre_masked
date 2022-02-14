
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int db_expr_t ;
typedef scalar_t__ c_db_sym_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (scalar_t__,char const**,int *) ;

bool
FUNC_2(const char *VAR_1, db_expr_t *VAR_2)
{
 c_db_sym_t VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == VAR_0)
     return (0);
 FUNC_1(VAR_3, &VAR_1, VAR_2);
 return (1);
}
