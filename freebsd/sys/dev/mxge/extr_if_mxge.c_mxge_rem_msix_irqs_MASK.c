
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_slices; int dev; int * msix_table_res; int ** msix_irq_res; int ** msix_ih; } ;
typedef TYPE_1__ mxge_softc_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int **,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(mxge_softc_t *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_slices; VAR_4++) {
  if (VAR_3->msix_ih[VAR_4] != ((void*)0)) {
   FUNC_2(VAR_3->dev, VAR_3->msix_irq_res[VAR_4],
       VAR_3->msix_ih[VAR_4]);
   VAR_3->msix_ih[VAR_4] = ((void*)0);
  }
 }
 FUNC_3(VAR_3->msix_ih, VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_3->num_slices; VAR_4++) {
  VAR_5 = VAR_4 + 1;
  if (VAR_3->msix_irq_res[VAR_4] != ((void*)0))
   FUNC_1(VAR_3->dev, VAR_1, VAR_5,
          VAR_3->msix_irq_res[VAR_4]);
  VAR_3->msix_irq_res[VAR_4] = ((void*)0);
 }
 FUNC_3(VAR_3->msix_irq_res, VAR_0);

 FUNC_1(VAR_3->dev, VAR_2, FUNC_0(2),
        VAR_3->msix_table_res);

 FUNC_4(VAR_3->dev);
 return;
}
