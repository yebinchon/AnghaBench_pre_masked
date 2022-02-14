
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {scalar_t__ isrc_handlers; int isrc_flags; int isrc_cpu; } ;
struct bcm_lintc_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct bcm_lintc_softc*) ;
 int FUNC_1 (struct bcm_lintc_softc*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 struct bcm_lintc_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, struct intr_irqsrc *VAR_3,
    struct resource *VAR_4, struct intr_map_data *VAR_5)
{
 struct bcm_lintc_softc *VAR_6;

 if (VAR_3->isrc_handlers == 0 && VAR_3->isrc_flags & VAR_0) {
  VAR_6 = FUNC_4(VAR_2);
  FUNC_0(VAR_6);
  FUNC_2(FUNC_3(VAR_1), &VAR_3->isrc_cpu);
  FUNC_1(VAR_6);
 }
 return (0);
}
