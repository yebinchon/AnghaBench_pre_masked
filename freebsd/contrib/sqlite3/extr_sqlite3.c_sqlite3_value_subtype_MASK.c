
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_value ;
struct TYPE_2__ {int flags; unsigned int eSubtype; } ;
typedef TYPE_1__ Mem ;


 int VAR_0 ;

unsigned int FUNC_0(sqlite3_value *VAR_1){
  Mem *VAR_2 = (Mem*)VAR_1;
  return ((VAR_2->flags & VAR_0) ? VAR_2->eSubtype : 0);
}
