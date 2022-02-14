
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trapframe {int tf_err; } ;
struct TYPE_4__ {scalar_t__ pm_ucr3; int pm_cr3; } ;
struct TYPE_3__ {int pcb_saved_ucr3; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static bool
FUNC_1(struct trapframe *VAR_9)
{

 return (FUNC_0(VAR_7)->pm_ucr3 != VAR_5 &&
     VAR_8 != 0 && (VAR_9->tf_err & (VAR_2 | VAR_4 |
     VAR_3 | VAR_1)) == (VAR_2 | VAR_3 | VAR_1) &&
     (VAR_6->pcb_saved_ucr3 & ~VAR_0) ==
     (FUNC_0(VAR_7)->pm_cr3 & ~VAR_0));
}
