
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct resource {int dummy; } ;
struct fdc_data {int* ridio; int* ioff; int flags; int dmachan; struct resource* res_drq; int rid_drq; int * res_irq; int rid_irq; void** ioh; struct resource** resio; int iot; int fdc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct resource* FUNC_0 (int ,int ,int*,int,int,int,int) ;
 void* FUNC_1 (int ,int ,int *,int) ;
 struct resource* FUNC_2 (int ,int ,int*,int,int) ;
 int FUNC_3 (int ,int ,int,struct resource*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 void* FUNC_6 (struct resource*) ;
 int FUNC_7 (struct resource*) ;
 int FUNC_8 (struct resource*) ;
 int FUNC_9 (struct resource*) ;

int
FUNC_10(device_t VAR_8, struct fdc_data *VAR_9)
{
 struct resource *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 u_long VAR_16;

 VAR_9->fdc_dev = VAR_8;
 VAR_13 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
  VAR_9->resio[VAR_11] = ((void*)0);

 VAR_15 = FUNC_5(VAR_8) ? 1 : 6;
 for (VAR_13 = 0; ; VAR_13++) {
  VAR_14 = VAR_13;
  VAR_10 = FUNC_2(VAR_8, VAR_6, &VAR_14,
      VAR_13 == 0 ? VAR_15 : 1, VAR_3);
  if (VAR_10 == ((void*)0))
   break;




  VAR_11 = FUNC_9(VAR_10) & 0x7;
  if (VAR_11 + FUNC_8(VAR_10) - 1 > VAR_1) {
   FUNC_3(VAR_8, VAR_6, VAR_14, VAR_10);
   return (VAR_0);
  }
  for (VAR_12 = 0; VAR_12 < FUNC_8(VAR_10); VAR_12++) {
   VAR_9->resio[VAR_11 + VAR_12] = VAR_10;
   VAR_9->ridio[VAR_11 + VAR_12] = VAR_14;
   VAR_9->ioff[VAR_11 + VAR_12] = VAR_12;
   VAR_9->ioh[VAR_11 + VAR_12] = FUNC_6(VAR_10);
  }
 }
 if (VAR_9->resio[2] == ((void*)0)) {
  FUNC_4(VAR_8, "No FDOUT register!\n");
  return (VAR_0);
 }
 VAR_9->iot = FUNC_7(VAR_9->resio[2]);
 if (VAR_9->resio[7] == ((void*)0)) {
  VAR_16 = (FUNC_9(VAR_9->resio[2]) & ~0x7) + 7;
  VAR_14 = VAR_13;
  VAR_10 = FUNC_0(VAR_8, VAR_6, &VAR_14, VAR_16,
      VAR_16, 1, VAR_3);
  if (VAR_10 == ((void*)0)) {
   FUNC_4(VAR_8, "Faking up FDCTL\n");
   VAR_9->resio[7] = VAR_9->resio[2];
   VAR_9->ridio[7] = VAR_9->ridio[2];
   VAR_9->ioff[7] = VAR_9->ioff[2] + 5;
   VAR_9->ioh[7] = VAR_9->ioh[2];
  } else {
   VAR_9->resio[7] = VAR_10;
   VAR_9->ridio[7] = VAR_14;
   VAR_9->ioff[7] = FUNC_9(VAR_10) & 7;
   VAR_9->ioh[7] = FUNC_6(VAR_10);
  }
 }

 VAR_9->res_irq = FUNC_1(VAR_8, VAR_7, &VAR_9->rid_irq,
     VAR_3 | VAR_4);
 if (VAR_9->res_irq == ((void*)0)) {
  FUNC_4(VAR_8, "cannot reserve interrupt line\n");
  return (VAR_0);
 }

 if ((VAR_9->flags & VAR_2) == 0) {
  VAR_9->res_drq = FUNC_1(VAR_8, VAR_5,
      &VAR_9->rid_drq, VAR_3 | VAR_4);
  if (VAR_9->res_drq == ((void*)0)) {
   FUNC_4(VAR_8, "cannot reserve DMA request line\n");

   VAR_9->flags |= VAR_2;
  } else
   VAR_9->dmachan = FUNC_9(VAR_9->res_drq);
 }

 return (0);
}
