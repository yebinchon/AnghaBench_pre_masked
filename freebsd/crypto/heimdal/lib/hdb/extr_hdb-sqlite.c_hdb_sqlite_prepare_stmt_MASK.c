
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef int krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,char*,char const*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*,int,int **,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_5(krb5_context VAR_6,
                        sqlite3 *VAR_7,
                        sqlite3_stmt **VAR_8,
                        const char *VAR_9)
{
    int VAR_10, VAR_11 = 0;

    VAR_10 = FUNC_4(VAR_7, VAR_9, -1, VAR_8, ((void*)0));
    while((VAR_11++ < VAR_1) &&
   ((VAR_10 == VAR_2) ||
           (VAR_10 == VAR_3) ||
           (VAR_10 == VAR_4))) {
 FUNC_1(VAR_6, "hdb-sqlite: prepare busy");
        FUNC_2(1);
        VAR_10 = FUNC_4(VAR_7, VAR_9, -1, VAR_8, ((void*)0));
    }

    if (VAR_10 != VAR_5) {
        FUNC_0(VAR_6, VAR_0,
          "Failed to prepare stmt %s: %s",
          VAR_9, FUNC_3(VAR_7));
        return VAR_0;
    }

    return 0;
}
