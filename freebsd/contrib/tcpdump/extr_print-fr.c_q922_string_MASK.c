
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;
typedef int buffer ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int *,int const*,int*,int*,int *,int) ;
 int FUNC_2 (char*,int,char*,int) ;

char *
FUNC_3(netdissect_options *VAR_0, const u_char *VAR_1, u_int VAR_2)
{

    static u_int VAR_3, VAR_4;
    static uint8_t VAR_5[4];
    static char VAR_6[sizeof("DLCI xxxxxxxxxx")];
    FUNC_0(VAR_6, 0, sizeof(VAR_6));

    if (FUNC_1(VAR_0, VAR_1, &VAR_3, &VAR_4, VAR_5, VAR_2) == 1){
        FUNC_2(VAR_6, sizeof(VAR_6), "DLCI %u", VAR_3);
    }

    return VAR_6;
}
