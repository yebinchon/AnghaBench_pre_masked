
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t vmem_addr_t ;
typedef size_t u_int ;
struct TYPE_2__ {int type; } ;
struct intr_map_data_fdt {int ncells; scalar_t__* cells; scalar_t__ iparent; TYPE_1__ hdr; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {int dummy; } ;
struct al_msix_softc {int gic_dev; scalar_t__ irq_min; int msi_mtx; struct intr_irqsrc** isrcs; int irq_alloc; } ;
typedef int pcell_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,struct intr_map_data*,struct intr_irqsrc**) ;
 scalar_t__ VAR_10 ;
 struct al_msix_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,scalar_t__,int) ;
 int FUNC_3 (struct intr_map_data_fdt*,int ) ;
 struct intr_map_data_fdt* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,int,int,size_t*) ;
 int FUNC_9 (int ,size_t,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_11, device_t VAR_12, int VAR_13, int VAR_14,
    device_t *VAR_15, struct intr_irqsrc **VAR_16)
{
 struct intr_map_data_fdt *VAR_17;
 struct al_msix_softc *VAR_18;
 vmem_addr_t VAR_19;
 int VAR_20;
 u_int VAR_21, VAR_22;

 VAR_18 = FUNC_1(VAR_11);

 if ((FUNC_7(VAR_13) == 0) || (VAR_13 > 8))
  return (VAR_2);

 if (FUNC_8(VAR_18->irq_alloc, VAR_13, VAR_7 | VAR_8,
     &VAR_19) != 0)
  return (VAR_3);


 VAR_17 = FUNC_4(sizeof(*VAR_17) +
     VAR_4 * sizeof(pcell_t), VAR_6, VAR_9);
 VAR_17->hdr.type = VAR_5;
 VAR_17->iparent = 0;
 VAR_17->ncells = VAR_4;
 VAR_17->cells[0] = VAR_1;
 VAR_17->cells[1] = 0;
 VAR_17->cells[2] = VAR_0;

 FUNC_5(&VAR_18->msi_mtx);

 for (VAR_21 = VAR_19; VAR_21 < VAR_19 + VAR_13; VAR_21++) {
  VAR_17->cells[1] = VAR_18->irq_min + VAR_21;
  VAR_20 = FUNC_0(VAR_18->gic_dev,
      (struct intr_map_data *)VAR_17, VAR_16);
  if (VAR_20) {
   for (VAR_22 = VAR_19; VAR_22 < VAR_21; VAR_22++)
    VAR_18->isrcs[VAR_22] = ((void*)0);
   FUNC_6(&VAR_18->msi_mtx);
   FUNC_9(VAR_18->irq_alloc, VAR_19, VAR_13);
   FUNC_3(VAR_17, VAR_6);
   return (VAR_20);
  }

  VAR_18->isrcs[VAR_21] = *VAR_16;
  VAR_16++;
 }

 FUNC_6(&VAR_18->msi_mtx);
 FUNC_3(VAR_17, VAR_6);

 if (VAR_10)
  FUNC_2(VAR_11,
      "MSI-X allocation: start SPI %d, count %d\n",
      (int)VAR_19 + VAR_18->irq_min, VAR_13);

 *VAR_15 = VAR_18->gic_dev;

 return (0);
}
