
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;
typedef int apr_dbd_t ;
typedef int apr_dbd_row_t ;
typedef int apr_dbd_results_t ;
typedef int apr_dbd_driver_t ;


 char* FUNC_0 (int const*,int *,int) ;
 char* FUNC_1 (int const*,int *,int) ;
 int FUNC_2 (int const*,int *,int *,int **,int) ;
 int FUNC_3 (int const*,int *) ;
 int FUNC_4 (int const*,int *,int *,int **,char const*,int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,...) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_7(apr_pool_t* VAR_1, apr_dbd_t* VAR_2,
                         const apr_dbd_driver_t* VAR_3)
{
    int VAR_4 = 0;
    int VAR_5;
    const char* VAR_6;
    const char* VAR_7 = "SELECT * FROM apr_dbd_test ORDER BY col1, col2";
    apr_dbd_results_t *VAR_8 = ((void*)0);
    apr_dbd_row_t *VAR_9 = ((void*)0);
    VAR_4 = FUNC_4(VAR_3,VAR_1,VAR_2,&VAR_8,VAR_7,1);
    if (VAR_4) {
        FUNC_6("Select failed: %s", FUNC_0(VAR_3, VAR_2, VAR_4));
        return VAR_4;
    }
    VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_8, &VAR_9, 5) ;
    if (VAR_4) {
        FUNC_6("get_row failed: %s", FUNC_0(VAR_3, VAR_2, VAR_4));
        return VAR_4;
    }
    FUNC_6("ROW 5:	");
    for (VAR_5 = 0; VAR_5 < FUNC_3(VAR_3, VAR_8); ++VAR_5) {
        VAR_6 = FUNC_1(VAR_3, VAR_9, VAR_5);
        if (VAR_6 == ((void*)0)) {
            FUNC_6("(null)	") ;
        }
        else {
            FUNC_6("%s	", VAR_6);
        }
    }
    FUNC_5("\n", VAR_0);
    VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_8, &VAR_9, 1) ;
    if (VAR_4) {
        FUNC_6("get_row failed: %s", FUNC_0(VAR_3, VAR_2, VAR_4));
        return VAR_4;
    }
    FUNC_6("ROW 1:	");
    for (VAR_5 = 0; VAR_5 < FUNC_3(VAR_3, VAR_8); ++VAR_5) {
        VAR_6 = FUNC_1(VAR_3, VAR_9, VAR_5);
        if (VAR_6 == ((void*)0)) {
            FUNC_6("(null)	") ;
        }
        else {
            FUNC_6("%s	", VAR_6);
        }
    }
    FUNC_5("\n", VAR_0);
    VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_8, &VAR_9, 11) ;
    if (VAR_4 != -1) {
        FUNC_6("Oops!  get_row out of range but thinks it succeeded!\n%s\n",
                FUNC_0(VAR_3, VAR_2, VAR_4));
        return -1;
    }
    VAR_4 = 0;

    return VAR_4;
}
