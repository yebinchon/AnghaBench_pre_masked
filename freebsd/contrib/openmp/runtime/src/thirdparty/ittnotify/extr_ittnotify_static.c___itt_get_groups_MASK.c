
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int gr ;
typedef int __itt_group_id ;
struct TYPE_4__ {char const* env_var; int groups; } ;
struct TYPE_3__ {int id; int * name; } ;


 char* FUNC_0 (char const*,char*,char const**,int*) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int,char const*,int) ;
 char* FUNC_3 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,int) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static __itt_group_id FUNC_5(void)
{
    int VAR_6;
    __itt_group_id VAR_7 = VAR_1;
    const char* VAR_8 = "INTEL_ITTNOTIFY_GROUPS";
    const char* VAR_9 = FUNC_3(VAR_8);

    if (VAR_9 != ((void*)0))
    {
        int VAR_10;
        char VAR_11[255];
        const char* VAR_12;
        while ((VAR_9 = FUNC_0(VAR_9, ",; ", &VAR_12, &VAR_10)) != ((void*)0))
        {
            int VAR_13 = FUNC_4(VAR_10, (int)(sizeof(VAR_11) - 1));
            FUNC_2(VAR_11, sizeof(VAR_11) - 1, VAR_12, VAR_13);
            VAR_11[VAR_13] = 0;

            for (VAR_6 = 0; VAR_5[VAR_6].name != ((void*)0); VAR_6++)
            {
                if (!FUNC_1(VAR_11, VAR_5[VAR_6].name))
                {
                    VAR_7 = (__itt_group_id)(VAR_7 | VAR_5[VAR_6].id);
                    break;
                }
            }
        }



        for (VAR_6 = 0; VAR_5[VAR_6].id != VAR_1; VAR_6++)
            if (VAR_5[VAR_6].id != VAR_0 &&
                VAR_5[VAR_6].id > VAR_3 &&
                VAR_5[VAR_6].id < VAR_2)
                VAR_7 = (__itt_group_id)(VAR_7 | VAR_5[VAR_6].id);
        return VAR_7;
    }
    else
    {
        for (VAR_6 = 0; VAR_4[VAR_6].env_var != ((void*)0); VAR_6++)
            if (FUNC_3(VAR_4[VAR_6].env_var) != ((void*)0))
                return VAR_4[VAR_6].groups;
    }

    return VAR_7;
}
