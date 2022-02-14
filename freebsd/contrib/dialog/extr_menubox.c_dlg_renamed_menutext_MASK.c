
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* input_result; } ;
struct TYPE_4__ {char* name; } ;
typedef TYPE_1__ DIALOG_LISTITEM ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

int
FUNC_2(DIALOG_LISTITEM * VAR_2, int VAR_3, char *VAR_4)
{
    if (VAR_1.input_result)
 VAR_1.input_result[0] = '\0';
    FUNC_0("RENAMED ");
    FUNC_1(VAR_2[VAR_3].name);
    FUNC_0(" ");
    FUNC_1(VAR_4);
    return VAR_0;
}
