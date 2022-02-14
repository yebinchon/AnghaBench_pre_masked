
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vmem_addr_t ;
typedef scalar_t__ vm_offset_t ;
typedef void* u_int ;
struct TYPE_2__ {int lpi_base; void* lpi_free; void* lpi_num; scalar_t__ lpi_busy; } ;
struct its_dev {scalar_t__ itt; TYPE_1__ lpis; int itt_size; int devid; int pci_dev; } ;
struct gicv3_its_softc {int sc_its_dev_lock; int sc_its_dev_list; int sc_irq_alloc; } ;
typedef int device_t ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (void*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,struct its_dev*,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int,int ,int ,int ,int ) ;
 struct gicv3_its_softc* FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (struct its_dev*,int ) ;
 int FUNC_6 (struct gicv3_its_softc*,int ) ;
 int FUNC_7 (int ,struct its_dev*,int) ;
 struct its_dev* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 struct its_dev* FUNC_10 (int,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (size_t,int) ;
 scalar_t__ FUNC_14 (int ,void*,int,int *) ;
 int FUNC_15 (int ,int ,void*) ;

__attribute__((used)) static struct its_dev *
FUNC_16(device_t VAR_8, device_t VAR_9, u_int VAR_10)
{
 struct gicv3_its_softc *VAR_11;
 struct its_dev *VAR_12;
 vmem_addr_t VAR_13;
 size_t VAR_14;

 VAR_11 = FUNC_4(VAR_8);

 VAR_12 = FUNC_8(VAR_8, VAR_9);
 if (VAR_12 != ((void*)0))
  return (VAR_12);

 VAR_12 = FUNC_10(sizeof(*VAR_12), VAR_4, VAR_5 | VAR_6);
 if (VAR_12 == ((void*)0))
  return (((void*)0));

 VAR_12->pci_dev = VAR_9;
 VAR_12->devid = FUNC_9(VAR_9);

 VAR_12->lpis.lpi_busy = 0;
 VAR_12->lpis.lpi_num = VAR_10;
 VAR_12->lpis.lpi_free = VAR_10;

 if (FUNC_14(VAR_11->sc_irq_alloc, VAR_10, VAR_3 | VAR_5,
     &VAR_13) != 0) {
  FUNC_5(VAR_12, VAR_4);
  return (((void*)0));
 }
 VAR_12->lpis.lpi_base = VAR_13;


 VAR_14 = FUNC_0(FUNC_6(VAR_11, VAR_0));





 VAR_12->itt_size = FUNC_13(FUNC_1(VAR_10, 2) * VAR_14, 256);
 VAR_12->itt = (vm_offset_t)FUNC_3(VAR_12->itt_size,
     VAR_4, VAR_5 | VAR_6, 0, VAR_2,
     VAR_1, 0);
 if (VAR_12->itt == 0) {
  FUNC_15(VAR_11->sc_irq_alloc, VAR_12->lpis.lpi_base, VAR_10);
  FUNC_5(VAR_12, VAR_4);
  return (((void*)0));
 }

 FUNC_11(&VAR_11->sc_its_dev_lock);
 FUNC_2(&VAR_11->sc_its_dev_list, VAR_12, VAR_7);
 FUNC_12(&VAR_11->sc_its_dev_lock);


 FUNC_7(VAR_8, VAR_12, 1);

 return (VAR_12);
}
