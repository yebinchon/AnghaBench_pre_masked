
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; char* exit; char* echo; scalar_t__ hasErrCtl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *) ;
 int * VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_2 (int *,int,char*,char*) ;
 char* FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (char*,int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char) ;

void
FUNC_7(void)
{
    if (VAR_5 == ((void*)0)) {




 VAR_4 = VAR_2->name;







 VAR_5 = FUNC_3(VAR_1, VAR_4, VAR_0);
    }
    if (VAR_2->exit == ((void*)0)) {
 VAR_2->exit = "";
    }
    if (VAR_2->echo == ((void*)0)) {
 VAR_2->echo = "";
    }
    if (VAR_2->hasErrCtl && *VAR_2->exit) {
 if (VAR_3 &&
     FUNC_4(VAR_2->exit, &VAR_3[1]) != 0) {
     FUNC_1(VAR_3);
     VAR_3 = ((void*)0);
 }
 if (!VAR_3) {
     int VAR_6 = FUNC_5(VAR_2->exit) + 2;

     VAR_3 = FUNC_0(VAR_6);
     if (VAR_3) {
  FUNC_2(VAR_3, VAR_6, "-%s", VAR_2->exit);
     }
 }
    } else if (VAR_3) {
 FUNC_1(VAR_3);
 VAR_3 = ((void*)0);
    }
}
