
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int d_name; } ;
typedef TYPE_1__ DIRENT ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,int ,size_t) ;

__attribute__((used)) static char *
FUNC_4(DIRENT * VAR_0)
{
    size_t VAR_1 = FUNC_0(VAR_0);
    char *VAR_2 = FUNC_2(VAR_1 + 1);
    if (VAR_2 == 0)
 FUNC_1("copy entryname");
    FUNC_3(VAR_2, VAR_0->d_name, VAR_1);
    VAR_2[VAR_1] = '\0';

    return VAR_2;
}
