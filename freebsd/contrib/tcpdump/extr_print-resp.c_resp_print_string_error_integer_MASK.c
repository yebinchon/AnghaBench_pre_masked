
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*,int) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int const*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_0, register const u_char *VAR_1, int VAR_2) {
    int VAR_3 = VAR_2, VAR_4, VAR_5;
    const u_char *VAR_6;


    FUNC_2(VAR_1, VAR_3);
    VAR_6 = VAR_1;
    FUNC_0(VAR_6, VAR_3);






    VAR_4 = (VAR_6 - VAR_1);
    FUNC_1(VAR_0, VAR_1, VAR_4);
    VAR_5 = 1 + VAR_4 + 2 ;

    FUNC_3(VAR_5);

trunc:
    return (-1);
}
