
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int*,int*,int,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int*,int*,int,int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int*,int) ;

int
FUNC_6(void)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 1000; ++VAR_3) {
        FUNC_1(VAR_2);
        FUNC_5(VAR_1, VAR_3);
        FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2);
        if (FUNC_2(VAR_0, VAR_1, VAR_3, VAR_2) != 0) {
            FUNC_3("fail %d\n", VAR_3);
            return 100;
        }
        if (VAR_3 > 0) {
            VAR_1[FUNC_4() % VAR_3] += 1 + (FUNC_4() % 255);
            if (FUNC_2(VAR_0, VAR_1, VAR_3, VAR_2) == 0) {
                FUNC_3("forgery %d\n", VAR_3);
                return 100;
            }
            VAR_0[FUNC_4() % sizeof VAR_0] += 1 + (FUNC_4() % 255);
            if (FUNC_2(VAR_0, VAR_1, VAR_3, VAR_2) == 0) {
                FUNC_3("forgery %d\n", VAR_3);
                return 100;
            }
        }
    }
    return 0;
}
