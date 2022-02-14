
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_gpio_softc {int * sc_busdev; int * sc_mem_res; int sc_irq_hdl; void* sc_irq_res; scalar_t__ sc_irq_rid; scalar_t__ sc_mem_rid; int sc_maxpin; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ti_gpio_softc*) ;
 void* FUNC_1 (int ,int ,scalar_t__*,int ) ;
 scalar_t__ FUNC_2 (int ,void*,int,int ,int *,struct ti_gpio_softc*,int *) ;
 struct ti_gpio_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (struct ti_gpio_softc*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_7)
{
 struct ti_gpio_softc *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_7);
 VAR_8->sc_dev = VAR_7;
 FUNC_0(VAR_8);
 FUNC_9(VAR_7, &VAR_8->sc_maxpin);
 VAR_8->sc_maxpin++;

 VAR_8->sc_mem_rid = 0;
 VAR_8->sc_mem_res = FUNC_1(VAR_7, VAR_5,
     &VAR_8->sc_mem_rid, VAR_3);
 if (!VAR_8->sc_mem_res) {
  FUNC_4(VAR_7, "Error: could not allocate mem resources\n");
  FUNC_7(VAR_7);
  return (VAR_0);
 }

 VAR_8->sc_irq_rid = 0;
 VAR_8->sc_irq_res = FUNC_1(VAR_7, VAR_4,
     &VAR_8->sc_irq_rid, VAR_3);
 if (!VAR_8->sc_irq_res) {
  FUNC_4(VAR_7, "Error: could not allocate irq resources\n");
  FUNC_7(VAR_7);
  return (VAR_0);
 }




 if (FUNC_2(VAR_7, VAR_8->sc_irq_res,
     VAR_2 | VAR_1, VAR_6, ((void*)0), VAR_8,
     &VAR_8->sc_irq_hdl) != 0) {
  FUNC_4(VAR_7,
      "WARNING: unable to register interrupt filter\n");
  FUNC_7(VAR_7);
  return (VAR_0);
 }

 if (FUNC_8(VAR_8) != 0) {
  FUNC_4(VAR_7, "WARNING: unable to attach PIC\n");
  FUNC_7(VAR_7);
  return (VAR_0);
 }






 if (VAR_8->sc_mem_res != ((void*)0)) {

  VAR_9 = FUNC_6(VAR_7);
  if (VAR_9 != 0) {
   FUNC_7(VAR_7);
   return (VAR_9);
  }
 }

 VAR_8->sc_busdev = FUNC_5(VAR_7);
 if (VAR_8->sc_busdev == ((void*)0)) {
  FUNC_7(VAR_7);
  return (VAR_0);
 }

 return (0);
}
