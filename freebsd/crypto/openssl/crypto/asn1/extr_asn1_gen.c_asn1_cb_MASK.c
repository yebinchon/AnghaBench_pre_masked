
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int utype; char const* str; int imp_tag; int imp_class; int format; } ;
typedef TYPE_1__ tag_exp_arg ;


 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*,char const*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (TYPE_1__*,int,int,int,int,int) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (char const*,int,int*,int*) ;
 int FUNC_5 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_6(const char *VAR_15, int VAR_16, void *VAR_17)
{
    tag_exp_arg *VAR_18 = VAR_17;
    int VAR_19;
    int VAR_20;
    int VAR_21 = 0;
    const char *VAR_22, *VAR_23 = ((void*)0);

    int VAR_24, VAR_25;

    if (VAR_15 == ((void*)0))
        return -1;

    for (VAR_19 = 0, VAR_22 = VAR_15; VAR_19 < VAR_16; VAR_22++, VAR_19++) {

        if (*VAR_22 == ':') {
            VAR_23 = VAR_22 + 1;
            VAR_21 = VAR_16 - (VAR_23 - VAR_15);
            VAR_16 = VAR_22 - VAR_15;
            break;
        }
    }

    VAR_20 = FUNC_3(VAR_15, VAR_16);

    if (VAR_20 == -1) {
        FUNC_0(VAR_0, VAR_9);
        FUNC_1(2, "tag=", VAR_15);
        return -1;
    }


    if (!(VAR_20 & VAR_1)) {
        VAR_18->utype = VAR_20;
        VAR_18->str = VAR_23;

        if (!VAR_23 && VAR_15[VAR_16]) {
            FUNC_0(VAR_0, VAR_7);
            return -1;
        }
        return 0;
    }

    switch (VAR_20) {

    case 131:

        if (VAR_18->imp_tag != -1) {
            FUNC_0(VAR_0, VAR_6);
            return -1;
        }
        if (!FUNC_4(VAR_23, VAR_21, &VAR_18->imp_tag, &VAR_18->imp_class))
            return -1;
        break;

    case 133:

        if (!FUNC_4(VAR_23, VAR_21, &VAR_24, &VAR_25))
            return -1;
        if (!FUNC_2(VAR_18, VAR_24, VAR_25, 1, 0, 0))
            return -1;
        break;

    case 129:
        if (!FUNC_2(VAR_18, VAR_12, VAR_14, 1, 0, 1))
            return -1;
        break;

    case 128:
        if (!FUNC_2(VAR_18, VAR_13, VAR_14, 1, 0, 1))
            return -1;
        break;

    case 134:
        if (!FUNC_2(VAR_18, VAR_10, VAR_14, 0, 1, 1))
            return -1;
        break;

    case 130:
        if (!FUNC_2(VAR_18, VAR_11, VAR_14, 0, 0, 1))
            return -1;
        break;

    case 132:
        if (!VAR_23) {
            FUNC_0(VAR_0, VAR_8);
            return -1;
        }
        if (FUNC_5(VAR_23, "ASCII", 5) == 0)
            VAR_18->format = VAR_2;
        else if (FUNC_5(VAR_23, "UTF8", 4) == 0)
            VAR_18->format = VAR_5;
        else if (FUNC_5(VAR_23, "HEX", 3) == 0)
            VAR_18->format = VAR_4;
        else if (FUNC_5(VAR_23, "BITLIST", 7) == 0)
            VAR_18->format = VAR_3;
        else {
            FUNC_0(VAR_0, VAR_8);
            return -1;
        }
        break;

    }

    return 1;

}
