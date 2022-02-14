
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_spi_softc {int nonflash; TYPE_1__* gpio_cs; int sc_mem_res; int sc_dev; } ;
typedef int device_t ;
struct TYPE_2__ {int pin; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,char*,int) ;
 struct mtk_spi_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (struct mtk_spi_softc*) ;
 scalar_t__ FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*,TYPE_1__**) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_6)
{
 struct mtk_spi_softc *VAR_7 = FUNC_6(VAR_6);
 int VAR_8;

 VAR_7->sc_dev = VAR_6;
        VAR_8 = 0;
 VAR_7->sc_mem_res = FUNC_2(VAR_6, VAR_5, &VAR_8,
     VAR_4 | VAR_3);
 if (!VAR_7->sc_mem_res) {
  FUNC_7(VAR_6, "Could not map memory\n");
  return (VAR_1);
 }

 if (FUNC_8(VAR_7)) {
  FUNC_4(VAR_6, VAR_5, 0, VAR_7->sc_mem_res);
  return (VAR_0);
 }

 if (FUNC_9(VAR_6, "non-flash"))
  VAR_7->nonflash = 1;
 else
  VAR_7->nonflash = 0;

 FUNC_10(VAR_6, "cs-gpios", &VAR_7->gpio_cs);

 if (VAR_7->gpio_cs != ((void*)0)) {
  FUNC_1(VAR_7->gpio_cs->dev, VAR_7->gpio_cs->pin,
      VAR_2);
  FUNC_0(VAR_7->gpio_cs->dev, VAR_7->gpio_cs->pin, 1);
 }

 FUNC_5(VAR_6, "spibus", -1);
 return (FUNC_3(VAR_6));
}
