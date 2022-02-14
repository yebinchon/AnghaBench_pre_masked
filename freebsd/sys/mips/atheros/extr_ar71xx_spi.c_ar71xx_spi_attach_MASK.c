
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar71xx_spi_softc {int sc_reg_ctrl; int sc_mem_res; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ar71xx_spi_softc*) ;
 int VAR_5 ;
 int FUNC_1 (struct ar71xx_spi_softc*,int ) ;
 int FUNC_2 (struct ar71xx_spi_softc*,int ,int) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 struct ar71xx_spi_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_7)
{
 struct ar71xx_spi_softc *VAR_8 = FUNC_6(VAR_7);
 int VAR_9;

 VAR_8->sc_dev = VAR_7;
        VAR_9 = 0;
 VAR_8->sc_mem_res = FUNC_3(VAR_7, VAR_6, &VAR_9,
     VAR_4);
 if (!VAR_8->sc_mem_res) {
  FUNC_7(VAR_7, "Could not map memory\n");
  return (VAR_3);
 }

 FUNC_2(VAR_8, VAR_1, 1);


 FUNC_0(VAR_8);

 VAR_8->sc_reg_ctrl = FUNC_1(VAR_8, VAR_0);




 FUNC_2(VAR_8, VAR_0, 0x43);





 FUNC_0(VAR_8);
 FUNC_2(VAR_8, VAR_2, VAR_5);




 FUNC_0(VAR_8);

 FUNC_5(VAR_7, "spibus", -1);
 return (FUNC_4(VAR_7));
}
