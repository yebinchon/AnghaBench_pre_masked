
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malo_softc {int malo_invalid; int malo_dmat; } ;
struct malo_pci_softc {scalar_t__ malo_msi; int * malo_res_mem; int malo_mem_spec; int * malo_res_irq; int malo_irq_spec; int * malo_intrhand; struct malo_softc malo_sc; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 struct malo_pci_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct malo_softc*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1)
{
 int VAR_2;
 struct malo_pci_softc *VAR_3 = FUNC_5(VAR_1);
 struct malo_softc *VAR_4 = &VAR_3->malo_sc;


 VAR_4->malo_invalid = !FUNC_0(VAR_1);

 FUNC_6(VAR_4);

 FUNC_2(VAR_1);

 if (VAR_3->malo_msi == 0)
  FUNC_4(VAR_1, VAR_3->malo_res_irq[0],
      VAR_3->malo_intrhand[0]);
 else {
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   FUNC_4(VAR_1, VAR_3->malo_res_irq[VAR_2],
       VAR_3->malo_intrhand[VAR_2]);

  FUNC_7(VAR_1);
 }

 FUNC_3(VAR_1, VAR_3->malo_irq_spec, VAR_3->malo_res_irq);
 FUNC_1(VAR_4->malo_dmat);
 FUNC_3(VAR_1, VAR_3->malo_mem_spec, VAR_3->malo_res_mem);

 return (0);
}
