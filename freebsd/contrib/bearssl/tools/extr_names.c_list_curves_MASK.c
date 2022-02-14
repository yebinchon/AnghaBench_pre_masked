
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char** sid; scalar_t__ name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,...) ;

void
FUNC_1(void)
{
 size_t VAR_1;
 for (VAR_1 = 0; VAR_0[VAR_1].name; VAR_1 ++) {
  size_t VAR_2;

  for (VAR_2 = 0; VAR_0[VAR_1].sid[VAR_2]; VAR_2 ++) {
   if (VAR_2 == 0) {
    FUNC_0("   ");
   } else if (VAR_2 == 1) {
    FUNC_0(" (");
   } else {
    FUNC_0(", ");
   }
   FUNC_0("%s", VAR_0[VAR_1].sid[VAR_2]);
  }
  if (VAR_2 > 1) {
   FUNC_0(")");
  }
  FUNC_0("\n");
 }
}
