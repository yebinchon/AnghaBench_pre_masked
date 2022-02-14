
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(netdissect_options *VAR_1,
                   uint32_t VAR_2, int VAR_3, int VAR_4, int *VAR_5)
{
    if (VAR_3 > 0) {
        if (*VAR_5) {
            *VAR_5 = 0;
            if (VAR_4 > 1) {
                u_int VAR_6;
                FUNC_0((VAR_1, "\n"));
                for (VAR_6 = VAR_4; VAR_6 > 0; VAR_6--)
                    FUNC_0((VAR_1, "\t"));
            } else {
                FUNC_0((VAR_1, " "));
            }
        } else {
            FUNC_0((VAR_1, ", "));
        }
        FUNC_0((VAR_1, "%s", FUNC_1(VAR_0, "Easter Egg", VAR_2)));
        if (VAR_3 > 1)
            FUNC_0((VAR_1, " (x%d)", VAR_3));
    }
}
