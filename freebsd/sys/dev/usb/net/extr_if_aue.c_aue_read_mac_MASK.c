
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct aue_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct aue_softc*,int) ;

__attribute__((used)) static void
FUNC_1(struct aue_softc *VAR_1, uint8_t *VAR_2)
{
 int VAR_3, VAR_4;
 uint16_t VAR_5;

 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_0 / 2; VAR_3++) {
  VAR_5 = FUNC_0(VAR_1, VAR_4 + VAR_3);
  VAR_2[VAR_3 * 2] = (uint8_t)VAR_5;
  VAR_2[VAR_3 * 2 + 1] = (uint8_t)(VAR_5 >> 8);
 }
}
