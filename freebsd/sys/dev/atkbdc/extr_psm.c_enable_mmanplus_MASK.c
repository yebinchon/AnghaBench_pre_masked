
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hwid; } ;
struct psm_softc {TYPE_1__ hw; int kbdc; } ;
typedef enum probearg { ____Placeholder_probearg } probearg ;
typedef int KBDC ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int*,int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5(struct psm_softc *VAR_5, enum probearg VAR_6)
{
 KBDC VAR_7 = VAR_5->kbdc;
 int VAR_8[3];







 if (!FUNC_4(VAR_7, 1))
  return (VAR_0);
 if (!FUNC_3(VAR_7, 0x39) || !FUNC_3(VAR_7, 0xdb))
  return (VAR_0);
 if (FUNC_2(VAR_7, VAR_8, 1, 3) < 3)
  return (VAR_0);
 if ((VAR_8[0] & VAR_2) != VAR_1)
  return (VAR_0);
 if ((VAR_8[1] & 0xc3) != 0xc2)
  return (VAR_0);

 if (!FUNC_0(VAR_8))
  return (VAR_0);

 if (FUNC_1(VAR_8) != 0)
  return (VAR_0);

 if (VAR_6 == VAR_3) {
  VAR_5->hw.hwid &= 0x00ff;
  VAR_5->hw.hwid |= VAR_8[2] << 8;
 }







 return (VAR_4);
}
