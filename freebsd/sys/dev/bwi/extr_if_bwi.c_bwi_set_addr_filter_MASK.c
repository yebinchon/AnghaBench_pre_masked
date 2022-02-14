
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct bwi_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bwi_softc*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(struct bwi_softc *VAR_4, uint16_t VAR_5,
      const uint8_t *VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_4, VAR_0,
      VAR_1 | VAR_5);

 for (VAR_7 = 0; VAR_7 < (VAR_3 / 2); ++VAR_7) {
  uint16_t VAR_8;

  VAR_8 = (uint16_t)VAR_6[VAR_7 * 2] |
      (((uint16_t)VAR_6[(VAR_7 * 2) + 1]) << 8);
  FUNC_0(VAR_4, VAR_2, VAR_8);
 }
}
