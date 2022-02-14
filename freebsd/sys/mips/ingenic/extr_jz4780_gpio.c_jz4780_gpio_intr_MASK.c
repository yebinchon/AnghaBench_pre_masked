
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct jz4780_gpio_softc {TYPE_1__* pins; int dev; } ;
struct TYPE_4__ {int td_intr_frame; } ;
struct TYPE_3__ {int pin_irqsrc; } ;


 int FUNC_0 (struct jz4780_gpio_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_3)
{
 struct jz4780_gpio_softc *VAR_4;
 uint32_t VAR_5, VAR_6;

 VAR_4 = VAR_3;
 VAR_6 = FUNC_0(VAR_4, VAR_1);

 for (VAR_5 = 0; VAR_6 != 0; VAR_5++, VAR_6 >>= 1) {
  if ((VAR_6 & 0x1) == 0)
   continue;
  if (FUNC_3(&VAR_4->pins[VAR_5].pin_irqsrc,
      VAR_2->td_intr_frame) != 0) {
   FUNC_2(VAR_4->dev, "spurious interrupt %d\n", VAR_5);
   FUNC_1(VAR_4->dev, &VAR_4->pins[VAR_5].pin_irqsrc);
  }
 }

 return (VAR_0);
}
