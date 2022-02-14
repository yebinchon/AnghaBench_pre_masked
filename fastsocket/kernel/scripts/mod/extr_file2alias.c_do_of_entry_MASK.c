
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {char* name; char* type; char* compatible; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_3 (const char *VAR_0, struct of_device_id *VAR_1, char *VAR_2)
{
    int VAR_3;
    char *VAR_4;
    VAR_3 = FUNC_2 (VAR_2, "of:N%sT%s",
                    VAR_1->name[0] ? VAR_1->name : "*",
                    VAR_1->type[0] ? VAR_1->type : "*");

    if (VAR_1->compatible[0])
        FUNC_2 (&VAR_2[VAR_3], "%sC%s",
                     VAR_1->type[0] ? "*" : "",
                     VAR_1->compatible);


    for (VAR_4 = VAR_2; VAR_4 && *VAR_4; VAR_4++)
        if (FUNC_1 (*VAR_4))
            *VAR_4 = '_';

    FUNC_0(VAR_2);
    return 1;
}
