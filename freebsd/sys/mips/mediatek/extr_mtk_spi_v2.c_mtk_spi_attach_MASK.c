
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mtk_spi_softc {int sc_mem_res; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mtk_spi_softc*,int ) ;
 int FUNC_1 (struct mtk_spi_softc*,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 struct mtk_spi_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (struct mtk_spi_softc*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_5)
{
 struct mtk_spi_softc *VAR_6 = FUNC_6(VAR_5);
 uint32_t VAR_7;
 int VAR_8;

 VAR_6->sc_dev = VAR_5;
        VAR_8 = 0;
 VAR_6->sc_mem_res = FUNC_2(VAR_5, VAR_4, &VAR_8,
     VAR_3);
 if (!VAR_6->sc_mem_res) {
  FUNC_7(VAR_5, "Could not map memory\n");
  return (VAR_1);
 }

 if (FUNC_8(VAR_6)) {
  FUNC_4(VAR_5, VAR_4, 0, VAR_6->sc_mem_res);
  return (VAR_0);
 }

 VAR_7 = FUNC_0(VAR_6, VAR_2);
 VAR_7 &= ~(0xfff << 16);
 VAR_7 |= 13 << 16;
 VAR_7 |= 7 << 29;
 VAR_7 |= 1 << 2;
 FUNC_1(VAR_6, VAR_2, VAR_7);





 FUNC_5(VAR_5, "spibus", 0);
 return (FUNC_3(VAR_5));
}
