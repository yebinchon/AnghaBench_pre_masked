
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(netdissect_options *VAR_0, register const u_char *VAR_1,
                          u_int VAR_2, int VAR_3)
{
        u_int VAR_4;

        if (VAR_3)
                FUNC_0((VAR_0, "tfo"));

        if (VAR_2 == 0) {

                FUNC_0((VAR_0, " cookiereq"));
        } else {

                if (VAR_2 % 2 != 0 || VAR_2 < 4 || VAR_2 > 16) {
                        FUNC_0((VAR_0, " invalid"));
                } else {
                        FUNC_0((VAR_0, " cookie "));
                        for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
                                FUNC_0((VAR_0, "%02x", VAR_1[VAR_4]));
                }
        }
}
