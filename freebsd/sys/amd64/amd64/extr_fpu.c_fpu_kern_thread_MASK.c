
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_7__ {int td_pflags; } ;
struct TYPE_6__ {scalar_t__ pcb_save; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int
FUNC_4(u_int VAR_4)
{

 FUNC_0((VAR_3->td_pflags & VAR_1) != 0,
     ("Only kthread may use fpu_kern_thread"));
 FUNC_0(VAR_2->pcb_save == FUNC_2(VAR_2),
     ("mangled pcb_save"));
 FUNC_0(FUNC_1(VAR_2), ("recursive call"));

 FUNC_3(VAR_2, VAR_0);
 return (0);
}
