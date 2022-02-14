
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_bucket_brigade ;
typedef int apr_bucket_alloc_t ;
typedef int apr_bucket ;
typedef int abts_case ;


 int FUNC_0 (int *,char*,int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int *,char*) ;
 int * FUNC_8 (int *,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_9(abts_case *VAR_1, void *VAR_2)
{
    apr_bucket_alloc_t *VAR_3 = FUNC_4(VAR_0);
    apr_bucket_brigade *VAR_4, *VAR_5;
    apr_bucket *VAR_6;

    VAR_4 = FUNC_8(VAR_3, "hello, ", "world");


    VAR_6 = FUNC_1(VAR_4);
    VAR_5 = FUNC_3(VAR_4, VAR_6);

    FUNC_0(VAR_1, "split brigade contains one bucket",
                FUNC_6(VAR_5) == 1);
    FUNC_0(VAR_1, "original brigade contains one bucket",
                FUNC_6(VAR_4) == 1);

    FUNC_7(VAR_1, "match original brigade", VAR_4, "hello, ");
    FUNC_7(VAR_1, "match split brigade", VAR_5, "world");

    FUNC_2(VAR_5);
    FUNC_2(VAR_4);
    FUNC_5(VAR_3);
}
