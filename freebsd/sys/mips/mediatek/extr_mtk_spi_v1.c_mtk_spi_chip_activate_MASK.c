
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_spi_softc {TYPE_1__* gpio_cs; } ;
struct TYPE_2__ {int pin; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mtk_spi_softc*,int ,int) ;
 int FUNC_2 (struct mtk_spi_softc*) ;

__attribute__((used)) static void
FUNC_3(struct mtk_spi_softc *VAR_3)
{
        FUNC_2(VAR_3);



 if (VAR_3->gpio_cs != ((void*)0)) {
  FUNC_0(VAR_3->gpio_cs->dev, VAR_3->gpio_cs->pin, 0);
  FUNC_1(VAR_3, VAR_2, VAR_1);
 } else {
  FUNC_1(VAR_3, VAR_2, VAR_0 | VAR_1);
 }
}
