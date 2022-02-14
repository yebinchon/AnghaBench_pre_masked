
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chipc_spi_softc {int sc_flash_res; int sc_flash_rid; int sc_res; int sc_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct chipc_spi_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct chipc_spi_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1);

 if ((VAR_3 = FUNC_0(VAR_1)))
  return (VAR_3);

 FUNC_1(VAR_1, VAR_0, VAR_2->sc_rid, VAR_2->sc_res);
 FUNC_1(VAR_1, VAR_0, VAR_2->sc_flash_rid,
     VAR_2->sc_flash_res);
 return (0);
}
