
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modelist {int (* handler ) (int ) ;int arg1; scalar_t__ needconnect; } ;


 scalar_t__ FUNC_0 (void*) ;
 struct modelist* FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(int VAR_2, char *VAR_3[])
{
    struct modelist *VAR_4;

    if (VAR_2 != 2) {
 FUNC_3("'mode' command requires an argument\n");
 FUNC_3("'mode ?' for help.\n");
    } else if ((VAR_4 = FUNC_1(VAR_3[1])) == 0) {
 FUNC_2(VAR_1, "Unknown mode '%s' ('mode ?' for help).\n", VAR_3[1]);
    } else if (FUNC_0((void *)VAR_4)) {
 FUNC_2(VAR_1, "Ambiguous mode '%s' ('mode ?' for help).\n", VAR_3[1]);
    } else if (VAR_4->needconnect && !VAR_0) {
 FUNC_3("?Need to be connected first.\n");
 FUNC_3("'mode ?' for help.\n");
    } else if (VAR_4->handler) {
 return (*VAR_4->handler)(VAR_4->arg1);
    }
    return 0;
}
