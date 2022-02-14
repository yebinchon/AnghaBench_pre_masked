
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;
typedef int apr_dbd_t ;
typedef int apr_dbd_driver_t ;


 int FUNC_0 (int const*,int *,int*,char const*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(apr_pool_t* VAR_0, apr_dbd_t* VAR_1,
                       const apr_dbd_driver_t* VAR_2)
{
    int VAR_3;
    int VAR_4 = 0;
    int VAR_5;
    int VAR_6 = 0;
    const char *VAR_7 =
        "INSERT into apr_dbd_test (col1) values ('foo');"
        "INSERT into apr_dbd_test values ('wibble', 'other', 5);"
        "INSERT into apr_dbd_test values ('wibble', 'nothing', 5);"
        "INSERT into apr_dbd_test values ('qwerty', 'foo', 0);"
        "INSERT into apr_dbd_test values ('asdfgh', 'bar', 1);"
    ;
    VAR_4 = FUNC_0(VAR_2, VAR_1, &VAR_5, VAR_7);
    if (VAR_4) {
        const char* VAR_8[] = {
            "INSERT into apr_dbd_test (col1) values ('foo');",
            "INSERT into apr_dbd_test values ('wibble', 'other', 5);",
            "INSERT into apr_dbd_test values ('wibble', 'nothing', 5);",
            "INSERT into apr_dbd_test values ('qwerty', 'foo', 0);",
            "INSERT into apr_dbd_test values ('asdfgh', 'bar', 1);",
            ((void*)0)
        };
        FUNC_1("Compound insert failed; trying statements one-by-one\n") ;
        for (VAR_3=0; VAR_8[VAR_3] != ((void*)0); ++VAR_3) {
            VAR_7 = VAR_8[VAR_3];
            VAR_4 = FUNC_0(VAR_2, VAR_1, &VAR_5, VAR_7);
            if (VAR_4) {
                VAR_6++;
            }
        }
        if (VAR_6) {
            FUNC_1("%d single inserts failed too.\n", VAR_6) ;
        }
    }
    return VAR_4;
}
