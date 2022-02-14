
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const,int) ;
 char* FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (char*,int,char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_0,
                 const u_char *VAR_1, char *VAR_2, u_int VAR_3)
{
    uint8_t VAR_4;
    u_int VAR_5, VAR_6;

    VAR_5 = 0;


    FUNC_0(VAR_1[0], 1);
    VAR_4 = *VAR_1++;


    FUNC_0(VAR_1[0], (VAR_4 >> 3));
    VAR_5 += (VAR_4 >> 3) + 1;
    VAR_6 = FUNC_3(VAR_2);
    if (VAR_4) {
        FUNC_2(VAR_2 + VAR_6, VAR_3 - VAR_6, ", Source %s",
                 FUNC_1(VAR_0, VAR_1, VAR_4));
        VAR_1 += (VAR_4 >> 3);
    }


    FUNC_0(VAR_1[0], 1);
    VAR_4 = *VAR_1++;


    FUNC_0(VAR_1[0], (VAR_4 >> 3));
    VAR_5 += (VAR_4 >> 3) + 1;
    VAR_6 = FUNC_3(VAR_2);
    if (VAR_4) {
        FUNC_2(VAR_2 + VAR_6, VAR_3 - VAR_6, ", Group %s",
                 FUNC_1(VAR_0, VAR_1, VAR_4));
        VAR_1 += (VAR_4 >> 3);
    }

trunc:
    return (VAR_5);
}
