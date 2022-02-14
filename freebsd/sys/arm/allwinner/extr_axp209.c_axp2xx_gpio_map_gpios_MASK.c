
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct axp2xx_softc {scalar_t__ npins; } ;
typedef int phandle_t ;
typedef scalar_t__ pcell_t ;
typedef int device_t ;


 int VAR_0 ;
 struct axp2xx_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, phandle_t VAR_2, phandle_t VAR_3,
    int VAR_4, pcell_t *VAR_5, uint32_t *VAR_6, uint32_t *VAR_7)
{
 struct axp2xx_softc *VAR_8;

 VAR_8 = FUNC_0(VAR_1);

 if (VAR_5[0] >= VAR_8->npins)
  return (VAR_0);

 *VAR_6 = VAR_5[0];
 *VAR_7 = VAR_5[1];

 return (0);
}
