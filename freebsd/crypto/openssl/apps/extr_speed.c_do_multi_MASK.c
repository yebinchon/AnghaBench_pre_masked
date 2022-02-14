
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int* FUNC_2 (int,char*) ;
 double FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 double** VAR_1 ;
 int FUNC_6 (int) ;
 double** VAR_2 ;
 double** VAR_3 ;
 double** VAR_4 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int,char*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (char*,int,int *) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (int*) ;
 int VAR_5 ;
 int FUNC_14 (int*) ;
 int FUNC_15 (char*,...) ;
 double** VAR_6 ;
 double** VAR_7 ;
 int FUNC_16 (char**,char*) ;
 int VAR_8 ;
 char* FUNC_17 (char*,char) ;
 scalar_t__ FUNC_18 (char*,char*,int) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_19(int VAR_10, int VAR_11)
{
    int VAR_12;
    int VAR_13[2];
    int *VAR_14;
    static char VAR_15[] = ":";

    VAR_14 = FUNC_2(sizeof(*VAR_14) * VAR_10, "fd buffer for do_multi");
    for (VAR_12 = 0; VAR_12 < VAR_10; ++VAR_12) {
        if (FUNC_14(VAR_13) == -1) {
            FUNC_1(VAR_0, "pipe failure\n");
            FUNC_7(1);
        }
        FUNC_10(VAR_8);
        (void)FUNC_0(VAR_0);
        if (FUNC_12()) {
            FUNC_5(VAR_13[1]);
            VAR_14[VAR_12] = VAR_13[0];
        } else {
            FUNC_5(VAR_13[0]);
            FUNC_5(1);
            if (FUNC_6(VAR_13[1]) == -1) {
                FUNC_1(VAR_0, "dup failed\n");
                FUNC_7(1);
            }
            FUNC_5(VAR_13[1]);
            VAR_5 = 1;
            VAR_9 = 0;
            FUNC_13(VAR_14);
            return 0;
        }
        FUNC_15("Forked child %d\n", VAR_12);
    }


    for (VAR_12 = 0; VAR_12 < VAR_10; ++VAR_12) {
        FILE *VAR_16;
        char VAR_17[1024];
        char *VAR_18;

        VAR_16 = FUNC_9(VAR_14[VAR_12], "r");
        while (FUNC_11(VAR_17, sizeof(VAR_17), VAR_16)) {
            VAR_18 = FUNC_17(VAR_17, '\n');
            if (VAR_18)
                *VAR_18 = '\0';
            if (VAR_17[0] != '+') {
                FUNC_1(VAR_0,
                           "Don't understand line '%s' from child %d\n", VAR_17,
                           VAR_12);
                continue;
            }
            FUNC_15("Got: %s from %d\n", VAR_17, VAR_12);
            if (FUNC_18(VAR_17, "+F:", 3) == 0) {
                int VAR_19;
                int VAR_20;

                VAR_18 = VAR_17 + 3;
                VAR_19 = FUNC_4(FUNC_16(&VAR_18, VAR_15));
                FUNC_16(&VAR_18, VAR_15);
                for (VAR_20 = 0; VAR_20 < VAR_11; ++VAR_20)
                    VAR_6[VAR_19][VAR_20] += FUNC_3(FUNC_16(&VAR_18, VAR_15));
            } else if (FUNC_18(VAR_17, "+F2:", 4) == 0) {
                int VAR_21;
                double VAR_22;

                VAR_18 = VAR_17 + 4;
                VAR_21 = FUNC_4(FUNC_16(&VAR_18, VAR_15));
                FUNC_16(&VAR_18, VAR_15);

                VAR_22 = FUNC_3(FUNC_16(&VAR_18, VAR_15));
                VAR_7[VAR_21][0] += VAR_22;

                VAR_22 = FUNC_3(FUNC_16(&VAR_18, VAR_15));
                VAR_7[VAR_21][1] += VAR_22;
            }

            else if (FUNC_18(VAR_17, "+F3:", 4) == 0) {
                int VAR_23;
                double VAR_24;

                VAR_18 = VAR_17 + 4;
                VAR_23 = FUNC_4(FUNC_16(&VAR_18, VAR_15));
                FUNC_16(&VAR_18, VAR_15);

                VAR_24 = FUNC_3(FUNC_16(&VAR_18, VAR_15));
                VAR_1[VAR_23][0] += VAR_24;

                VAR_24 = FUNC_3(FUNC_16(&VAR_18, VAR_15));
                VAR_1[VAR_23][1] += VAR_24;
            }


            else if (FUNC_18(VAR_17, "+F4:", 4) == 0) {
                int VAR_25;
                double VAR_26;

                VAR_18 = VAR_17 + 4;
                VAR_25 = FUNC_4(FUNC_16(&VAR_18, VAR_15));
                FUNC_16(&VAR_18, VAR_15);

                VAR_26 = FUNC_3(FUNC_16(&VAR_18, VAR_15));
                VAR_3[VAR_25][0] += VAR_26;

                VAR_26 = FUNC_3(FUNC_16(&VAR_18, VAR_15));
                VAR_3[VAR_25][1] += VAR_26;
            } else if (FUNC_18(VAR_17, "+F5:", 4) == 0) {
                int VAR_27;
                double VAR_28;

                VAR_18 = VAR_17 + 4;
                VAR_27 = FUNC_4(FUNC_16(&VAR_18, VAR_15));
                FUNC_16(&VAR_18, VAR_15);

                VAR_28 = FUNC_3(FUNC_16(&VAR_18, VAR_15));
                VAR_2[VAR_27][0] += VAR_28;
            } else if (FUNC_18(VAR_17, "+F6:", 4) == 0) {
                int VAR_29;
                double VAR_30;

                VAR_18 = VAR_17 + 4;
                VAR_29 = FUNC_4(FUNC_16(&VAR_18, VAR_15));
                FUNC_16(&VAR_18, VAR_15);

                VAR_30 = FUNC_3(FUNC_16(&VAR_18, VAR_15));
                VAR_4[VAR_29][0] += VAR_30;

                VAR_30 = FUNC_3(FUNC_16(&VAR_18, VAR_15));
                VAR_4[VAR_29][1] += VAR_30;
            }


            else if (FUNC_18(VAR_17, "+H:", 3) == 0) {
                ;
            } else
                FUNC_1(VAR_0, "Unknown type '%s' from child %d\n", VAR_17,
                           VAR_12);
        }

        FUNC_8(VAR_16);
    }
    FUNC_13(VAR_14);
    return 1;
}
