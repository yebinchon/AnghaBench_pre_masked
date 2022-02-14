
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct thread {int td_intr_nesting_level; int td_intr_frame; } ;
struct mtk_gic_softc {int gic_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_gic_softc*,unsigned int) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_2 (struct mtk_gic_softc*,int ) ;
 struct thread* VAR_3 ;
 int FUNC_3 (int ,char*,unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct mtk_gic_softc*,unsigned int) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(void *VAR_4)
{
 struct mtk_gic_softc *VAR_5 = VAR_4;
 struct thread *VAR_6;
 uint32_t VAR_7, VAR_8;

 VAR_6 = VAR_3;

 VAR_6->td_intr_nesting_level--;

 VAR_8 = FUNC_2(VAR_5, VAR_2) & FUNC_2(VAR_5, VAR_1);
 while ((VAR_7 = FUNC_4(VAR_8)) != 0) {
  VAR_7--;
  VAR_8 &= ~(1u << VAR_7);

  if (FUNC_6(FUNC_0(VAR_5, VAR_7),
      VAR_3->td_intr_frame) != 0) {
   FUNC_3(VAR_5->gic_dev,
    "Stray interrupt %u detected\n", VAR_7);
   FUNC_5(VAR_5, VAR_7);
   continue;
  }
 }

 FUNC_1(VAR_7 == 0, ("all interrupts handled"));

 VAR_6->td_intr_nesting_level++;

 return (VAR_0);
}
