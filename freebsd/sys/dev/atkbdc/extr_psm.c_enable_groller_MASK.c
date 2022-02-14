
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buttons; } ;
struct psm_softc {TYPE_1__ hw; int kbdc; } ;
typedef enum probearg { ____Placeholder_probearg } probearg ;
typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int*) ;

__attribute__((used)) static int
FUNC_1(struct psm_softc *VAR_4, enum probearg VAR_5)
{
 KBDC VAR_6 = VAR_4->kbdc;
 int VAR_7[3];
 if (!FUNC_0(VAR_6, VAR_2, 1, VAR_7))
  return (VAR_0);
 if ((VAR_7[1] != '3') || (VAR_7[2] != 'D'))
  return (VAR_0);

 if (VAR_5 == VAR_1)
  VAR_4->hw.buttons = 4;
 return (VAR_3);
}
