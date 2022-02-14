
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tegra_pcib_softc {int dummy; } ;
struct tegra_pcib_irqsrc {int irq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct tegra_pcib_softc*,int ) ;
 int FUNC_3 (struct tegra_pcib_softc*,int ,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_4(struct tegra_pcib_softc *VAR_1,
     struct tegra_pcib_irqsrc *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = VAR_2->irq / VAR_0;
 VAR_6 = 1 << (VAR_2->irq % VAR_0);

 if (VAR_3 != 0)
  FUNC_3(VAR_1, FUNC_1(VAR_5), VAR_6);
 VAR_4 = FUNC_2(VAR_1, FUNC_0(VAR_5));
 if (VAR_3 != 0)
  VAR_4 |= VAR_6;
 else
  VAR_4 &= ~VAR_6;
 FUNC_3(VAR_1, FUNC_0(VAR_5), VAR_4);
}
