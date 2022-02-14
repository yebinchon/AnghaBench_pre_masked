
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct bxe_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bxe_softc*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct bxe_softc*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct bxe_softc *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 if (VAR_4 == VAR_2)
  return;
 if (VAR_4 >= VAR_0) {
  FUNC_1(VAR_3, VAR_4 - VAR_0, VAR_5);
 } else {
  uint8_t VAR_6 = (VAR_4 - VAR_1) & 0x3;
  uint8_t VAR_7 = (VAR_4 - VAR_1) >> 2;
  FUNC_0(VAR_3, VAR_6, (uint8_t)VAR_5, VAR_7);
 }
}
