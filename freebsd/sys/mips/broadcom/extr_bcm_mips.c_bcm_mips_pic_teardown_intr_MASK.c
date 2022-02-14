
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {int dummy; } ;
struct bcm_mips_softc {int dummy; } ;
struct bcm_mips_irqsrc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct bcm_mips_softc*) ;
 int FUNC_1 (struct bcm_mips_softc*) ;
 int FUNC_2 (struct bcm_mips_softc*,struct bcm_mips_irqsrc*,struct resource*) ;
 struct bcm_mips_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, struct intr_irqsrc *VAR_1,
    struct resource *VAR_2, struct intr_map_data *VAR_3)
{
 struct bcm_mips_softc *VAR_4;
 struct bcm_mips_irqsrc *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(VAR_0);
 VAR_5 = (struct bcm_mips_irqsrc *)VAR_1;


 FUNC_0(VAR_4);
 VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_2);
 FUNC_1(VAR_4);

 return (VAR_6);
}
