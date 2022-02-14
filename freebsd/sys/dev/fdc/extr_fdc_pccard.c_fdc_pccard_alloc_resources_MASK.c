
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct fdc_data {int* ridio; int* ioff; int rid_irq; int * res_irq; int iot; int * ioh; struct resource** resio; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct resource*) ;
 int FUNC_3 (struct resource*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_6, struct fdc_data *VAR_7)
{
 struct resource *VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = 0;
 VAR_8 = FUNC_0(VAR_6, VAR_4, &VAR_9, VAR_2);
 if (VAR_8 == ((void*)0)) {
  FUNC_1(VAR_6, "cannot alloc I/O port range\n");
  return (VAR_0);
 }
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_7->resio[VAR_10] = VAR_8;
  VAR_7->ridio[VAR_10] = VAR_9;
  VAR_7->ioff[VAR_10] = VAR_10;
  VAR_7->ioh[VAR_10] = FUNC_2(VAR_8);
 }
 VAR_7->iot = FUNC_3(VAR_8);

 VAR_7->rid_irq = 0;
 VAR_7->res_irq = FUNC_0(VAR_6, VAR_5, &VAR_7->rid_irq,
     VAR_2 | VAR_3);
 if (VAR_7->res_irq == ((void*)0)) {
  FUNC_1(VAR_6, "cannot reserve interrupt line\n");
  return (VAR_0);
 }
 return (0);
}
