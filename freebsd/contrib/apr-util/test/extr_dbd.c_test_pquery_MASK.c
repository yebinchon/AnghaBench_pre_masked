
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;
typedef int apr_dbd_transaction_t ;
typedef int apr_dbd_t ;
typedef int apr_dbd_prepared_t ;
typedef int apr_dbd_driver_t ;


 char* FUNC_0 (int const*,int *,int) ;
 int FUNC_1 (int const*,int *,int *,char const*,char const*,int **) ;
 int FUNC_2 (int const*,int *,int *,int*,int *,char*,char*,char*,int *) ;
 int FUNC_3 (int const*,int *,int *) ;
 int FUNC_4 (int const*,int *,int *,int **) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *,int *,int const*) ;

__attribute__((used)) static int FUNC_7(apr_pool_t* VAR_0, apr_dbd_t* VAR_1,
                       const apr_dbd_driver_t* VAR_2)
{
    int VAR_3 = 0;
    const char *VAR_4 = "INSERT INTO apr_dbd_test VALUES (%s, %s, %d)";
    apr_dbd_prepared_t *VAR_5 = ((void*)0);
    const char *VAR_6 = "testpquery";
    int VAR_7;
    apr_dbd_transaction_t *VAR_8 =0;

    VAR_3 = FUNC_1(VAR_2, VAR_0, VAR_1, VAR_4, VAR_6, &VAR_5);

    if (VAR_3) {
        FUNC_5("Prepare statement failed!\n%s\n",
               FUNC_0(VAR_2, VAR_1, VAR_3));
        return VAR_3;
    }
    FUNC_4(VAR_2, VAR_0, VAR_1, &VAR_8);
    VAR_3 = FUNC_2(VAR_2, VAR_0, VAR_1, &VAR_7, VAR_5,
                         "prepared", "insert", "2", ((void*)0));
    FUNC_3(VAR_2, VAR_0, VAR_8);
    if (VAR_3) {
        FUNC_5("Exec of prepared statement failed!\n%s\n",
               FUNC_0(VAR_2, VAR_1, VAR_3));
        return VAR_3;
    }
    FUNC_5("Showing table (should now contain row \"prepared insert 2\")\n");
    FUNC_6(VAR_0, VAR_1, VAR_2);
    return VAR_3;
}
