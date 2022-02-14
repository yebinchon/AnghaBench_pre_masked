
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct bwi_softc {int dummy; } ;


 int FUNC_0 (struct bwi_softc*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct bwi_softc *VAR_0, uint16_t VAR_1, uint8_t *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 3; ++VAR_3) {
  *((uint16_t *)VAR_2 + VAR_3) =
   FUNC_1(FUNC_0(VAR_0, VAR_1 + 2 * VAR_3));
 }
}
