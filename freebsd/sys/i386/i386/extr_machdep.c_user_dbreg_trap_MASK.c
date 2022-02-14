
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int register_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;

int
FUNC_5(register_t VAR_2)
{
        u_int32_t VAR_3;
        u_int32_t VAR_4;
        int VAR_5;
        caddr_t VAR_6[4];
        int VAR_7;

        VAR_4 = VAR_2 & VAR_0;
        if (VAR_4 == 0) {




                return 0;
        }

        VAR_3 = FUNC_4();
        if ((VAR_3 & 0x000000ff) == 0) {





                return 0;
        }

        VAR_5 = 0;






        if (VAR_4 & 0x01) {
                VAR_6[VAR_5++] = (caddr_t)FUNC_0();
        }
        if (VAR_4 & 0x02) {
                VAR_6[VAR_5++] = (caddr_t)FUNC_1();
        }
        if (VAR_4 & 0x04) {
                VAR_6[VAR_5++] = (caddr_t)FUNC_2();
        }
        if (VAR_4 & 0x08) {
                VAR_6[VAR_5++] = (caddr_t)FUNC_3();
        }

        for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
                if (VAR_6[VAR_7] < (caddr_t)VAR_1) {



                        return VAR_5;
                }
        }




        return 0;
}
