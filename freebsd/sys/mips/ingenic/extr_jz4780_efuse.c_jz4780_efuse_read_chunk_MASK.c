
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct jz4780_efuse_softc {int dummy; } ;


 int FUNC_0 (struct jz4780_efuse_softc*,scalar_t__) ;
 int FUNC_1 (struct jz4780_efuse_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int*,int*,int) ;

__attribute__((used)) static void
FUNC_4(struct jz4780_efuse_softc *VAR_9, int VAR_10, uint8_t *VAR_11, int VAR_12)
{
 uint32_t VAR_13;
 int VAR_14, VAR_15;


 FUNC_1(VAR_9, VAR_0, VAR_6 |
     (VAR_10 < VAR_4 ? 0: VAR_3) |
     (VAR_10 << VAR_2) |
     ((VAR_12 - 1) << VAR_7));

 while ((FUNC_0(VAR_9, VAR_8) & VAR_5) == 0)
  FUNC_2(1000);


 VAR_15 = VAR_12 & ~3;

 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14 += 4) {
  VAR_13 = FUNC_0(VAR_9, VAR_1 + VAR_14);
  FUNC_3(VAR_11, &VAR_13, 4);
  VAR_11 += 4;
 }


 if (VAR_14 < VAR_12) {
  VAR_13 = FUNC_0(VAR_9, VAR_1 + VAR_14);
  for ( ; VAR_14 < VAR_12; VAR_14++) {
   VAR_11[VAR_14] = VAR_13 & 0xff;
   VAR_13 >>= 8;
  }
 }
}
