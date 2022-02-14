
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_map_t ;
typedef TYPE_1__* db_breakpoint_t ;
typedef scalar_t__ db_addr_t ;
struct TYPE_4__ {scalar_t__ address; int map; struct TYPE_4__* link; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static db_breakpoint_t
FUNC_1(vm_map_t VAR_1, db_addr_t VAR_2)
{
 register db_breakpoint_t VAR_3;

 for (VAR_3 = VAR_0;
      VAR_3 != 0;
      VAR_3 = VAR_3->link)
 {
     if (FUNC_0(VAR_3->map, VAR_1) &&
  (VAR_3->address == VAR_2))
  return (VAR_3);
 }
 return (0);
}
