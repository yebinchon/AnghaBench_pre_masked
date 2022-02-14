
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; int * args; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;

void
FUNC_3(void)
{
 int VAR_4;

 VAR_0;
 if (VAR_3) for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++) {
  if (FUNC_0(VAR_3->args[VAR_4])) {
   FUNC_1(VAR_2, "");
   FUNC_2();
   break;
  }
 }
 VAR_1;
}
