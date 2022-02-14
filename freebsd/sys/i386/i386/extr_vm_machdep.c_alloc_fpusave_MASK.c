
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int xstate_bv; } ;
struct TYPE_3__ {TYPE_2__ sx_hd; } ;
struct savefpu_ymm {TYPE_1__ sv_xstate; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_1 ;
 void* FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void *
FUNC_2(int VAR_4)
{
 void *VAR_5;
 struct savefpu_ymm *VAR_6;

 VAR_5 = FUNC_1(VAR_1, VAR_0, VAR_4);
 if (VAR_2) {
  VAR_6 = (struct savefpu_ymm *)VAR_5;
  FUNC_0(&VAR_6->sv_xstate.sx_hd, sizeof(VAR_6->sv_xstate.sx_hd));
  VAR_6->sv_xstate.sx_hd.xstate_bv = VAR_3;
 }
 return (VAR_5);
}
