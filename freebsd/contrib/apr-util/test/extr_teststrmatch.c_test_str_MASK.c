
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_strmatch_pattern ;
typedef int apr_pool_t ;
typedef int abts_case ;


 int FUNC_0 (int *,char const*,char const*) ;
 int FUNC_1 (int *,int const*) ;
 char* FUNC_2 (int const*,char const*,int ) ;
 int * FUNC_3 (int *,char*,int) ;
 int * VAR_0 ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(abts_case *VAR_1, void *VAR_2)
{
    apr_pool_t *VAR_3 = VAR_0;
    const apr_strmatch_pattern *VAR_4;
    const apr_strmatch_pattern *VAR_5;
    const apr_strmatch_pattern *VAR_6;
    const apr_strmatch_pattern *VAR_7;
    const char *VAR_8 = ((void*)0);
    const char *VAR_9 = "string that contains a patterN...";
    const char *VAR_10 = "string that contains a pattern...";
    const char *VAR_11 = "pattern at the start of a string";
    const char *VAR_12 = "string that ends with a pattern";
    const char *VAR_13 = "patter\200n not found, negative chars in input";
    const char *VAR_14 = "patter\200n, negative chars, contains pattern...";

    VAR_4 = FUNC_3(VAR_3, "pattern", 1);
    FUNC_1(VAR_1, VAR_4);

    VAR_5 = FUNC_3(VAR_3, "pattern", 0);
    FUNC_1(VAR_1, VAR_5);

    VAR_6 = FUNC_3(VAR_3, "g", 0);
    FUNC_1(VAR_1, VAR_6);

    VAR_7 = FUNC_3(VAR_3, "", 0);
    FUNC_1(VAR_1, VAR_7);

    VAR_8 = FUNC_2(VAR_4, VAR_9, FUNC_4(VAR_9));
    FUNC_0(VAR_1, ((void*)0), VAR_8);

    VAR_8 = FUNC_2(VAR_4, VAR_10, FUNC_4(VAR_10));
    FUNC_0(VAR_1, VAR_10 + 23, VAR_8);

    VAR_8 = FUNC_2(VAR_6, VAR_9, FUNC_4(VAR_9));
    FUNC_0(VAR_1, VAR_9 + 5, VAR_8);

    VAR_8 = FUNC_2(VAR_7, VAR_9, FUNC_4(VAR_9));
    FUNC_0(VAR_1, VAR_9, VAR_8);

    VAR_8 = FUNC_2(VAR_5, VAR_9, FUNC_4(VAR_9));
    FUNC_0(VAR_1, VAR_9 + 23, VAR_8);

    VAR_8 = FUNC_2(VAR_4, VAR_11, FUNC_4(VAR_11));
    FUNC_0(VAR_1, VAR_11, VAR_8);

    VAR_8 = FUNC_2(VAR_4, VAR_12, FUNC_4(VAR_12));
    FUNC_0(VAR_1, VAR_12 + 24, VAR_8);

    VAR_8 = FUNC_2(VAR_4, VAR_13, FUNC_4(VAR_13));
    FUNC_0(VAR_1, ((void*)0), VAR_8);

    VAR_8 = FUNC_2(VAR_4, VAR_14, FUNC_4(VAR_14));
    FUNC_0(VAR_1, VAR_14 + 35, VAR_8);
}
