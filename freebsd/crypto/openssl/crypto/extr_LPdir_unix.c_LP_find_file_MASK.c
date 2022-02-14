
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct dirent {char* d_name; } ;
struct TYPE_6__ {int expect_file_generations; char* previous_entry_name; char* entry_name; int * dir; } ;
typedef TYPE_1__ LP_DIR_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int * FUNC_4 (char const*) ;
 struct dirent* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*,char*,int) ;

const char *FUNC_9(LP_DIR_CTX **VAR_3, const char *VAR_4)
{
    struct dirent *VAR_5 = ((void*)0);

    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
        VAR_2 = VAR_0;
        return 0;
    }

    VAR_2 = 0;
    if (*VAR_3 == ((void*)0)) {
        *VAR_3 = FUNC_2(sizeof(**VAR_3));
        if (*VAR_3 == ((void*)0)) {
            VAR_2 = VAR_1;
            return 0;
        }
        FUNC_3(*VAR_3, 0, sizeof(**VAR_3));
        (*VAR_3)->dir = FUNC_4(VAR_4);
        if ((*VAR_3)->dir == ((void*)0)) {
            int VAR_6 = VAR_2;
            FUNC_0(*VAR_3);
            *VAR_3 = ((void*)0);
            VAR_2 = VAR_6;
            return 0;
        }
    }
    VAR_5 = FUNC_5((*VAR_3)->dir);
    if (VAR_5 == ((void*)0)) {
        return 0;
    }

    FUNC_8((*VAR_3)->entry_name, VAR_5->d_name,
            sizeof((*VAR_3)->entry_name) - 1);
    (*VAR_3)->entry_name[sizeof((*VAR_3)->entry_name) - 1] = '\0';
    return (*VAR_3)->entry_name;
}
