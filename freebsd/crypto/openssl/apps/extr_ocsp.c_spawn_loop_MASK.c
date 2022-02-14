
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__* FUNC_8 (int,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int,scalar_t__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (int ,int ,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int) ;
 long FUNC_16 (scalar_t__) ;
 int FUNC_17 (int ,char*,...) ;
 long VAR_13 ;
 scalar_t__ FUNC_18 (int,int*,int ) ;

__attribute__((used)) static void FUNC_19(void)
{
    pid_t *VAR_14 = ((void*)0);
    int VAR_15;
    int VAR_16 = 0;
    int VAR_17;

    FUNC_12(VAR_12, VAR_4, VAR_1);

    if (FUNC_13(0, 0)) {
        FUNC_17(VAR_2, "fatal: error detaching from parent process group: %s",
               FUNC_16(VAR_9));
        FUNC_9(1);
    }
    VAR_14 = FUNC_8(VAR_10 * sizeof(*VAR_14), "child PID array");
    for (VAR_17 = 0; VAR_17 < VAR_10; ++VAR_17)
        VAR_14[VAR_17] = 0;

    FUNC_14(VAR_6, VAR_11);
    FUNC_14(VAR_7, VAR_11);

    while (VAR_13 == 0) {
        pid_t VAR_18;





        while (VAR_13 == 0 && VAR_16 >= VAR_10) {
            if ((VAR_18 = FUNC_18(-1, &VAR_15, 0)) > 0) {
                for (VAR_17 = 0; VAR_17 < VAR_16; ++VAR_17) {
                    if (VAR_14[VAR_17] == VAR_18) {
                        VAR_14[VAR_17] = 0;
                        --VAR_16;
                        break;
                    }
                }
                if (VAR_17 >= VAR_10) {
                    FUNC_17(VAR_2, "fatal: internal error: "
                           "no matching child slot for pid: %ld",
                           (long) VAR_18);
                    FUNC_11(1, VAR_14);
                }
                if (VAR_15 != 0) {
                    if (FUNC_4(VAR_15))
                        FUNC_17(VAR_5, "child process: %ld, exit status: %d",
                               (long)VAR_18, FUNC_3(VAR_15));
                    else if (FUNC_5(VAR_15))
                        FUNC_17(VAR_5, "child process: %ld, term signal %d%s",
                               (long)VAR_18, FUNC_6(VAR_15),



                               "");
                    FUNC_15(1);
                }
                break;
            } else if (VAR_9 != VAR_0) {
                FUNC_17(VAR_2, "fatal: waitpid(): %s", FUNC_16(VAR_9));
                FUNC_11(1, VAR_14);
            }
        }
        if (VAR_13)
            break;

        switch(VAR_18 = FUNC_10()) {
        case -1:

            FUNC_15(30);
            break;
        case 0:
            FUNC_0(VAR_14);
            FUNC_14(VAR_6, VAR_8);
            FUNC_14(VAR_7, VAR_8);
            if (VAR_13)
                FUNC_7(0);
            if (FUNC_1() <= 0) {
                FUNC_17(VAR_2, "fatal: RAND_poll() failed");
                FUNC_7(1);
            }
            return;
        default:
            for (VAR_17 = 0; VAR_17 < VAR_10; ++VAR_17) {
                if (VAR_14[VAR_17] == 0) {
                    VAR_14[VAR_17] = VAR_18;
                    VAR_16++;
                    break;
                }
            }
            if (VAR_17 >= VAR_10) {
                FUNC_17(VAR_2, "fatal: internal error: no free child slots");
                FUNC_11(1, VAR_14);
            }
            break;
        }
    }


    FUNC_17(VAR_3, "terminating on signal: %d", VAR_13);
    FUNC_11(0, VAR_14);
}
