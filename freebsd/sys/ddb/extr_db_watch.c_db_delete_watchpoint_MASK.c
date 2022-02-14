
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_map_t ;
typedef TYPE_1__* db_watchpoint_t ;
typedef scalar_t__ db_addr_t ;
struct TYPE_4__ {scalar_t__ loaddr; scalar_t__ hiaddr; struct TYPE_4__* link; int map; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_3(vm_map_t VAR_1, db_addr_t VAR_2)
{
 db_watchpoint_t VAR_3;
 db_watchpoint_t *VAR_4;

 for (VAR_4 = &VAR_0;
      (VAR_3 = *VAR_4) != 0;
      VAR_4 = &VAR_3->link)
     if (FUNC_0(VAR_3->map, VAR_1) &&
  (VAR_3->loaddr <= VAR_2) &&
  (VAR_2 < VAR_3->hiaddr)) {
  *VAR_4 = VAR_3->link;
  FUNC_2(VAR_3);
  return;
     }

 FUNC_1("Not set.\n");
}
