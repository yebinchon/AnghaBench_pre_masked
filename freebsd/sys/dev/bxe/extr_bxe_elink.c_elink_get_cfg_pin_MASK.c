
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
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct bxe_softc*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct bxe_softc*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static uint32_t FUNC_2(struct bxe_softc *VAR_5, uint32_t VAR_6, uint32_t *VAR_7)
{
 if (VAR_6 == VAR_4)
  return VAR_0;
 if (VAR_6 >= VAR_2) {
  FUNC_1(VAR_5, VAR_6 - VAR_2, VAR_7);
 } else {
  uint8_t VAR_8 = (VAR_6 - VAR_3) & 0x3;
  uint8_t VAR_9 = (VAR_6 - VAR_3) >> 2;
  *VAR_7 = FUNC_0(VAR_5, VAR_8, VAR_9);
 }
 return VAR_1;

}
