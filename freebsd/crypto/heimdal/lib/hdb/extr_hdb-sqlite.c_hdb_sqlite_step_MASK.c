
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef int krb5_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(krb5_context VAR_3, sqlite3 *VAR_4, sqlite3_stmt *VAR_5)
{
    int VAR_6;

    VAR_6 = FUNC_3(VAR_5);
    while(((VAR_6 == VAR_0) ||
           (VAR_6 == VAR_1) ||
           (VAR_6 == VAR_2))) {
 FUNC_1(VAR_3, "hdb-sqlite: step busy: %d", (int)FUNC_0());
        FUNC_2(1);
        VAR_6 = FUNC_3(VAR_5);
    }
    return VAR_6;
}
