
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_spi_softc {scalar_t__ sc_mem_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mtk_spi_softc*,int ,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 struct mtk_spi_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4)
{
 struct mtk_spi_softc *VAR_5 = FUNC_2(VAR_4);

 FUNC_0(VAR_5, VAR_2, VAR_1 | VAR_0);

 if (VAR_5->sc_mem_res)
  FUNC_1(VAR_4, VAR_3, 0, VAR_5->sc_mem_res);

 return (0);
}
