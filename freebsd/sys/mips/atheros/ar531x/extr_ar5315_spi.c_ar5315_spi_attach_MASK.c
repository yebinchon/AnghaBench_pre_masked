
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar5315_spi_softc {int sc_mem_res; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 struct ar5315_spi_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 struct ar5315_spi_softc *VAR_4 = FUNC_4(VAR_3);
 int VAR_5;

 VAR_4->sc_dev = VAR_3;
        VAR_5 = 0;
 VAR_4->sc_mem_res = FUNC_1(VAR_3, VAR_2, &VAR_5,
     VAR_1);
 if (!VAR_4->sc_mem_res) {
  FUNC_5(VAR_3, "Could not map memory\n");
  return (VAR_0);
 }

 FUNC_3(VAR_3, "spibus", -1);
 FUNC_0(VAR_3);

 return (FUNC_2(VAR_3));
}
