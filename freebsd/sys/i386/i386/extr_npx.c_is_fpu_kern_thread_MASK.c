
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {int pcb_flags; } ;
struct TYPE_3__ {int td_pflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

int
FUNC_0(u_int VAR_4)
{

 if ((VAR_3->td_pflags & VAR_1) == 0)
  return (0);
 return ((VAR_2->pcb_flags & VAR_0) != 0);
}
