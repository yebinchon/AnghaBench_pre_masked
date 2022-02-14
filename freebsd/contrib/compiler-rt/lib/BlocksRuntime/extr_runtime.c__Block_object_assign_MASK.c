
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int FUNC_0 (void*,void*) ;
 int FUNC_1 (void const*,void*) ;
 int FUNC_2 (void*,void const*,int const) ;
 void* FUNC_3 (void const*,int const) ;
 int FUNC_4 (void const*) ;

void FUNC_5(void *VAR_5, const void *VAR_6, const int VAR_7) {

    if ((VAR_7 & VAR_0) == VAR_0) {
        if ((VAR_7 & VAR_4) == VAR_4) {
            FUNC_1(VAR_6, VAR_5);
        }
        else {

            FUNC_0((void *)VAR_6, VAR_5);
        }
    }
    else if ((VAR_7 & VAR_2) == VAR_2) {


        FUNC_2(VAR_5, VAR_6, VAR_7);
    }

    else if ((VAR_7 & VAR_1) == VAR_1) {

        FUNC_0(FUNC_3(VAR_6, VAR_7), VAR_5);
    }

    else if ((VAR_7 & VAR_3) == VAR_3) {

        FUNC_4(VAR_6);

        FUNC_0((void *)VAR_6, VAR_5);
    }
}
