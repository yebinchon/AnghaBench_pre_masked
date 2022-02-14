
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *,int,int const*,int) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(netdissect_options *VAR_0, register const u_char *VAR_1, int VAR_2) {
    u_int VAR_3 = VAR_2;
    int VAR_4, VAR_5, VAR_6;


    FUNC_1(VAR_1, VAR_3);


    FUNC_0(VAR_0, VAR_3, VAR_1, VAR_4);

    if (VAR_4 > 0) {

        for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
            VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_3);

            FUNC_2(VAR_6);

            VAR_1 += VAR_6;
            VAR_3 -= VAR_6;
        }
    } else {

        switch(VAR_4) {
            case 0: FUNC_4(VAR_0); break;
            case (-1): FUNC_8(VAR_0); break;
            case (-2): goto trunc;
            case (-3): FUNC_7(VAR_0); break;
            case (-4): FUNC_6(VAR_0); break;
            default: FUNC_5(VAR_0); break;
        }
    }

    return (VAR_2 - VAR_3);

trunc:
    return (-1);
}
