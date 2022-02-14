
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct intr_irqsrc {int dummy; } ;
struct al_msix_softc {int irq_min; scalar_t__ base_addr; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct intr_irqsrc*) ;
 scalar_t__ VAR_2 ;
 struct al_msix_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int ,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, device_t VAR_4, struct intr_irqsrc *VAR_5,
    uint64_t *VAR_6, uint32_t *VAR_7)
{
 struct al_msix_softc *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_1(VAR_3);

 VAR_9 = FUNC_0(VAR_3, VAR_5);
 if (VAR_9 == VAR_1)
  return (VAR_0);

 VAR_10 = VAR_8->irq_min + VAR_9;
 *VAR_6 = (uint64_t)VAR_8->base_addr + (uint64_t)((1 << 16) + (VAR_10 << 3));
 *VAR_7 = 0;

 if (VAR_2)
  FUNC_2(VAR_3, "MSI mapping: SPI: %d addr: %jx data: %x\n",
      VAR_10, (uintmax_t)*VAR_6, *VAR_7);
 return (0);
}
