
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef scalar_t__ db_expr_t ;
typedef scalar_t__ c_db_sym_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,char const**,scalar_t__*) ;
 scalar_t__* VAR_5 ;
 int FUNC_2 (char*,int,char*,char const*) ;

bool
FUNC_3(const char *VAR_6, db_expr_t *VAR_7)
{
 static char VAR_8[256];
 db_expr_t VAR_9;
 c_db_sym_t VAR_10;
 int VAR_11;

 if (VAR_4 != -1)
  VAR_11 = VAR_4;
 else
  VAR_11 = VAR_3;
 FUNC_2(VAR_8, sizeof(VAR_8), "pcpu_entry_%s", VAR_6);
 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10 == VAR_0)
  return (0);
 FUNC_1(VAR_10, &VAR_6, &VAR_9);
 if (VAR_9 < VAR_1 || VAR_9 >= VAR_2)
  return (0);
 *VAR_7 = (db_expr_t)((uintptr_t)VAR_9 + VAR_5[VAR_11]);
 return (1);
}
