
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int paramValues_t ;
typedef int contexts_t ;
typedef int buffers_t ;
typedef int BMK_benchResult_t ;
typedef int BMK_benchOutcome_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;

__attribute__((used)) static int FUNC_3 ( BMK_benchResult_t* VAR_2,
                            buffers_t VAR_3, contexts_t VAR_4,
                            paramValues_t VAR_5)
{
    BMK_benchOutcome_t const VAR_6 = FUNC_0(VAR_3, VAR_4,
                                                        VAR_0, &VAR_5,
                                                        VAR_1, 3);
    if (!FUNC_2(VAR_6)) return 1;
    *VAR_2 = FUNC_1(VAR_6);
    return 0;
}
