
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int*,int*,size_t,int ) ;
 scalar_t__ FUNC_1 (int*,int*,size_t,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 (int*,size_t) ;

int
FUNC_6(void)
{
    size_t VAR_3;

    for (VAR_3 = 0; VAR_3 < sizeof VAR_1; ++VAR_3) {
        FUNC_2(VAR_2);
        FUNC_5(VAR_1, VAR_3);
        FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2);
        if (FUNC_1(VAR_0, VAR_1, VAR_3, VAR_2) != 0) {
            FUNC_3("fail %u\n", (unsigned int) VAR_3);
            return 100;
        }
        if (VAR_3 > 0) {
            VAR_1[(size_t) FUNC_4() % VAR_3] += 1 + (FUNC_4() % 255);
            if (FUNC_1(VAR_0, VAR_1, VAR_3, VAR_2) == 0) {
                FUNC_3("forgery %u\n", (unsigned int) VAR_3);
                return 100;
            }
            VAR_0[FUNC_4() % sizeof VAR_0] += 1 + (FUNC_4() % 255);
            if (FUNC_1(VAR_0, VAR_1, VAR_3, VAR_2) == 0) {
                FUNC_3("forgery %u\n", (unsigned int) VAR_3);
                return 100;
            }
        }
    }
    return 0;
}
