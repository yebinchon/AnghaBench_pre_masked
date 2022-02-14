
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int id; scalar_t__ opt_type; int ** value; } ;
struct TYPE_4__ {char* name; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,char**,int ,TYPE_1__*,int*) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(int VAR_7, char** VAR_8) {
    int VAR_9 = 0;
    int VAR_10;

    while (1) {
        VAR_10 = FUNC_1(VAR_7, VAR_8, VAR_5, VAR_1, &VAR_9);
        if (VAR_10 == -1)
            break;

        int VAR_11 = 0;
        for (size_t VAR_12 = 0; VAR_12 < VAR_2; ++VAR_12) {
            if (VAR_10 == VAR_0[VAR_12].id && VAR_0[VAR_12].value != ((void*)0)) {
                *VAR_0[VAR_12].value = VAR_3;
                VAR_11 = 1;
                break;
            }
        }
        if (VAR_11)
            continue;

        switch (VAR_10) {
            case 'h':
            case '?':
            default:
                FUNC_2();
                return 1;
        }
    }

    int VAR_13 = 0;
    for (size_t VAR_14 = 0; VAR_14 < VAR_2; ++VAR_14) {
        if (VAR_0[VAR_14].opt_type != VAR_4)
            continue;
        if (VAR_0[VAR_14].value == ((void*)0))
            continue;
        if (*VAR_0[VAR_14].value != ((void*)0))
            continue;
        FUNC_0(
            VAR_6,
            "--%s is a required argument but is not set\n",
            VAR_1[VAR_14].name);
        VAR_13 = 1;
    }
    if (VAR_13) {
        FUNC_0(VAR_6, "\n");
        FUNC_2();
        return 1;
    }

    return 0;
}
