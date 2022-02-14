
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int u_int ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const,int) ;
 scalar_t__ FUNC_2 (int const*,int,int) ;
 int FUNC_3 (char*,int const*,int,int) ;

__attribute__((used)) static void
FUNC_4(netdissect_options *VAR_0, const uint8_t *VAR_1,
         uint16_t VAR_2, int VAR_3, u_int VAR_4)
{
        uint16_t VAR_5;





        if (!VAR_2
            || VAR_3 < 0
            || !FUNC_1(*(VAR_1 + VAR_3), 2)
            || (u_int)VAR_3 > VAR_4
            || !FUNC_1(*VAR_1, VAR_4)) {
                FUNC_0((VAR_0, " (unverified)"));
        } else {



                VAR_5 = FUNC_2(VAR_1, VAR_3, VAR_4);
                if (VAR_2 == VAR_5) {
                        FUNC_0((VAR_0, " (correct)"));
                } else {
                        FUNC_0((VAR_0, " (incorrect should be 0x%04x)", VAR_5));
                }
        }
}
