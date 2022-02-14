
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int z_interpose; } ;
typedef TYPE_1__ Obj_Entry ;


 int FUNC_0 (int ,int *,int *,int ,int ,int *) ;
 int VAR_0 ;
 char* VAR_1 ;
 TYPE_1__* FUNC_1 (char*,int,int *,int ) ;
 size_t FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static int
FUNC_4(void)
{
    char *VAR_2 = VAR_1;
    Obj_Entry *VAR_3;
    static const char VAR_4[] = " \t:;";

    if (VAR_2 == ((void*)0))
 return 0;

    VAR_2 += FUNC_3(VAR_2, VAR_4);
    while (*VAR_2 != '\0') {
 size_t VAR_5 = FUNC_2(VAR_2, VAR_4);
 char VAR_6;

 VAR_6 = VAR_2[VAR_5];
 VAR_2[VAR_5] = '\0';
 VAR_3 = FUNC_1(VAR_2, -1, ((void*)0), 0);
 if (VAR_3 == ((void*)0))
     return -1;
 VAR_3->z_interpose = 1;
 VAR_2[VAR_5] = VAR_6;
 VAR_2 += VAR_5;
 VAR_2 += FUNC_3(VAR_2, VAR_4);
    }
    FUNC_0(VAR_0, ((void*)0), ((void*)0), 0, 0, ((void*)0));
    return 0;
}
