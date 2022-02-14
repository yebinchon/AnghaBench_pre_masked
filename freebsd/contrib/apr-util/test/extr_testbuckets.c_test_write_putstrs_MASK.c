
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int apr_size_t ;
typedef int apr_bucket_brigade ;
typedef int apr_bucket_alloc_t ;
typedef int apr_bucket ;
typedef int abts_case ;


 int FUNC_0 (int *,char const*,char*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int*) ;
 int FUNC_6 (int *,int *,int *,char*,char*,...) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,int,int *,int *) ;
 int VAR_0 ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static void FUNC_11(abts_case *VAR_1, void *VAR_2)
{
    apr_bucket_alloc_t *VAR_3 = FUNC_7(VAR_0);
    apr_bucket_brigade *VAR_4 = FUNC_3(VAR_0, VAR_3);
    apr_bucket *VAR_5;
    char VAR_6[30];
    apr_size_t VAR_7 = sizeof(VAR_6);
    const char *VAR_8 = "123456789abcdefghij";

    VAR_5 = FUNC_9("1", 1, ((void*)0), VAR_3);
    FUNC_1(VAR_4, VAR_5);

    FUNC_6(VAR_4, ((void*)0), ((void*)0), "2", "34", "567", "8", "9a", "bcd",
                        "e", "f", "gh", "i", ((void*)0));
    FUNC_6(VAR_4, ((void*)0), ((void*)0), "j", ((void*)0));
    FUNC_2(VAR_1, "apr_brigade_flatten",
                       FUNC_5(VAR_4, VAR_6, &VAR_7));
    FUNC_0(VAR_1, VAR_8, VAR_6, FUNC_10(VAR_8));

    FUNC_4(VAR_4);
    FUNC_8(VAR_3);
}
