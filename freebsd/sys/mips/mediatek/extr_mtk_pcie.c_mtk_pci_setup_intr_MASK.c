
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct mtk_pci_softc {int sc_irq_start; int sc_irq_end; struct intr_event** sc_eventstab; } ;
struct intr_event {int dummy; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct mtk_pci_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct intr_event*,int ,int *,int *,void*,int ,int,void**) ;
 int FUNC_3 (struct intr_event**,void*,int ,int,int ,int (*) (void*),int *,int *,char*,int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct resource*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2, device_t VAR_3, struct resource *VAR_4,
 int VAR_5, driver_filter_t *VAR_6, driver_intr_t *VAR_7,
 void *VAR_8, void **VAR_9)
{
 struct mtk_pci_softc *VAR_10 = FUNC_1(VAR_2);
 struct intr_event *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_12 = FUNC_6(VAR_4);

 if (VAR_12 < VAR_10->sc_irq_start || VAR_12 > VAR_10->sc_irq_end)
  return (VAR_0);

 VAR_14 = VAR_12 - VAR_10->sc_irq_start;

 VAR_11 = VAR_10->sc_eventstab[VAR_14];
 if (VAR_11 == ((void*)0)) {
  VAR_13 = FUNC_3(&VAR_11, (void *)VAR_12, 0, VAR_12,
      VAR_1, FUNC_5, ((void*)0), ((void*)0),
      "pci intr%d:", VAR_12);

  if (VAR_13 == 0) {
   VAR_10->sc_eventstab[VAR_14] = VAR_11;
  }
  else {
   return (VAR_13);
  }
 }

 FUNC_2(VAR_11, FUNC_0(VAR_3), VAR_6,
  VAR_7, VAR_8, FUNC_4(VAR_5), VAR_5, VAR_9);

 FUNC_5((void*)VAR_12);

 return (0);
}
