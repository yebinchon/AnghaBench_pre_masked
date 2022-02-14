
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned char*,unsigned char*,size_t,unsigned char*,int ,int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (unsigned char*,unsigned char*,size_t,unsigned char*,int ,int ) ;
 unsigned char* VAR_6 ;
 int FUNC_4 (char*) ;
 size_t FUNC_5 () ;
 int FUNC_6 (unsigned char*,size_t) ;
 int FUNC_7 (unsigned char*) ;
 scalar_t__ FUNC_8 (size_t) ;

int
FUNC_9(void)
{
    unsigned char *VAR_7;
    unsigned char *VAR_8;
    unsigned char *VAR_9;
    size_t VAR_10;
    size_t VAR_11 = 1000;
    size_t VAR_12;
    int VAR_13;
    int VAR_14;

    VAR_7 = (unsigned char *) FUNC_8(VAR_11);
    VAR_8 = (unsigned char *) FUNC_8(VAR_11);
    VAR_9 = (unsigned char *) FUNC_8(VAR_11);
    FUNC_2(VAR_0, VAR_1);
    FUNC_2(VAR_2, VAR_3);
    for (VAR_10 = 0; VAR_10 + VAR_5 <= VAR_11; VAR_10++) {
        FUNC_6(VAR_6, VAR_4);
        FUNC_6(VAR_7 + VAR_5, VAR_10);
        VAR_14 = FUNC_1(VAR_8, VAR_7, VAR_10 + VAR_5, VAR_6, VAR_2, VAR_1);
        FUNC_0(VAR_14 == 0);



        VAR_13 = 5;

        while (VAR_13 > 0) {
            VAR_8[FUNC_5() % (VAR_10 + VAR_5)] = FUNC_5();
            if (FUNC_3(VAR_9, VAR_8, VAR_10 + VAR_5, VAR_6, VAR_0,
                                VAR_3) == 0) {
                for (VAR_12 = 0; VAR_12 < VAR_10 + VAR_5; ++VAR_12) {
                    if (VAR_9[VAR_12] != VAR_7[VAR_12]) {
                        FUNC_4("forgery\n");
                        return 100;
                    }
                }
            } else {
                VAR_13--;
            }
        }
    }
    FUNC_7(VAR_7);
    FUNC_7(VAR_8);
    FUNC_7(VAR_9);

    return 0;
}
