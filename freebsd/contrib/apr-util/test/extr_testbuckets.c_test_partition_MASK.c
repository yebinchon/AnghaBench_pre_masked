
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_bucket_brigade ;
typedef int apr_bucket_alloc_t ;
typedef int apr_bucket ;
typedef int abts_case ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int) ;
 int * FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int **) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ,char*,int) ;

__attribute__((used)) static void FUNC_14(abts_case *VAR_2, void *VAR_3)
{
    apr_bucket_alloc_t *VAR_4 = FUNC_9(VAR_1);
    apr_bucket_brigade *VAR_5 = FUNC_6(VAR_1, VAR_4);
    apr_bucket *VAR_6;

    VAR_6 = FUNC_11(VAR_0, FUNC_12(VAR_0), VAR_4);
    FUNC_2(VAR_5, VAR_6);

    FUNC_5(VAR_2, "partition brigade",
                       FUNC_8(VAR_5, 5, &VAR_6));

    FUNC_13(VAR_2, FUNC_1(VAR_5),
                        "hello", 5);

    FUNC_13(VAR_2, FUNC_3(VAR_5),
                        ", world", 7);

    FUNC_0(VAR_2, "partition returns APR_INCOMPLETE",
                FUNC_8(VAR_5, 8192, &VAR_6));

    FUNC_0(VAR_2, "APR_INCOMPLETE partition returned sentinel",
                VAR_6 == FUNC_4(VAR_5));

    FUNC_7(VAR_5);
    FUNC_10(VAR_4);
}
