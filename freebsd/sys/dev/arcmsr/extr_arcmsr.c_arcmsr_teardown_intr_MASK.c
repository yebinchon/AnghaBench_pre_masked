
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterControlBlock {int acb_flags; int msix_vectors; int ** ih; int ** irqres; int * irq_id; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(device_t VAR_2, struct AdapterControlBlock *VAR_3)
{
 int VAR_4;

 if (VAR_3->acb_flags & VAR_0) {
  for (VAR_4 = 0; VAR_4 < VAR_3->msix_vectors; VAR_4++) {
   if (VAR_3->ih[VAR_4])
    FUNC_1(VAR_2, VAR_3->irqres[VAR_4], VAR_3->ih[VAR_4]);
   if (VAR_3->irqres[VAR_4] != ((void*)0))
    FUNC_0(VAR_2, VAR_1,
        VAR_3->irq_id[VAR_4], VAR_3->irqres[VAR_4]);

   VAR_3->ih[VAR_4] = ((void*)0);
  }
  FUNC_2(VAR_2);
 } else {
  if (VAR_3->ih[0])
   FUNC_1(VAR_2, VAR_3->irqres[0], VAR_3->ih[0]);
  if (VAR_3->irqres[0] != ((void*)0))
   FUNC_0(VAR_2, VAR_1,
       VAR_3->irq_id[0], VAR_3->irqres[0]);
  VAR_3->ih[0] = ((void*)0);
 }

}
