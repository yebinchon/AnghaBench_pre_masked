
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct arm_gic_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct arm_gic_softc*,int ) ;

__attribute__((used)) static uint8_t
FUNC_2(struct arm_gic_softc *VAR_0)
{
 uint32_t VAR_1;
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  VAR_1 = FUNC_1(VAR_0, FUNC_0(4 * VAR_2));
  if (VAR_1 != 0)
   break;
 }

 if (VAR_1 == 0)
  return (1);


 VAR_1 |= VAR_1 >> 16;
 VAR_1 |= VAR_1 >> 8;

 return (VAR_1);
}
