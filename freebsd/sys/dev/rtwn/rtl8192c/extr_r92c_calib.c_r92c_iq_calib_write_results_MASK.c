
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct rtwn_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct rtwn_softc*,int ) ;
 int FUNC_4 (struct rtwn_softc*,int ,int,int) ;

__attribute__((used)) static void
FUNC_5(struct rtwn_softc *VAR_3, uint16_t VAR_4[2],
    uint16_t VAR_5[2], int VAR_6)
{
 uint32_t VAR_7, VAR_8, VAR_9;
 long VAR_10, VAR_11;

 if (VAR_4[0] == 0xff || VAR_4[1] == 0xff)
  return;

 VAR_7 = FUNC_3(VAR_3, FUNC_2(VAR_6));
 VAR_8 = ((VAR_7 >> 22) & 0x3ff);
 VAR_9 = VAR_4[0];
 if (VAR_9 & 0x00000200)
  VAR_9 |= 0xfffffc00;
 VAR_7 = (((VAR_9 * VAR_8) >> 8) & 0x3ff);
 FUNC_4(VAR_3, FUNC_2(VAR_6), 0x3ff, VAR_7);
 FUNC_4(VAR_3, VAR_1, 0x80000000,
     ((VAR_9 * VAR_8) & 0x80) << 24);

 VAR_10 = VAR_4[1];
 if (VAR_10 & 0x00000200)
  VAR_10 |= 0xfffffc00;
 VAR_11 = (VAR_10 * VAR_8) >> 8;
 FUNC_4(VAR_3, FUNC_1(VAR_6), 0xf0000000,
     (VAR_11 & 0x3c0) << 22);
 FUNC_4(VAR_3, FUNC_2(VAR_6), 0x003f0000,
     (VAR_11 & 0x3f) << 16);
 FUNC_4(VAR_3, VAR_1, 0x20000000,
     ((VAR_10 * VAR_8) & 0x80) << 22);

 if (VAR_5[0] == 0xff || VAR_5[1] == 0xff)
  return;

 FUNC_4(VAR_3, FUNC_0(VAR_6), 0x3ff,
     VAR_5[0] & 0x3ff);
 FUNC_4(VAR_3, FUNC_0(VAR_6), 0xfc00,
     (VAR_5[1] & 0x3f) << 10);

 if (VAR_6 == 0) {
  FUNC_4(VAR_3, VAR_2, 0xf0000000,
      (VAR_5[1] & 0x3c0) << 22);
 } else {
  FUNC_4(VAR_3, VAR_0, 0xf000,
      (VAR_5[1] & 0x3c0) << 6);
 }
}
