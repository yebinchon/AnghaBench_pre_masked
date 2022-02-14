
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int guess ;
typedef int apr_uint32_t ;
typedef int apr_time_t ;
typedef int abts_case ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_7(abts_case *VAR_2, void *VAR_3)
{
    int VAR_4, VAR_5;
    apr_time_t VAR_6;
    apr_time_t VAR_7 = 0;
    apr_time_t VAR_8, VAR_9;
    char VAR_10[50];

    for (VAR_4 = 1970; VAR_4 < 2038; ++VAR_4) {
        VAR_8 = VAR_1[VAR_4 - 1970] + VAR_7;
        FUNC_5(VAR_10, VAR_8);
        VAR_8 *= VAR_0;
        VAR_9 = FUNC_2(VAR_10);
        FUNC_0(VAR_2, VAR_8 == VAR_9);
    }




    VAR_6 = FUNC_4() % FUNC_1(4294967291);


    for (VAR_5 = 0; VAR_5 < 10000; ++VAR_5) {
        VAR_6 = (time_t)FUNC_6((apr_uint32_t)VAR_6);
        if (VAR_6 < 0)
            VAR_6 *= -1;
        VAR_8 = VAR_6 + VAR_7;
        FUNC_5(VAR_10, VAR_8);
        VAR_8 *= VAR_0;
        VAR_9 = FUNC_2(VAR_10);
        FUNC_0(VAR_2, VAR_8 == VAR_9);
    }
}
