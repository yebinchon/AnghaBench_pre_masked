
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct breakpoint {TYPE_1__* loc; int enable_state; } ;
struct TYPE_2__ {int inserted; } ;


 int VAR_0 ;

void
FUNC_0 (struct breakpoint *VAR_1)
{
  VAR_1->enable_state = VAR_0;


  VAR_1->loc->inserted = 1;
}
