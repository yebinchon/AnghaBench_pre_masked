
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar71xx_spi_softc {scalar_t__ sc_mem_res; int sc_reg_ctrl; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar71xx_spi_softc*) ;
 int FUNC_1 (struct ar71xx_spi_softc*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 struct ar71xx_spi_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 struct ar71xx_spi_softc *VAR_4 = FUNC_3(VAR_3);





 FUNC_0(VAR_4);





 FUNC_1(VAR_4, VAR_0, VAR_4->sc_reg_ctrl);
 FUNC_0(VAR_4);





 FUNC_1(VAR_4, VAR_1, 0);
 FUNC_0(VAR_4);

 if (VAR_4->sc_mem_res)
  FUNC_2(VAR_3, VAR_2, 0, VAR_4->sc_mem_res);

 return (0);
}
