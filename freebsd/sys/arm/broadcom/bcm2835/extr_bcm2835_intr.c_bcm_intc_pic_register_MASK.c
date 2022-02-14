
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct bcm_intc_softc {int sc_dev; struct bcm_intc_irqsrc* intc_isrcs; } ;
struct bcm_intc_irqsrc {size_t bii_irq; int bii_mask; int bii_isrc; int bii_enable_reg; int bii_disable_reg; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (size_t) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ,char*,char const*,size_t) ;
 int * FUNC_7 (int ,intptr_t) ;

__attribute__((used)) static int
FUNC_8(struct bcm_intc_softc *VAR_8, intptr_t VAR_9)
{
 struct bcm_intc_irqsrc *VAR_10;
 int VAR_11;
 uint32_t VAR_12;
 const char *VAR_13;

 VAR_13 = FUNC_5(VAR_8->sc_dev);
 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  VAR_10 = &VAR_8->intc_isrcs[VAR_12];
  VAR_10->bii_irq = VAR_12;
  if (FUNC_4(VAR_12)) {
   VAR_10->bii_disable_reg = VAR_4;
   VAR_10->bii_enable_reg = VAR_7;
   VAR_10->bii_mask = 1 << VAR_12;
  } else if (FUNC_2(VAR_12)) {
   VAR_10->bii_disable_reg = VAR_2;
   VAR_10->bii_enable_reg = VAR_5;
   VAR_10->bii_mask = 1 << FUNC_0(VAR_12);
  } else if (FUNC_3(VAR_12)) {
   VAR_10->bii_disable_reg = VAR_3;
   VAR_10->bii_enable_reg = VAR_6;
   VAR_10->bii_mask = 1 << FUNC_1(VAR_12);
  } else
   return (VAR_1);

  VAR_11 = FUNC_6(&VAR_10->bii_isrc, VAR_8->sc_dev, 0,
      "%s,%u", VAR_13, VAR_12);
  if (VAR_11 != 0)
   return (VAR_11);
 }
 if (FUNC_7(VAR_8->sc_dev, VAR_9) == ((void*)0))
  return (VAR_1);

 return (0);
}
