
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef size_t u_int ;
struct run_softc {int mac_ver; int mac_rev; int rf24_20mhz; int rf24_40mhz; } ;
struct TYPE_5__ {int reg; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (struct run_softc*) ;
 int FUNC_2 (struct run_softc*,int) ;
 int FUNC_3 (struct run_softc*,int ,int*) ;
 int FUNC_4 (struct run_softc*,int,int*) ;
 int FUNC_5 (struct run_softc*,int,int) ;
 int FUNC_6 (struct run_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct run_softc *VAR_5)
{
 uint32_t VAR_6;
 uint8_t VAR_7;
 u_int VAR_8;


 if (VAR_5->mac_ver == 0x5390) {
  FUNC_4(VAR_5, 2, &VAR_7);
  FUNC_5(VAR_5, 2, VAR_7 | VAR_1);
  FUNC_2(VAR_5, 10);
  FUNC_5(VAR_5, 2, VAR_7 & ~VAR_1);
 } else {
  FUNC_5(VAR_5, 2, VAR_1);
  FUNC_2(VAR_5, 10);
 }


 if (VAR_5->mac_ver == 0x5592) {
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
   FUNC_5(VAR_5, VAR_4[VAR_8].reg,
       VAR_4[VAR_8].val);
  }

  FUNC_1(VAR_5);
 } else if (VAR_5->mac_ver == 0x5392) {
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++) {
   FUNC_5(VAR_5, VAR_3[VAR_8].reg,
       VAR_3[VAR_8].val);
  }
  if (VAR_5->mac_rev >= 0x0223) {
   FUNC_5(VAR_5, 23, 0x0f);
   FUNC_5(VAR_5, 24, 0x3e);
   FUNC_5(VAR_5, 51, 0x32);
   FUNC_5(VAR_5, 53, 0x22);
   FUNC_5(VAR_5, 56, 0xc1);
   FUNC_5(VAR_5, 59, 0x0f);
  }
 } else {
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++) {
   FUNC_5(VAR_5, VAR_2[VAR_8].reg,
       VAR_2[VAR_8].val);
  }
  if (VAR_5->mac_rev >= 0x0502) {
   FUNC_5(VAR_5, 6, 0xe0);
   FUNC_5(VAR_5, 25, 0x80);
   FUNC_5(VAR_5, 46, 0x73);
   FUNC_5(VAR_5, 53, 0x00);
   FUNC_5(VAR_5, 56, 0x42);
   FUNC_5(VAR_5, 61, 0xd1);
  }
 }

 VAR_5->rf24_20mhz = 0x1f;
 VAR_5->rf24_40mhz = (VAR_5->mac_ver == 0x5592) ? 0 : 0x2f;

 if (VAR_5->mac_rev < 0x0211)
  FUNC_5(VAR_5, 27, 0x3);

 FUNC_3(VAR_5, VAR_0, &VAR_6);
 FUNC_6(VAR_5, VAR_0, VAR_6 | 1);
}
