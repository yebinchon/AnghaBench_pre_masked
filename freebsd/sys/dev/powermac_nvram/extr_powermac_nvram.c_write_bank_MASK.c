
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct powermac_nvram_softc {scalar_t__ sc_type; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 struct powermac_nvram_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int *,int *) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, uint8_t *VAR_2, uint8_t *VAR_3)
{
 struct powermac_nvram_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4->sc_type == VAR_0)
  return (FUNC_1(VAR_1, VAR_2, VAR_3));
 else
  return (FUNC_2(VAR_1, VAR_2, VAR_3));
}
