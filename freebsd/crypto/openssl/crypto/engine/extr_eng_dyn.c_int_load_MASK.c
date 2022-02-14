
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dir_load; char* DYNAMIC_LIBNAME; int dynamic_dso; int dirs; } ;
typedef TYPE_1__ dynamic_data_ctx ;


 int * FUNC_0 (int ,char*,int *,int ) ;
 char* FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(dynamic_data_ctx *VAR_0)
{
    int VAR_1, VAR_2;

    if ((VAR_0->dir_load != 2) && (FUNC_0(VAR_0->dynamic_dso,
                                          VAR_0->DYNAMIC_LIBNAME, ((void*)0),
                                          0)) != ((void*)0))
        return 1;

    if (!VAR_0->dir_load || (VAR_1 = FUNC_3(VAR_0->dirs)) < 1)
        return 0;
    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        const char *VAR_3 = FUNC_4(VAR_0->dirs, VAR_2);
        char *VAR_4 = FUNC_1(VAR_0->dynamic_dso, VAR_0->DYNAMIC_LIBNAME, VAR_3);
        if (!VAR_4)
            return 0;
        if (FUNC_0(VAR_0->dynamic_dso, VAR_4, ((void*)0), 0)) {

            FUNC_2(VAR_4);
            return 1;
        }
        FUNC_2(VAR_4);
    }
    return 0;
}
