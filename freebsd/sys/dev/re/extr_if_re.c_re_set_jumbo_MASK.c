
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rl_softc {int rl_dev; TYPE_1__* rl_hwrev; int rl_cfg4; int rl_cfg3; } ;
struct TYPE_2__ {int rl_rev; } ;


 int FUNC_0 (struct rl_softc*,int ) ;
 int FUNC_1 (struct rl_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct rl_softc *VAR_6, int VAR_7)
{

 if (VAR_6->rl_hwrev->rl_rev == VAR_5) {
  FUNC_2(VAR_6->rl_dev, 4096);
  return;
 }

 FUNC_1(VAR_6, VAR_2, VAR_4);
 if (VAR_7 != 0) {
  FUNC_1(VAR_6, VAR_6->rl_cfg3, FUNC_0(VAR_6, VAR_6->rl_cfg3) |
      VAR_0);
  switch (VAR_6->rl_hwrev->rl_rev) {
  case 129:
   break;
  case 128:
   FUNC_1(VAR_6, VAR_6->rl_cfg4,
       FUNC_0(VAR_6, VAR_6->rl_cfg4) | 0x01);
   break;
  default:
   FUNC_1(VAR_6, VAR_6->rl_cfg4,
       FUNC_0(VAR_6, VAR_6->rl_cfg4) | VAR_1);
  }
 } else {
  FUNC_1(VAR_6, VAR_6->rl_cfg3, FUNC_0(VAR_6, VAR_6->rl_cfg3) &
      ~VAR_0);
  switch (VAR_6->rl_hwrev->rl_rev) {
  case 129:
   break;
  case 128:
   FUNC_1(VAR_6, VAR_6->rl_cfg4,
       FUNC_0(VAR_6, VAR_6->rl_cfg4) & ~0x01);
   break;
  default:
   FUNC_1(VAR_6, VAR_6->rl_cfg4,
       FUNC_0(VAR_6, VAR_6->rl_cfg4) & ~VAR_1);
  }
 }
 FUNC_1(VAR_6, VAR_2, VAR_3);

 switch (VAR_6->rl_hwrev->rl_rev) {
 case 129:
  FUNC_2(VAR_6->rl_dev, 4096);
  break;
 default:
  if (VAR_7 != 0)
   FUNC_2(VAR_6->rl_dev, 512);
  else
   FUNC_2(VAR_6->rl_dev, 4096);
 }
}
