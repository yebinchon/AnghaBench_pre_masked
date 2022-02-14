
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct thread {int td_intr_nesting_level; int td_intr_frame; } ;
struct jz4780_pic_softc {int pic_dev; } ;
struct intr_irqsrc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 struct intr_irqsrc* FUNC_1 (struct jz4780_pic_softc*,unsigned int) ;
 unsigned int FUNC_2 (struct jz4780_pic_softc*,int ) ;
 struct thread* VAR_3 ;
 int FUNC_3 (int ,char*,unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (struct intr_irqsrc*,int ) ;
 int FUNC_6 (struct jz4780_pic_softc*,unsigned int) ;

__attribute__((used)) static int
FUNC_7(void *VAR_4)
{
 struct jz4780_pic_softc *VAR_5 = VAR_4;
 struct intr_irqsrc *VAR_6;
 struct thread *VAR_7;
 uint32_t VAR_8, VAR_9;

 VAR_7 = VAR_3;

 VAR_7->td_intr_nesting_level--;

 VAR_9 = FUNC_2(VAR_5, VAR_1);
 while ((VAR_8 = FUNC_4(VAR_9)) != 0) {
  VAR_8--;
  VAR_9 &= ~(1u << VAR_8);

  VAR_6 = FUNC_1(VAR_5, VAR_8);
  if (FUNC_5(VAR_6, VAR_3->td_intr_frame) != 0) {
   FUNC_3(VAR_5->pic_dev, "Stray interrupt %u detected\n", VAR_8);
   FUNC_6(VAR_5, VAR_8);
   continue;
  }
 }

 FUNC_0(VAR_8 == 0, ("all interrupts handled"));

 VAR_9 = FUNC_2(VAR_5, VAR_2);
 while ((VAR_8 = FUNC_4(VAR_9)) != 0) {
  VAR_8--;
  VAR_9 &= ~(1u << VAR_8);
  VAR_8 += 32;

  VAR_6 = FUNC_1(VAR_5, VAR_8);
  if (FUNC_5(VAR_6, VAR_3->td_intr_frame) != 0) {
   FUNC_3(VAR_5->pic_dev, "Stray interrupt %u detected\n", VAR_8);
   FUNC_6(VAR_5, VAR_8);
   continue;
  }
 }

 FUNC_0(VAR_8 == 0, ("all interrupts handled"));
 VAR_7->td_intr_nesting_level++;

 return (VAR_0);
}
