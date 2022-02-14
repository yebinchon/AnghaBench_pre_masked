
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct rtwn_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rtwn_softc*,int ) ;
 int FUNC_4 (struct rtwn_softc*,int ,int,int) ;

__attribute__((used)) static void
FUNC_5(struct rtwn_softc *VAR_2, uint16_t VAR_3[2],
    uint16_t VAR_4[2])
{
 uint32_t VAR_5, VAR_6, VAR_7;
 long VAR_8, VAR_9;

 if (VAR_3[0] == 0xff || VAR_3[1] == 0xff)
  return;

 VAR_5 = FUNC_3(VAR_2, FUNC_2(0));
 VAR_6 = ((VAR_5 >> 22) & 0x3ff);
 VAR_7 = VAR_3[0];
 if (VAR_7 & 0x00000200)
  VAR_7 |= 0xfffffc00;
 VAR_5 = (((VAR_7 * VAR_6) >> 8) & 0x3ff);
 FUNC_4(VAR_2, FUNC_2(0), 0x3ff, VAR_5);
 FUNC_4(VAR_2, VAR_0, 0x80000000,
     ((VAR_7 * VAR_6) & 0x80) << 24);

 VAR_8 = VAR_3[1];
 if (VAR_8 & 0x00000200)
  VAR_8 |= 0xfffffc00;
 VAR_9 = (VAR_8 * VAR_6) >> 8;
 FUNC_4(VAR_2, FUNC_1(0), 0xf0000000,
     (VAR_9 & 0x3c0) << 22);
 FUNC_4(VAR_2, FUNC_2(0), 0x003f0000,
     (VAR_9 & 0x3f) << 16);
 FUNC_4(VAR_2, VAR_0, 0x20000000,
     ((VAR_8 * VAR_6) & 0x80) << 22);

 if (VAR_4[0] == 0xff || VAR_4[1] == 0xff)
  return;

 FUNC_4(VAR_2, FUNC_0(0), 0x3ff,
     VAR_4[0] & 0x3ff);
 FUNC_4(VAR_2, FUNC_0(0), 0xfc00,
     (VAR_4[1] & 0x3f) << 10);
 FUNC_4(VAR_2, VAR_1, 0xf0000000,
     (VAR_4[1] & 0x3c0) << 22);
}
