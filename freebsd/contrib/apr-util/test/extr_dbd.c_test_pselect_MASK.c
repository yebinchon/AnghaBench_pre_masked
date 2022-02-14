
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;
typedef int apr_dbd_t ;
typedef int apr_dbd_row_t ;
typedef int apr_dbd_results_t ;
typedef int apr_dbd_prepared_t ;
typedef int apr_dbd_driver_t ;


 char* FUNC_0 (int const*,int *,int) ;
 char* FUNC_1 (int const*,int *,int) ;
 int FUNC_2 (int const*,int *,int *,int **,int) ;
 int FUNC_3 (int const*,int *) ;
 int FUNC_4 (int const*,int *,int *,char const*,char const*,int **) ;
 int FUNC_5 (int const*,int *,int *,int **,int *,int ,char*,int *) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,...) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_8(apr_pool_t* VAR_1, apr_dbd_t* VAR_2,
                        const apr_dbd_driver_t* VAR_3)
{
    int VAR_4 = 0;
    int VAR_5, VAR_6;
    const char *VAR_7 =
        "SELECT * FROM apr_dbd_test WHERE col3 <= %s or col1 = 'bar'" ;
    const char *VAR_8 = "lowvalues";
    apr_dbd_prepared_t *VAR_9 = ((void*)0);
    apr_dbd_results_t *VAR_10 = ((void*)0);
    apr_dbd_row_t *VAR_11 = ((void*)0);
    const char *VAR_12 = ((void*)0);

    VAR_4 = FUNC_4(VAR_3, VAR_1, VAR_2, VAR_7, VAR_8, &VAR_9);
    if (VAR_4) {
        FUNC_7("Prepare statement failed!\n%s\n",
               FUNC_0(VAR_3, VAR_2, VAR_4));
        return VAR_4;
    }
    VAR_4 = FUNC_5(VAR_3, VAR_1, VAR_2, &VAR_10, VAR_9, 0, "3", ((void*)0));
    if (VAR_4) {
        FUNC_7("Exec of prepared statement failed!\n%s\n",
               FUNC_0(VAR_3, VAR_2, VAR_4));
        return VAR_4;
    }
    VAR_5 = 0;
    FUNC_7("Selecting rows where col3 <= 3 and bar row where it's unset.\nShould show four rows.\n");
    for (VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_10, &VAR_11, -1);
         VAR_4 == 0;
         VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_10, &VAR_11, -1)) {
        FUNC_7("ROW %d:	", ++VAR_5) ;
        for (VAR_6 = 0; VAR_6 < FUNC_3(VAR_3, VAR_10); ++VAR_6) {
            VAR_12 = FUNC_1(VAR_3, VAR_11, VAR_6);
            if (VAR_12 == ((void*)0)) {
                FUNC_7("(null)	") ;
            }
            else {
                FUNC_7("%s	", VAR_12);
            }
        }
 FUNC_6("\n", VAR_0);
    }
    return (VAR_4 == -1) ? 0 : 1;
}
