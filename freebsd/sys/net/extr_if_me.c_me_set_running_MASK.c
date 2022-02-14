
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct me_softc {int me_src; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct me_softc*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct me_softc *VAR_1)
{

 if (FUNC_1(VAR_1->me_src))
  FUNC_0(VAR_1)->if_drv_flags |= VAR_0;
 else
  FUNC_0(VAR_1)->if_drv_flags &= ~VAR_0;
}
