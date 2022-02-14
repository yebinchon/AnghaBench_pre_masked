
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ capPassthrough; } ;
struct TYPE_3__ {int hwid; int buttons; } ;
struct psm_softc {int tphw; TYPE_2__ synhw; TYPE_1__ hw; int kbdc; } ;
typedef enum probearg { ____Placeholder_probearg } probearg ;
typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (struct psm_softc*) ;
 int FUNC_3 (struct psm_softc*) ;
 int FUNC_4 (struct psm_softc*) ;
 int VAR_4 ;
 int FUNC_5 (struct psm_softc*) ;

__attribute__((used)) static int
FUNC_6(struct psm_softc *VAR_5, enum probearg VAR_6)
{
 KBDC VAR_7 = VAR_5->kbdc;
 int VAR_8;
 if (VAR_5->synhw.capPassthrough)
  FUNC_4(VAR_5);

 if (FUNC_1(VAR_7, 0xe1) != VAR_2 ||
     FUNC_0(VAR_7) != 0x01)
  goto no_trackpoint;
 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8 < 0x01)
  goto no_trackpoint;
 if (VAR_6 == VAR_1)
  VAR_5->tphw = VAR_8;
 if (!VAR_4)
  goto no_trackpoint;

 if (VAR_5->synhw.capPassthrough)
  FUNC_3(VAR_5);

 if (VAR_6 == VAR_1) {
  FUNC_5(VAR_5);




  if (!VAR_5->synhw.capPassthrough) {
   VAR_5->hw.hwid = VAR_8;
   VAR_5->hw.buttons = 3;
  }
 }

 FUNC_2(VAR_5);

 return (VAR_3);

no_trackpoint:
 if (VAR_5->synhw.capPassthrough)
  FUNC_3(VAR_5);

 return (VAR_0);
}
