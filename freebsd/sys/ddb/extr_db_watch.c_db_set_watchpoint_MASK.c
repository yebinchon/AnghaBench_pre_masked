
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef int * vm_map_t ;
typedef TYPE_1__* db_watchpoint_t ;
typedef scalar_t__ db_addr_t ;
struct TYPE_4__ {scalar_t__ loaddr; scalar_t__ hiaddr; struct TYPE_4__* link; int * map; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 () ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(vm_map_t VAR_2, db_addr_t VAR_3, vm_size_t VAR_4)
{
 db_watchpoint_t VAR_5;

 if (VAR_2 == ((void*)0)) {
     FUNC_1("No map.\n");
     return;
 }





 for (VAR_5 = VAR_0;
      VAR_5 != 0;
      VAR_5 = VAR_5->link)
     if (FUNC_0(VAR_5->map, VAR_2) &&
  (VAR_5->loaddr == VAR_3) &&
  (VAR_5->hiaddr == VAR_3+VAR_4)) {
  FUNC_1("Already set.\n");
  return;
     }

 VAR_5 = FUNC_2();
 if (VAR_5 == 0) {
     FUNC_1("Too many watchpoints.\n");
     return;
 }

 VAR_5->map = VAR_2;
 VAR_5->loaddr = VAR_3;
 VAR_5->hiaddr = VAR_3+VAR_4;

 VAR_5->link = VAR_0;
 VAR_0 = VAR_5;

 VAR_1 = 0;
}
