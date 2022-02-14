
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct run_softc {int mac_ver; int mac_rev; } ;
struct TYPE_3__ {int reg; int val; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct run_softc*,int ,int*) ;
 int FUNC_2 (struct run_softc*,int,int) ;
 int FUNC_3 (struct run_softc*) ;

__attribute__((used)) static int
FUNC_4(struct run_softc *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 uint8_t VAR_6;


 for (VAR_5 = 0; VAR_5 < 20; VAR_5++) {
  if ((VAR_4 = FUNC_1(VAR_2, 0, &VAR_6)) != 0)
   return VAR_4;
  if (VAR_6 != 0 && VAR_6 != 0xff)
   break;
 }
 if (VAR_5 == 20)
  return (VAR_0);


 if (VAR_2->mac_ver >= 0x5390)
  FUNC_3(VAR_2);
 else {
  for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
   FUNC_2(VAR_2, VAR_1[VAR_3].reg,
       VAR_1[VAR_3].val);
  }
 }

 if (VAR_2->mac_ver == 0x3593) {
  FUNC_2(VAR_2, 79, 0x13);
  FUNC_2(VAR_2, 80, 0x05);
  FUNC_2(VAR_2, 81, 0x33);
  FUNC_2(VAR_2, 86, 0x46);
  FUNC_2(VAR_2, 137, 0x0f);
 }


 if (VAR_2->mac_ver == 0x2860 && VAR_2->mac_rev != 0x0101)
  FUNC_2(VAR_2, 84, 0x19);

 if (VAR_2->mac_ver >= 0x3070 && (VAR_2->mac_ver != 0x3593 &&
     VAR_2->mac_ver != 0x5592)) {
  FUNC_2(VAR_2, 79, 0x13);
  FUNC_2(VAR_2, 80, 0x05);
  FUNC_2(VAR_2, 81, 0x33);
 } else if (VAR_2->mac_ver == 0x2860 && VAR_2->mac_rev == 0x0100) {
  FUNC_2(VAR_2, 69, 0x16);
  FUNC_2(VAR_2, 73, 0x12);
 }
 return (0);
}
