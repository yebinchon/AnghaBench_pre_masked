
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mv_ap806_sei_softc {int dummy; } ;
struct mv_ap806_sei_irqsrc {int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mv_ap806_sei_softc*) ;
 int FUNC_3 (struct mv_ap806_sei_softc*) ;
 scalar_t__ FUNC_4 (struct mv_ap806_sei_softc*,int ) ;
 int FUNC_5 (struct mv_ap806_sei_softc*,int ,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_6(struct mv_ap806_sei_softc *VAR_0,
     struct mv_ap806_sei_irqsrc *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1->irq);
 FUNC_2(VAR_0);
 VAR_3 = FUNC_4(VAR_0, FUNC_0(VAR_1->irq));
 if (VAR_2 != 0)
  VAR_3 |= 1 << VAR_4;
 else
  VAR_3 &= ~(1 << VAR_4);
 FUNC_5(VAR_0, FUNC_0(VAR_1->irq), VAR_3);
 FUNC_3(VAR_0);
}
