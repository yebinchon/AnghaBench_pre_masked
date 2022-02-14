
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct rsu_softc {int* rom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int**,int,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_6 ;
 int FUNC_2 (struct rsu_softc*,int) ;
 int FUNC_3 (struct rsu_softc*,int) ;
 int FUNC_4 (struct rsu_softc*,scalar_t__) ;
 int FUNC_5 (struct rsu_softc*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_6(struct rsu_softc *VAR_7)
{
 uint8_t *VAR_8 = VAR_7->rom;
 uint16_t VAR_9 = 0;
 uint32_t VAR_10;
 uint8_t VAR_11, VAR_12;
 int VAR_13;


 VAR_10 = FUNC_4(VAR_7, VAR_3);
 if ((VAR_10 & (VAR_1 | VAR_2)) != VAR_2)
  return (VAR_0);


 VAR_10 = FUNC_4(VAR_7, VAR_4 + 3);
 FUNC_5(VAR_7, VAR_4 + 3, VAR_10 | 0x80);
 FUNC_3(VAR_7, 1);
 FUNC_5(VAR_7, VAR_4 + 3, VAR_10 & ~0x80);


 FUNC_0(&VAR_7->rom, 0xff, sizeof(VAR_7->rom));
 while (VAR_9 < 512) {
  VAR_10 = FUNC_2(VAR_7, VAR_9);
  if (VAR_10 == 0xff)
   break;
  VAR_9++;
  VAR_11 = VAR_10 >> 4;
  VAR_12 = VAR_10 & 0xf;
  for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
   if (VAR_12 & (1 << VAR_13))
    continue;
   VAR_8[VAR_11 * 8 + VAR_13 * 2 + 0] =
       FUNC_2(VAR_7, VAR_9);
   VAR_9++;
   VAR_8[VAR_11 * 8 + VAR_13 * 2 + 1] =
       FUNC_2(VAR_7, VAR_9);
   VAR_9++;
  }
 }
 return (0);
}
