
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct rt2860_softc {int nrxchains; int mac_ver; } ;
struct TYPE_3__ {int reg; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct rt2860_softc*,int) ;
 int FUNC_2 (struct rt2860_softc*,int,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct rt2860_softc *VAR_3)
{
 uint8_t VAR_4;
 int VAR_5;


 if (VAR_3->nrxchains > 1) {
  VAR_4 = FUNC_1(VAR_3, 105);
  FUNC_2(VAR_3, 105, VAR_4 | VAR_1);
 }


 VAR_4 = FUNC_1(VAR_3, 4);
 FUNC_2(VAR_3, 4, VAR_4 | VAR_0);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  FUNC_2(VAR_3, VAR_2[VAR_5].reg,
      VAR_2[VAR_5].val);
 }

 if (VAR_3->mac_ver == 0x5392) {
  FUNC_2(VAR_3, 84, 0x9a);
  FUNC_2(VAR_3, 95, 0x9a);
  FUNC_2(VAR_3, 98, 0x12);
  FUNC_2(VAR_3, 106, 0x05);
  FUNC_2(VAR_3, 134, 0xd0);
  FUNC_2(VAR_3, 135, 0xf6);
 }

 VAR_4 = FUNC_1(VAR_3, 152);
 FUNC_2(VAR_3, 152, VAR_4 | 0x80);


 if (VAR_3->mac_ver == 0x5390)
  FUNC_2(VAR_3, 154, 0);
}
