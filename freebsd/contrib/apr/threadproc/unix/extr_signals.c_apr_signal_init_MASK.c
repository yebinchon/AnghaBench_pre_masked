
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int * FUNC_0 (int *,char*,int) ;
 int ** VAR_35 ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(apr_pool_t *VAR_36)
{
    int VAR_37;

    FUNC_1(0, "Signal 0");
    for (VAR_37 = 0; VAR_37 < VAR_0; ++VAR_37)
        if (VAR_35[VAR_37] == ((void*)0))
            VAR_35[VAR_37] = FUNC_0(VAR_36, "signal #%d", VAR_37);
}
