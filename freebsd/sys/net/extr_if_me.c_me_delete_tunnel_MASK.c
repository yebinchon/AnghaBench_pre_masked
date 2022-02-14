
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ s_addr; } ;
struct TYPE_5__ {scalar_t__ s_addr; } ;
struct me_softc {TYPE_2__ me_dst; TYPE_1__ me_src; } ;
struct TYPE_7__ {int if_drv_flags; } ;


 int FUNC_0 (struct me_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (struct me_softc*) ;
 scalar_t__ FUNC_2 (struct me_softc*) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(struct me_softc *VAR_6)
{

 FUNC_5(&VAR_4, VAR_2);
 if (FUNC_2(VAR_6)) {
  FUNC_0(VAR_6, VAR_3);
  FUNC_0(VAR_6, VAR_5);
  FUNC_3();

  VAR_6->me_src.s_addr = 0;
  VAR_6->me_dst.s_addr = 0;
  FUNC_1(VAR_6)->if_drv_flags &= ~VAR_0;
  FUNC_4(FUNC_1(VAR_6), VAR_1);
 }
}
