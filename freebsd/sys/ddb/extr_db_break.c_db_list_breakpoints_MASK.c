
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* db_breakpoint_t ;
struct TYPE_2__ {int address; int init_count; scalar_t__ map; struct TYPE_2__* link; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(void)
{
 register db_breakpoint_t VAR_2;

 if (VAR_1 == 0) {
     FUNC_1("No breakpoints set\n");
     return;
 }

 FUNC_1(" Map      Count    Address\n");
 for (VAR_2 = VAR_1;
      VAR_2 != 0;
      VAR_2 = VAR_2->link) {
     FUNC_1("%s%8p %5d    ",
        FUNC_0(VAR_2->map) ? "*" : " ",
        (void *)VAR_2->map, VAR_2->init_count);
     FUNC_2(VAR_2->address, VAR_0);
     FUNC_1("\n");
 }
}
