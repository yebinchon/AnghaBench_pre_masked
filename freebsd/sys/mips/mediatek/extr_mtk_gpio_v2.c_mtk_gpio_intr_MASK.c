
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mtk_gpio_softc {int dev; } ;
struct TYPE_2__ {int td_intr_frame; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_gpio_softc*) ;
 int FUNC_1 (struct mtk_gpio_softc*,int ) ;
 int FUNC_2 (struct mtk_gpio_softc*,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(void *VAR_2)
{
 struct mtk_gpio_softc *VAR_3;
 uint32_t VAR_4, VAR_5;

 VAR_3 = VAR_2;
 VAR_5 = FUNC_1(VAR_3, FUNC_0(VAR_3));

 for (VAR_4 = 0; VAR_5 != 0; VAR_4++, VAR_5 >>= 1) {
  if ((VAR_5 & 0x1) == 0)
   continue;
  if (FUNC_4(FUNC_2(VAR_3, VAR_4),
      VAR_1->td_intr_frame) != 0) {
   FUNC_3(VAR_3->dev, "spurious interrupt %d\n", VAR_4);
  }
 }

 return (VAR_0);
}
