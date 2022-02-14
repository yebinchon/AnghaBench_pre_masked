
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct versatile_sic_softc {int dev; TYPE_1__* isrcs; } ;
struct intr_irqsrc {int dummy; } ;
struct TYPE_4__ {int td_intr_frame; } ;
struct TYPE_3__ {struct intr_irqsrc isrc; } ;


 int VAR_0 ;
 int FUNC_0 (struct versatile_sic_softc*) ;
 int FUNC_1 (struct versatile_sic_softc*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct versatile_sic_softc*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (struct intr_irqsrc*,int ) ;
 int FUNC_5 (int ,struct intr_irqsrc*) ;
 int FUNC_6 (int ,struct intr_irqsrc*) ;

__attribute__((used)) static int
FUNC_7(void *VAR_3)
{
 struct versatile_sic_softc *VAR_4;
 struct intr_irqsrc *VAR_5;
 uint32_t VAR_6, VAR_7;

 VAR_4 = VAR_3;
 FUNC_0(VAR_4);
 VAR_7 = FUNC_1(VAR_4, VAR_1);
 FUNC_2(VAR_4);
 for (VAR_6 = 0; VAR_7 != 0; VAR_6++, VAR_7 >>= 1) {
  if ((VAR_7 & 0x1) == 0)
   continue;
  VAR_5 = &VAR_4->isrcs[VAR_6].isrc;
  if (FUNC_4(VAR_5, VAR_2->td_intr_frame) != 0) {
   FUNC_5(VAR_4->dev, VAR_5);
   FUNC_6(VAR_4->dev, VAR_5);
   FUNC_3(VAR_4->dev, "Stray irq %u disabled\n", VAR_6);
  }
 }

 return (VAR_0);
}
