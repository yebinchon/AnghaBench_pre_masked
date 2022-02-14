
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ help_tags; } ;
struct TYPE_4__ {char* help; char* name; } ;
typedef TYPE_1__ DIALOG_FORMITEM ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (int ) ;

void
FUNC_2(int *VAR_3, char **VAR_4, DIALOG_FORMITEM * VAR_5)
{
    FUNC_1(VAR_1);
    if (FUNC_0(VAR_5->help)) {
 *VAR_4 = VAR_2.help_tags ? VAR_5->name : VAR_5->help;
 *VAR_3 = VAR_0;
    } else {
 *VAR_4 = VAR_5->name;
    }
}
