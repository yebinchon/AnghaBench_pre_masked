
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* db_breakpoint_t ;
struct TYPE_3__ {int bkpt_inst; int address; int map; struct TYPE_3__* link; } ;


 int FUNC_0 (int ,int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2(void)
{
 register db_breakpoint_t VAR_2;

 if (VAR_1) {

  for (VAR_2 = VAR_0;
       VAR_2 != 0;
       VAR_2 = VAR_2->link)
   if (FUNC_1(VAR_2->map)) {
    FUNC_0(VAR_2->address, &VAR_2->bkpt_inst);
   }
  VAR_1 = 0;
 }
}
