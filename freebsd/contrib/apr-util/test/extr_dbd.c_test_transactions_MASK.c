
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;
typedef int apr_dbd_transaction_t ;
typedef int apr_dbd_t ;
typedef int apr_dbd_driver_t ;


 char* FUNC_0 (int const*,int *,int) ;
 int FUNC_1 (int const*,int *,int*,char const*) ;
 int FUNC_2 (int const*,int *,int *) ;
 int FUNC_3 (int const*,int *,int *,int **) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,int *,int const*) ;

__attribute__((used)) static int FUNC_6(apr_pool_t* VAR_0, apr_dbd_t* VAR_1,
                             const apr_dbd_driver_t* VAR_2)
{
    int VAR_3 = 0;
    int VAR_4;
    apr_dbd_transaction_t *VAR_5 = ((void*)0);
    const char* VAR_6;


    FUNC_4("Transaction 1\n");
    VAR_3 = FUNC_3(VAR_2, VAR_0, VAR_1, &VAR_5);
    if (VAR_3) {
        FUNC_4("Start transaction failed!\n%s\n",
               FUNC_0(VAR_2, VAR_1, VAR_3));
        return VAR_3;
    }
    VAR_6 = "UPDATE apr_dbd_test SET col2 = 'failed'";
    VAR_3 = FUNC_1(VAR_2, VAR_1, &VAR_4, VAR_6);
    if (VAR_3) {
        FUNC_4("Update failed: '%s'\n", FUNC_0(VAR_2, VAR_1, VAR_3));
        FUNC_2(VAR_2, VAR_0, VAR_5);
        return VAR_3;
    }
    FUNC_4("%d rows updated\n", VAR_4);

    VAR_6 = "INSERT INTO apr_dbd_test1 (col3) values (3)";
    VAR_3 = FUNC_1(VAR_2, VAR_1, &VAR_4, VAR_6);
    if (!VAR_3) {
        FUNC_4("Oops, invalid op succeeded but shouldn't!\n");
    }
    VAR_6 = "INSERT INTO apr_dbd_test values ('zzz', 'aaa', 3)";
    VAR_3 = FUNC_1(VAR_2, VAR_1, &VAR_4, VAR_6);
    FUNC_4("Valid insert returned %d.  Should be nonzero (fail) because transaction is bad\n", VAR_3) ;

    VAR_3 = FUNC_2(VAR_2, VAR_0, VAR_5);
    if (VAR_3) {
        FUNC_4("End transaction failed!\n%s\n",
               FUNC_0(VAR_2, VAR_1, VAR_3));
        return VAR_3;
    }
    FUNC_4("Transaction ended (should be rollback) - viewing table\n"
           "A column of \"failed\" indicates transaction failed (no rollback)\n");
    FUNC_5(VAR_0, VAR_1, VAR_2);


    FUNC_4("Transaction 2\n");
    VAR_3 = FUNC_3(VAR_2, VAR_0, VAR_1, &VAR_5);
    if (VAR_3) {
        FUNC_4("Start transaction failed!\n%s\n",
               FUNC_0(VAR_2, VAR_1, VAR_3));
        return VAR_3;
    }
    VAR_6 = "UPDATE apr_dbd_test SET col2 = 'success'";
    VAR_3 = FUNC_1(VAR_2, VAR_1, &VAR_4, VAR_6);
    if (VAR_3) {
        FUNC_4("Update failed: '%s'\n", FUNC_0(VAR_2, VAR_1, VAR_3));
        FUNC_2(VAR_2, VAR_0, VAR_5);
        return VAR_3;
    }
    FUNC_4("%d rows updated\n", VAR_4);
    VAR_6 = "INSERT INTO apr_dbd_test values ('aaa', 'zzz', 3)";
    VAR_3 = FUNC_1(VAR_2, VAR_1, &VAR_4, VAR_6);
    FUNC_4("Valid insert returned %d.  Should be zero (OK)\n", VAR_3) ;
    VAR_3 = FUNC_2(VAR_2, VAR_0, VAR_5);
    if (VAR_3) {
        FUNC_4("End transaction failed!\n%s\n",
               FUNC_0(VAR_2, VAR_1, VAR_3));
        return VAR_3;
    }
    FUNC_4("Transaction ended (should be commit) - viewing table\n");
    FUNC_5(VAR_0, VAR_1, VAR_2);
    return VAR_3;
}
