
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glxiic_softc {int old_irq; int * irq_res; int irq_rid; int * irq_handler; int * gpio_res; int gpio_rid; int * smb_res; int smb_rid; int callout; int * iicbus; } ;
typedef int device_t ;


 int FUNC_0 (struct glxiic_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 struct glxiic_softc* FUNC_6 (int ) ;
 int FUNC_7 (struct glxiic_softc*) ;
 int FUNC_8 (struct glxiic_softc*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_2)
{
 struct glxiic_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_6(VAR_2);

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 != 0)
  goto out;
 if (VAR_3->iicbus != ((void*)0))
  VAR_4 = FUNC_5(VAR_2, VAR_3->iicbus);

out:
 FUNC_4(&VAR_3->callout);

 if (VAR_3->smb_res != ((void*)0)) {
  FUNC_8(VAR_3);
  FUNC_2(VAR_2, VAR_0, VAR_3->smb_rid,
      VAR_3->smb_res);
 }
 if (VAR_3->gpio_res != ((void*)0)) {
  FUNC_7(VAR_3);
  FUNC_2(VAR_2, VAR_0, VAR_3->gpio_rid,
      VAR_3->gpio_res);
 }
 if (VAR_3->irq_handler != ((void*)0))
  FUNC_3(VAR_2, VAR_3->irq_res, VAR_3->irq_handler);
 if (VAR_3->irq_res != ((void*)0))
  FUNC_2(VAR_2, VAR_1, VAR_3->irq_rid,
      VAR_3->irq_res);


 FUNC_9(VAR_3->old_irq);

 FUNC_0(VAR_3);

 return (VAR_4);
}
