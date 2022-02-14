
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__,char*,char const*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,int *,int *,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_4,
                     sqlite3 *VAR_5,
                     const char *VAR_6,
                     krb5_error_code VAR_7)
{
    int VAR_8;

    VAR_8 = FUNC_5(VAR_5, VAR_6, ((void*)0), ((void*)0), ((void*)0));

    while(((VAR_8 == VAR_0) ||
           (VAR_8 == VAR_1) ||
           (VAR_8 == VAR_2))) {
 FUNC_2(VAR_4, "hdb-sqlite: exec busy: %d", (int)FUNC_0());
        FUNC_3(1);
        VAR_8 = FUNC_5(VAR_5, VAR_6, ((void*)0), ((void*)0), ((void*)0));
    }

    if (VAR_8 != VAR_3 && VAR_7) {
        FUNC_1(VAR_4, VAR_7,
          "Execute %s: %s", VAR_6,
                              FUNC_4(VAR_5));
        return VAR_7;
    }

    return 0;
}
