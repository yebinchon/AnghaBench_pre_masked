
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int const) ;





 int FUNC_2 (int) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (int *,int const*,int) ;
 int FUNC_8 (int *,int const*,int) ;

__attribute__((used)) static int
FUNC_9(netdissect_options *VAR_0, register const u_char *VAR_1, int VAR_2)
{
    u_char VAR_3;
    int VAR_4;

    FUNC_0(VAR_2, 1);
    FUNC_1(*VAR_1);
    VAR_3 = *VAR_1;


    switch(VAR_3) {
        case 128: VAR_4 = FUNC_8(VAR_0, VAR_1, VAR_2); break;
        case 129: VAR_4 = FUNC_7(VAR_0, VAR_1, VAR_2); break;
        case 130: VAR_4 = FUNC_5(VAR_0, VAR_1, VAR_2); break;
        case 131: VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_2); break;
        case 132: VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2); break;
        default: VAR_4 = FUNC_6(VAR_0, VAR_1, VAR_2); break;
    }






    FUNC_2(VAR_4);

trunc:
    return (-1);
}
