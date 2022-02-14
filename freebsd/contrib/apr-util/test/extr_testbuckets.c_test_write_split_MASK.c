
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_bucket_brigade ;
typedef int apr_bucket_alloc_t ;
typedef int apr_bucket ;
typedef int abts_case ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *,int *,char*,int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,int ,int *,int *) ;
 int FUNC_10 (int *,int ) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,int ,char*,int) ;

__attribute__((used)) static void FUNC_13(abts_case *VAR_2, void *VAR_3)
{
    apr_bucket_alloc_t *VAR_4 = FUNC_7(VAR_1);
    apr_bucket_brigade *VAR_5 = FUNC_3(VAR_1, VAR_4);
    apr_bucket_brigade *VAR_6;
    apr_bucket *VAR_7;

    VAR_7 = FUNC_9(VAR_0, FUNC_11(VAR_0), ((void*)0), VAR_4);
    FUNC_1(VAR_5, VAR_7);
    FUNC_10(VAR_7, FUNC_11("hello, "));
    VAR_6 = FUNC_5(VAR_5, FUNC_2(VAR_5));
    FUNC_6(VAR_5, ((void*)0), ((void*)0), "foo", FUNC_11("foo"));
    FUNC_12(VAR_2, FUNC_0(VAR_6), "world", 5);

    FUNC_4(VAR_5);
    FUNC_4(VAR_6);
    FUNC_8(VAR_4);
}
