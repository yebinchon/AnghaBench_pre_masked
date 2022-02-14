
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slclist {int arg; int (* handler ) (int ) ;} ;


 scalar_t__ FUNC_0 (struct slclist*) ;
 int FUNC_1 (int ,char*,...) ;
 struct slclist* FUNC_2 (char*) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(int VAR_1, char **VAR_2)
{
    struct slclist *VAR_3;

    if (VAR_1 != 2) {
 FUNC_1(VAR_0,
     "Need an argument to 'slc' command.  'slc ?' for help.\r\n");
 return 0;
    }
    VAR_3 = FUNC_2(VAR_2[1]);
    if (VAR_3 == 0) {
 FUNC_1(VAR_0, "'%s': unknown argument ('slc ?' for help).\r\n",
        VAR_2[1]);
 return 0;
    }
    if (FUNC_0(VAR_3)) {
 FUNC_1(VAR_0, "'%s': ambiguous argument ('slc ?' for help).\r\n",
        VAR_2[1]);
 return 0;
    }
    (*VAR_3->handler)(VAR_3->arg);
    FUNC_3();
    return 1;
}
