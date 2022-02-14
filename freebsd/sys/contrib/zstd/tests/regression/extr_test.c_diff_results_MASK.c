
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * data; } ;
typedef TYPE_1__ data_buffer_t ;


 int FUNC_0 (TYPE_1__ const,TYPE_1__ const) ;
 int FUNC_1 (TYPE_1__ const) ;
 TYPE_1__ FUNC_2 (char const*) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(char const* VAR_1, char const* VAR_2) {
    data_buffer_t const VAR_3 = FUNC_2(VAR_1);
    data_buffer_t const VAR_4 = FUNC_2(VAR_2);
    int VAR_5 = 1;

    if (VAR_3.data == ((void*)0)) {
        FUNC_3(VAR_0, "failed to open results '%s' for diff\n", VAR_1);
        goto out;
    }
    if (VAR_4.data == ((void*)0)) {
        FUNC_3(
            VAR_0,
            "failed to open previous results '%s' for diff\n",
            VAR_2);
        goto out;
    }

    VAR_5 = FUNC_0(VAR_3, VAR_4);
    if (VAR_5 != 0) {
        FUNC_3(
            VAR_0,
            "actual results '%s' does not match expected results '%s'\n",
            VAR_1,
            VAR_2);
    } else {
        FUNC_3(VAR_0, "actual results match expected results\n");
    }
out:
    FUNC_1(VAR_3);
    FUNC_1(VAR_4);
    return VAR_5;
}
