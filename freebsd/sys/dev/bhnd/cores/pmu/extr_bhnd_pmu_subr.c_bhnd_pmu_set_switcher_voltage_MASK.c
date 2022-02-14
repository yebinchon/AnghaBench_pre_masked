
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bhnd_pmu_softc {int dummy; } ;


 int FUNC_0 (struct bhnd_pmu_softc*,int,int,int ) ;

void
FUNC_1(struct bhnd_pmu_softc *VAR_0, uint8_t VAR_1,
    uint8_t VAR_2)
{
 FUNC_0(VAR_0, 0x01, (VAR_1 & 0x1f) << 22, ~0);
 FUNC_0(VAR_0, 0x00, (VAR_2 & 0x1f) << 14, ~0);
}
