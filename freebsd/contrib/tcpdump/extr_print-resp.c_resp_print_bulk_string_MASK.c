
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*,int) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int *,int,int const*,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int const,int) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int const*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(netdissect_options *VAR_0, register const u_char *VAR_1, int VAR_2) {
    int VAR_3 = VAR_2, VAR_4;


    FUNC_6(VAR_1, VAR_3);


    FUNC_2(VAR_0, VAR_3, VAR_1, VAR_4);

    if (VAR_4 >= 0) {

        if (VAR_4 == 0)
            FUNC_7(VAR_0);
        else {
            FUNC_3(VAR_3, VAR_4);
            FUNC_4(*VAR_1, VAR_4);
            FUNC_5(VAR_0, VAR_1, VAR_4);
            VAR_1 += VAR_4;
            VAR_3 -= VAR_4;
        }






        FUNC_1(VAR_1, VAR_3);
        FUNC_0(VAR_1, VAR_3);
    } else {

        switch(VAR_4) {
            case (-1): FUNC_11(VAR_0); break;
            case (-2): goto trunc;
            case (-3): FUNC_10(VAR_0); break;
            case (-4): FUNC_9(VAR_0); break;
            default: FUNC_8(VAR_0); break;
        }
    }

    return (VAR_2 - VAR_3);

trunc:
    return (-1);
}
