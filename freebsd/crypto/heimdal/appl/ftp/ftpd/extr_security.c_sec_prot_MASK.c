
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; scalar_t__ (* check_prot ) (int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int ) ;
 scalar_t__ FUNC_8 (int ,int) ;

void
FUNC_9(int VAR_4, char **VAR_5)
{
    int VAR_6 = -1;

    if(VAR_4 > 3)
 goto usage;

    if(VAR_4 == 1) {
 FUNC_4();
 return;
    }
    if(!VAR_3) {
 FUNC_2("No security data exchange has taken place.\n");
 VAR_1 = -1;
 return;
    }
    VAR_6 = FUNC_1(VAR_5[VAR_4 - 1]);

    if(VAR_6 == -1)
 goto usage;

    if((*VAR_2->check_prot)(VAR_0, VAR_6)) {
 FUNC_2("%s does not implement %s protection.\n",
        VAR_2->name, FUNC_0(VAR_6));
 VAR_1 = -1;
 return;
    }

    if(VAR_4 == 2 || FUNC_7(VAR_5[1], "data", FUNC_6(VAR_5[1])) == 0) {
 if(FUNC_3(VAR_6) < 0){
     VAR_1 = -1;
     return;
 }
    } else if(FUNC_7(VAR_5[1], "command", FUNC_6(VAR_5[1])) == 0) {
 if(FUNC_5(VAR_6) < 0) {
     VAR_1 = -1;
     return;
 }
    } else
 goto usage;
    VAR_1 = 0;
    return;
 usage:
    FUNC_2("usage: %s [command|data] [clear|safe|confidential|private]\n",
    VAR_5[0]);
    VAR_1 = -1;
}
