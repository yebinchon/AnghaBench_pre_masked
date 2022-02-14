
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,char**) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 char* FUNC_10 (int) ;

int FUNC_11(int VAR_5, char** VAR_6) {

    int VAR_7 = FUNC_8(VAR_5, VAR_6);
    if (VAR_7 != 0)
        return VAR_7;

    if (FUNC_0())
        return 1;


    FUNC_7(VAR_3);
    VAR_7 = FUNC_2(VAR_0);
    if (VAR_7 != 0) {
        FUNC_6(VAR_4, "data_init() failed with error=%s\n", FUNC_10(VAR_7));
        return 1;
    }


    VAR_7 = 1;
    FILE* VAR_8 = FUNC_5(VAR_2, "w");
    if (VAR_8 == ((void*)0)) {
        FUNC_6(VAR_4, "Failed to open the output file\n");
        goto out;
    }
    VAR_7 = FUNC_9(VAR_8);
    FUNC_4(VAR_8);

    if (VAR_7 != 0)
        goto out;

    if (VAR_1)

        VAR_7 = FUNC_3(VAR_2, VAR_1);

out:
    FUNC_1();
    return VAR_7;
}
