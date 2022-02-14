
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa_portals_softc {int sc_dp_size; int sc_dp_pa; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct dpaa_portals_softc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 struct dpaa_portals_softc* VAR_2 ;

int
FUNC_5(device_t VAR_3)
{
 struct dpaa_portals_softc *VAR_4;

 VAR_4 = VAR_2 = FUNC_2(VAR_3);


 if (FUNC_3(VAR_1, VAR_4->sc_dp_pa, VAR_4->sc_dp_size)) {
  FUNC_4(VAR_3);
  return (VAR_0);
 }

 FUNC_0(VAR_3);

 return (FUNC_1(VAR_3));
}
