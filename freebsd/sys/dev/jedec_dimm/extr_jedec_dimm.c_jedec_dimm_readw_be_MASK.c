
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct jedec_dimm_softc {int tsod_addr; int smbus; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct jedec_dimm_softc *VAR_0, uint8_t VAR_1, uint16_t *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->smbus, VAR_0->tsod_addr, VAR_1, VAR_2);
 if (VAR_3 != 0) {
  goto out;
 }
 *VAR_2 = FUNC_0(*VAR_2);

out:
 return (VAR_3);
}
