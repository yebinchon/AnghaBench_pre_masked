
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct fdc_data {struct resource* res_drq; int rid_drq; struct resource** resio; int * ridio; struct resource* res_irq; int rid_irq; int * fdc_intr; int fdc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,struct resource*) ;
 int FUNC_1 (int ,struct resource*,int *) ;

void
FUNC_2(struct fdc_data *VAR_4)
{
 device_t VAR_5;
 struct resource *VAR_6;
 int VAR_7;

 VAR_5 = VAR_4->fdc_dev;
 if (VAR_4->fdc_intr)
  FUNC_1(VAR_5, VAR_4->res_irq, VAR_4->fdc_intr);
 VAR_4->fdc_intr = ((void*)0);
 if (VAR_4->res_irq != ((void*)0))
  FUNC_0(VAR_5, VAR_3, VAR_4->rid_irq,
      VAR_4->res_irq);
 VAR_4->res_irq = ((void*)0);
 VAR_6 = ((void*)0);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_4->resio[VAR_7] != ((void*)0) && VAR_4->resio[VAR_7] != VAR_6) {
   FUNC_0(VAR_5, VAR_2,
       VAR_4->ridio[VAR_7], VAR_4->resio[VAR_7]);
   VAR_6 = VAR_4->resio[VAR_7];
   VAR_4->resio[VAR_7] = ((void*)0);
  }
 }
 if (VAR_4->res_drq != ((void*)0))
  FUNC_0(VAR_5, VAR_1, VAR_4->rid_drq,
      VAR_4->res_drq);
 VAR_4->res_drq = ((void*)0);
}
