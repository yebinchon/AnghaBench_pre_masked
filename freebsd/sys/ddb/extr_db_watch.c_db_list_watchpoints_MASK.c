
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* db_watchpoint_t ;
struct TYPE_2__ {scalar_t__ loaddr; scalar_t__ hiaddr; scalar_t__ map; struct TYPE_2__* link; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
 db_watchpoint_t VAR_1;

 if (VAR_0 == 0) {
     FUNC_1("No watchpoints set\n");
     return;
 }


 FUNC_1(" Map                Address          Size\n");



 for (VAR_1 = VAR_0;
      VAR_1 != 0;
      VAR_1 = VAR_1->link)

     FUNC_1("%s%16p  %16lx  %lx\n",



        FUNC_0(VAR_1->map) ? "*" : " ",
        (void *)VAR_1->map, (long)VAR_1->loaddr,
        (long)VAR_1->hiaddr - (long)VAR_1->loaddr);
}
