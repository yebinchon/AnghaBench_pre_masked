
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
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int) ;

void
FUNC_6(int VAR_4, char **VAR_5)
{
    int VAR_6;

    if(VAR_4 > 2)
 goto usage;

    if(!VAR_3) {
 FUNC_2("No security data exchange has taken place.\n");
 VAR_1 = -1;
 return;
    }

    if(VAR_4 == 1) {
 FUNC_3();
    } else {
 VAR_6 = FUNC_1(VAR_5[1]);
 if(VAR_6 == -1)
     goto usage;

 if((*VAR_2->check_prot)(VAR_0, VAR_6)) {
     FUNC_2("%s does not implement %s protection.\n",
     VAR_2->name, FUNC_0(VAR_6));
     VAR_1 = -1;
     return;
 }
 if(FUNC_4(VAR_6) < 0) {
     VAR_1 = -1;
     return;
 }
    }
    VAR_1 = 0;
    return;
 usage:
    FUNC_2("usage: %s [clear|safe|confidential|private]\n",
    VAR_5[0]);
    VAR_1 = -1;
}
