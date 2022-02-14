
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; } ;
typedef TYPE_1__ DIALOG_LISTITEM ;





 int FUNC_0 (int*,char**,TYPE_1__*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, DIALOG_LISTITEM * VAR_1, int VAR_2)
{
    char *VAR_3;

    switch (VAR_0) {
    case 128:
    case 130:
 FUNC_1(VAR_1[VAR_2].name);
 break;
    case 129:
 FUNC_0(&VAR_0, &VAR_3, &VAR_1[VAR_2]);
 FUNC_1(VAR_3);
 break;
    }
    return VAR_0;
}
