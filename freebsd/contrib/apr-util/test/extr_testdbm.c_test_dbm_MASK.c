
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dbm_table_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_dbm_t ;
typedef int abts_case ;


 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int **,char const*,char const*,int ,int ,int ) ;
 char* FUNC_3 (int ,char*,char const*,int *) ;
 int * FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_10(abts_case *VAR_5, void *VAR_6)
{
    apr_dbm_t *VAR_7;
    apr_status_t VAR_8;
    dbm_table_t *VAR_9;
    const char *VAR_10 = VAR_6;
    const char *VAR_11 = FUNC_3(VAR_4, "data/test-", VAR_10, ((void*)0));

    VAR_8 = FUNC_2(&VAR_7, VAR_10, VAR_11, VAR_1, VAR_2, VAR_4);
    FUNC_0(VAR_5, VAR_3, VAR_8);

    if (VAR_8 != VAR_3)
        return;

    VAR_9 = FUNC_4();

    FUNC_8(VAR_5, VAR_7, VAR_9);
    FUNC_7(VAR_5, VAR_7, VAR_9);
    FUNC_5(VAR_5, VAR_7, VAR_9);
    FUNC_6(VAR_5, VAR_7, VAR_9);
    FUNC_9(VAR_5, VAR_7, VAR_9);

    FUNC_1(VAR_7);

    VAR_8 = FUNC_2(&VAR_7, VAR_10, VAR_11, VAR_0, VAR_2, VAR_4);
    FUNC_0(VAR_5, VAR_3, VAR_8);

    if (VAR_8 != VAR_3)
        return;

    FUNC_6(VAR_5, VAR_7, VAR_9);
    FUNC_9(VAR_5, VAR_7, VAR_9);
    FUNC_7(VAR_5, VAR_7, VAR_9);

    FUNC_1(VAR_7);
}
