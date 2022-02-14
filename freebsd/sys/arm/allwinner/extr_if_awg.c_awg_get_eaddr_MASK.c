
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_char ;
struct awg_softc {int dummy; } ;
typedef int rootkey ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct awg_softc*,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int*,int*) ;
 struct awg_softc* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_1, uint8_t *VAR_2)
{
 struct awg_softc *VAR_3;
 uint32_t VAR_4, VAR_5, VAR_6;
 u_char VAR_7[16];
 uint32_t VAR_8;

 VAR_3 = FUNC_5(VAR_1);

 VAR_5 = FUNC_2(VAR_3, FUNC_0(0)) & 0xffff;
 VAR_4 = FUNC_2(VAR_3, FUNC_1(0));

 VAR_8 = sizeof(VAR_7);
 if (VAR_4 == 0xffffffff && VAR_5 == 0xffff) {

  if (FUNC_4(VAR_0, VAR_7,
      &VAR_8) == 0 &&
      (VAR_7[3] | VAR_7[12] | VAR_7[13] | VAR_7[14] |
       VAR_7[15]) != 0) {

   VAR_4 = (VAR_7[13] << 24) | (VAR_7[12] << 16) |
    (VAR_7[3] << 8) | 0x02;
   VAR_5 = (VAR_7[15] << 8) | VAR_7[14];
  } else {

   VAR_6 = FUNC_3();
   VAR_4 = 0x00f2 | (VAR_6 & 0xffff0000);
   VAR_5 = VAR_6 & 0xffff;
  }
 }

 VAR_2[0] = VAR_4 & 0xff;
 VAR_2[1] = (VAR_4 >> 8) & 0xff;
 VAR_2[2] = (VAR_4 >> 16) & 0xff;
 VAR_2[3] = (VAR_4 >> 24) & 0xff;
 VAR_2[4] = VAR_5 & 0xff;
 VAR_2[5] = (VAR_5 >> 8) & 0xff;
}
