
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_map_t ;
typedef TYPE_1__* db_breakpoint_t ;
typedef int db_addr_t ;
struct TYPE_4__ {int init_count; int count; struct TYPE_4__* link; scalar_t__ flags; int address; int map; } ;


 TYPE_1__* FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(vm_map_t VAR_1, db_addr_t VAR_2, int VAR_3)
{
 register db_breakpoint_t VAR_4;

 if (FUNC_1(VAR_1, VAR_2)) {
     FUNC_2("Already set.\n");
     return;
 }

 VAR_4 = FUNC_0();
 if (VAR_4 == 0) {
     FUNC_2("Too many breakpoints.\n");
     return;
 }

 VAR_4->map = VAR_1;
 VAR_4->address = VAR_2;
 VAR_4->flags = 0;
 VAR_4->init_count = VAR_3;
 VAR_4->count = VAR_3;

 VAR_4->link = VAR_0;
 VAR_0 = VAR_4;
}
