
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** strings; int num_strings; } ;
typedef TYPE_1__ getarg_strings ;


 int VAR_0 ;
 int FUNC_0 (char**) ;
 char** FUNC_1 (char**,int) ;

__attribute__((used)) static int
FUNC_2(getarg_strings *VAR_1, char *VAR_2)
{
    char **VAR_3;

    VAR_3 = FUNC_1(VAR_1->strings, (VAR_1->num_strings + 1) * sizeof(*VAR_1->strings));
    if (VAR_3 == ((void*)0)) {
 FUNC_0(VAR_1->strings);
 VAR_1->strings = ((void*)0);
 VAR_1->num_strings = 0;
 return VAR_0;
    }
    VAR_1->strings = VAR_3;
    VAR_1->strings[VAR_1->num_strings] = VAR_2;
    VAR_1->num_strings++;
    return 0;
}
