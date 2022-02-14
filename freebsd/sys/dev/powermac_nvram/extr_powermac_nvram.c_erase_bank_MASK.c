
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct powermac_nvram_softc {scalar_t__ sc_type; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 struct powermac_nvram_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, uint8_t *VAR_2)
{
 struct powermac_nvram_softc *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3->sc_type == VAR_0)
  return (FUNC_1(VAR_1, VAR_2));
 else
  return (FUNC_2(VAR_1, VAR_2));
}
