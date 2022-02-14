
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
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int * FUNC_14 (char*,int,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_15(abts_case *VAR_1, void *VAR_2)
{
    apr_bucket_alloc_t *VAR_3;
    apr_bucket_brigade *VAR_4;
    apr_bucket *VAR_5, *VAR_6;

    VAR_3 = FUNC_11(VAR_0);
    VAR_4 = FUNC_9(VAR_0, VAR_3);

    VAR_5 = FUNC_2(VAR_4);
    FUNC_0(VAR_1, "first bucket of empty brigade is sentinel",
                VAR_5 == FUNC_4(VAR_4));

    VAR_5 = FUNC_13(VAR_3);
    FUNC_3(VAR_4, VAR_5);

    FUNC_0(VAR_1, "first bucket of brigade is flush",
                FUNC_2(VAR_4) == VAR_5);

    FUNC_0(VAR_1, "bucket after flush is sentinel",
                FUNC_6(VAR_5) == FUNC_4(VAR_4));

    VAR_6 = FUNC_14("aaa", 3, VAR_3);
    FUNC_5(VAR_5, VAR_6);

    FUNC_0(VAR_1, "bucket before flush now transient",
                FUNC_7(VAR_5) == VAR_6);
    FUNC_0(VAR_1, "bucket after transient is flush",
                FUNC_6(VAR_6) == VAR_5);
    FUNC_0(VAR_1, "bucket before transient is sentinel",
                FUNC_7(VAR_6) == FUNC_4(VAR_4));

    FUNC_8(VAR_4);

    FUNC_0(VAR_1, "cleaned up brigade was empty", FUNC_1(VAR_4));

    FUNC_10(VAR_4);
    FUNC_12(VAR_3);
}
