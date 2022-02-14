
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* DYNAMIC_LIBNAME; int no_vcheck; char* engine_id; int list_add_value; int dir_load; int dirs; int * dynamic_dso; } ;
typedef TYPE_1__ dynamic_data_ctx ;
typedef int ENGINE ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (void*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(ENGINE *VAR_6, int VAR_7, long VAR_8, void *VAR_9, void (*VAR_10) (void))
{
    dynamic_data_ctx *VAR_11 = FUNC_3(VAR_6);
    int VAR_12;

    if (!VAR_11) {
        FUNC_0(VAR_0, VAR_4);
        return 0;
    }
    VAR_12 = ((VAR_11->dynamic_dso == ((void*)0)) ? 0 : 1);

    if (VAR_12) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    switch (VAR_7) {
    case 128:

        if (VAR_9 && (FUNC_6((const char *)VAR_9) < 1))
            VAR_9 = ((void*)0);
        FUNC_1(VAR_11->DYNAMIC_LIBNAME);
        if (VAR_9)
            VAR_11->DYNAMIC_LIBNAME = FUNC_2(VAR_9);
        else
            VAR_11->DYNAMIC_LIBNAME = ((void*)0);
        return (VAR_11->DYNAMIC_LIBNAME ? 1 : 0);
    case 129:
        VAR_11->no_vcheck = ((VAR_8 == 0) ? 0 : 1);
        return 1;
    case 132:

        if (VAR_9 && (FUNC_6((const char *)VAR_9) < 1))
            VAR_9 = ((void*)0);
        FUNC_1(VAR_11->engine_id);
        if (VAR_9)
            VAR_11->engine_id = FUNC_2(VAR_9);
        else
            VAR_11->engine_id = ((void*)0);
        return (VAR_11->engine_id ? 1 : 0);
    case 131:
        if ((VAR_8 < 0) || (VAR_8 > 2)) {
            FUNC_0(VAR_0, VAR_3);
            return 0;
        }
        VAR_11->list_add_value = (int)VAR_8;
        return 1;
    case 130:
        return FUNC_4(VAR_6, VAR_11);
    case 133:
        if ((VAR_8 < 0) || (VAR_8 > 2)) {
            FUNC_0(VAR_0, VAR_3);
            return 0;
        }
        VAR_11->dir_load = (int)VAR_8;
        return 1;
    case 134:

        if (!VAR_9 || (FUNC_6((const char *)VAR_9) < 1)) {
            FUNC_0(VAR_0, VAR_3);
            return 0;
        }
        {
            char *VAR_13 = FUNC_2(VAR_9);
            if (VAR_13 == ((void*)0)) {
                FUNC_0(VAR_0, VAR_5);
                return 0;
            }
            if (!FUNC_5(VAR_11->dirs, VAR_13)) {
                FUNC_1(VAR_13);
                FUNC_0(VAR_0, VAR_5);
                return 0;
            }
        }
        return 1;
    default:
        break;
    }
    FUNC_0(VAR_0, VAR_2);
    return 0;
}
