
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtwn_softc {int efuse_maplen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtwn_softc*,int ,char*,int,int) ;
 int FUNC_1 (struct rtwn_softc*,int*) ;

__attribute__((used)) static int
FUNC_2(struct rtwn_softc *VAR_2, uint8_t *VAR_3, uint8_t VAR_4,
    uint8_t VAR_5)
{
 uint8_t VAR_6;
 int VAR_7, VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  if (VAR_5 & (1 << VAR_8))
   continue;

  VAR_7 = VAR_4 * 8 + VAR_8 * 2;
  if (VAR_7 + 1 >= VAR_2->efuse_maplen)
   return (VAR_0);

  VAR_9 = FUNC_1(VAR_2, &VAR_6);
  if (VAR_9 != 0)
   return (VAR_9);
  FUNC_0(VAR_2, VAR_1, "rom[0x%03X] == 0x%02X\n",
      VAR_7, VAR_6);
  VAR_3[VAR_7] = VAR_6;

  VAR_9 = FUNC_1(VAR_2, &VAR_6);
  if (VAR_9 != 0)
   return (VAR_9);
  FUNC_0(VAR_2, VAR_1, "rom[0x%03X] == 0x%02X\n",
      VAR_7 + 1, VAR_6);
  VAR_3[VAR_7 + 1] = VAR_6;
 }

 return (0);
}
