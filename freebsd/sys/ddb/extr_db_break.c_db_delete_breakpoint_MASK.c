
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_map_t ;
typedef TYPE_1__* db_breakpoint_t ;
typedef scalar_t__ db_addr_t ;
struct TYPE_4__ {scalar_t__ address; struct TYPE_4__* link; int map; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(vm_map_t VAR_1, db_addr_t VAR_2)
{
 register db_breakpoint_t VAR_3;
 register db_breakpoint_t *VAR_4;

 for (VAR_4 = &VAR_0;
      (VAR_3 = *VAR_4) != 0;
      VAR_4 = &VAR_3->link) {
     if (FUNC_1(VAR_3->map, VAR_1) &&
  (VAR_3->address == VAR_2)) {
  *VAR_4 = VAR_3->link;
  break;
     }
 }
 if (VAR_3 == 0) {
     FUNC_2("Not set.\n");
     return;
 }

 FUNC_0(VAR_3);
}
