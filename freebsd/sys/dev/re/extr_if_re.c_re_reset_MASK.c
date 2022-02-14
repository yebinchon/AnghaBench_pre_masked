
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rl_softc {int rl_flags; int rl_dev; TYPE_1__* rl_hwrev; } ;
struct TYPE_2__ {scalar_t__ rl_rev; } ;


 int FUNC_0 (struct rl_softc*,int) ;
 int FUNC_1 (struct rl_softc*,int,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct rl_softc*) ;
 int VAR_4 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int,int,int ) ;

__attribute__((used)) static void
FUNC_6(struct rl_softc *VAR_5)
{
 int VAR_6;

 FUNC_3(VAR_5);

 FUNC_1(VAR_5, VAR_1, VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  FUNC_2(10);
  if (!(FUNC_0(VAR_5, VAR_1) & VAR_0))
   break;
 }
 if (VAR_6 == VAR_4)
  FUNC_4(VAR_5->rl_dev, "reset never completed!\n");

 if ((VAR_5->rl_flags & VAR_2) != 0)
  FUNC_1(VAR_5, 0x82, 1);
 if (VAR_5->rl_hwrev->rl_rev == VAR_3)
  FUNC_5(VAR_5->rl_dev, 1, 0x0b, 0);
}
