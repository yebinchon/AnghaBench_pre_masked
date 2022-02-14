
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int buttons; int hwid; } ;
struct psm_softc {TYPE_1__ hw; int kbdc; } ;
typedef enum probearg { ____Placeholder_probearg } probearg ;
typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(struct psm_softc *VAR_4, enum probearg VAR_5)
{
 KBDC VAR_6 = VAR_4->kbdc;
 static u_char VAR_7[] = { 200, 100, 80, };
 int VAR_8;
 int VAR_9;


 for (VAR_9 = 0; VAR_9 < FUNC_1(VAR_7); ++VAR_9)
  if (FUNC_2(VAR_6, VAR_7[VAR_9]) != VAR_7[VAR_9])
   return (VAR_0);

 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8 != VAR_2)
  return (VAR_0);

 if (VAR_5 == VAR_1) {
  VAR_4->hw.buttons = 3;
  VAR_4->hw.hwid = VAR_8;
 }

 return (VAR_3);
}
