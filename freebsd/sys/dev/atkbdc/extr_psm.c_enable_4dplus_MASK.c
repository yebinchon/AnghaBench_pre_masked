
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buttons; int hwid; } ;
struct psm_softc {TYPE_1__ hw; int kbdc; } ;
typedef enum probearg { ____Placeholder_probearg } probearg ;
typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct psm_softc *VAR_3, enum probearg VAR_4)
{
 KBDC VAR_5 = VAR_3->kbdc;
 int VAR_6;
 VAR_6 = FUNC_0(VAR_5);
 switch (VAR_6) {
 case 129:
  break;
 case 128:
  break;
 default:
  return (VAR_0);
 }

 if (VAR_4 == VAR_1) {
  VAR_3->hw.buttons = (VAR_6 == 129) ? 4 : 3;
  VAR_3->hw.hwid = VAR_6;
 }

 return (VAR_2);
}
