
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int u_char ;
typedef int netdissect_options ;


 scalar_t__ VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (int const) ;

__attribute__((used)) static int
FUNC_1(netdissect_options *VAR_3,
                     uint8_t VAR_4, const u_char *VAR_5, int VAR_6)
{
    const u_char *VAR_7 = VAR_5;





    if (VAR_4 == VAR_0) {
        return 4;
    }






    while (VAR_7 < VAR_5 + VAR_6) {
        FUNC_0(VAR_7[0]);




        if (VAR_7[0] < VAR_2 || VAR_7[0] > VAR_1) {
            goto trunc;
        }
        FUNC_0(VAR_7[1]);
        VAR_7 += 2 + VAR_7[1] * 2;
    }





    if (VAR_7 == VAR_5 + VAR_6) {
        return 2;
    }

trunc:







   return 4;
}
