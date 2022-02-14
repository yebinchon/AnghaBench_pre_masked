
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
 int FUNC_0 (struct psm_softc*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct psm_softc *VAR_4, enum probearg VAR_5)
{
 KBDC VAR_6 = VAR_4->kbdc;
 static u_char VAR_7[] = { 200, 100, 80, };
 static u_char VAR_8[] = { 200, 200, 80, };
 int VAR_9;
 int VAR_10;






 FUNC_0(VAR_4, VAR_5);


 for (VAR_10 = 0; VAR_10 < FUNC_2(VAR_8); ++VAR_10)
  if (FUNC_3(VAR_6, VAR_8[VAR_10]) != VAR_8[VAR_10])
   return (VAR_0);

 VAR_9 = FUNC_1(VAR_6);
 if (VAR_9 != VAR_2)
  return (VAR_0);

 if (VAR_5 == VAR_1) {
  VAR_4->hw.buttons = 5;
  VAR_4->hw.hwid = VAR_9;
 }
 for (VAR_10 = 0; VAR_10 < FUNC_2(VAR_7); ++VAR_10)
  if (FUNC_3(VAR_6, VAR_7[VAR_10]) != VAR_7[VAR_10])
   break;
 FUNC_1(VAR_6);

 return (VAR_3);
}
