
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct mips_pic_softc {int pic_dev; } ;
struct mips_pic_intr {int intr_irq; struct resource* res; } ;
typedef int driver_filter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct resource* FUNC_0 (int ,int ,int*,int,int,int,int) ;
 int FUNC_1 (int ,int ,int,struct resource*) ;
 int FUNC_2 (int ,struct resource*,int,int *,void (*) (void*),void*,void**) ;
 int FUNC_3 (int,struct mips_pic_intr**) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,int) ;

__attribute__((used)) static void
FUNC_7(struct mips_pic_softc *VAR_4, const char *VAR_5,
    driver_filter_t *VAR_6, void (*VAR_7)(void*), void *VAR_8, int VAR_9,
    int VAR_10, void **VAR_11)
{
 struct mips_pic_intr *VAR_12;
 struct resource *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_14 = -1;


 if ((VAR_15 = FUNC_3(VAR_9, &VAR_12)))
  FUNC_6("Unable to map IRQ %d: %d", VAR_9, VAR_15);


 FUNC_4(&VAR_3);
 VAR_13 = VAR_12->res;
 FUNC_5(&VAR_3);


 if (VAR_13 == ((void*)0)) {

  VAR_14 = VAR_12->intr_irq;
  VAR_13 = FUNC_0(VAR_4->pic_dev, VAR_2, &VAR_14,
      VAR_12->intr_irq, VAR_12->intr_irq, 1, VAR_1|VAR_0);

  if (VAR_13 != ((void*)0)) {

   FUNC_4(&VAR_3);
   if (VAR_12->res == ((void*)0)) {
    VAR_12->res = VAR_13;
   }
   FUNC_5(&VAR_3);



   if (VAR_12->res != VAR_13) {
    FUNC_1(VAR_4->pic_dev, VAR_2,
        VAR_14, VAR_13);
   }
  } else {

   FUNC_4(&VAR_3);
   VAR_13 = VAR_12->res;
   FUNC_5(&VAR_3);
  }

  if (VAR_13 == ((void*)0)) {
   FUNC_6("Unable to allocate IRQ %d->%u resource", VAR_9,
       VAR_12->intr_irq);
  }
 }

 VAR_15 = FUNC_2(VAR_4->pic_dev, VAR_13, VAR_10, VAR_6, VAR_7, VAR_8,
     VAR_11);
 if (VAR_15)
  FUNC_6("Unable to add IRQ %d handler: %d", VAR_9, VAR_15);
}
