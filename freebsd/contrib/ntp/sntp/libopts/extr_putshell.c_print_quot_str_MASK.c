
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const* VAR_1 ;
 char const VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*,size_t,size_t,int ) ;
 char* FUNC_3 (char const*) ;
 int VAR_3 ;
 char* FUNC_4 (char const*,int ) ;

__attribute__((used)) static void
FUNC_5(char const * VAR_4)
{



    if ((VAR_4 == ((void*)0)) || (*VAR_4 == VAR_2)) {
        FUNC_1(VAR_1, VAR_3);
        return;
    }





    VAR_4 = FUNC_3(VAR_4);
    if (*VAR_4 == VAR_2)
        return;




    FUNC_0(VAR_0, VAR_3);
    for (;;) {
        char const * VAR_5 = FUNC_4(VAR_4, VAR_0);
        if (VAR_5 == ((void*)0))
            break;




        (void)FUNC_2(VAR_4, (size_t)(VAR_5 - VAR_4), (size_t)1, VAR_3);





        FUNC_0(VAR_0, VAR_3);
        VAR_4 = FUNC_3(VAR_5);
        if (*VAR_4 == VAR_2)
            return;

        FUNC_0(VAR_0, VAR_3);
    }





    FUNC_1(VAR_4, VAR_3);
    FUNC_0(VAR_0, VAR_3);
}
