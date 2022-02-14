
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf_softc {scalar_t__ res_ioport; int pcf_flags; scalar_t__ res_irq; int pcf_lock; int rid_ioport; int rid_irq; int * iicbus; int intr_cookie; } ;
typedef int device_t ;


 struct pcf_softc* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,int ,int *,int ,struct pcf_softc*,int *) ;
 int * FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,char*,int ) ;
 int VAR_9 ;
 int FUNC_11 (int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_10)
{
 struct pcf_softc *VAR_11;
 int VAR_12 = VAR_0;

 VAR_11 = FUNC_0(VAR_10);
 FUNC_10(&VAR_11->pcf_lock, FUNC_7(VAR_10), "pcf", VAR_4);


 VAR_11->res_ioport = FUNC_1(VAR_10, VAR_7,
      &VAR_11->rid_ioport, VAR_6);
 if (VAR_11->res_ioport == 0) {
  FUNC_8(VAR_10, "cannot reserve I/O port range\n");
  goto error;
 }

 VAR_11->pcf_flags = FUNC_6(VAR_10);

 if (!(VAR_11->pcf_flags & VAR_2)) {
  VAR_11->res_irq = FUNC_1(VAR_10, VAR_8, &VAR_11->rid_irq,
           VAR_6);
  if (VAR_11->res_irq == 0) {
   FUNC_8(VAR_10, "can't reserve irq, polled mode.\n");
   VAR_11->pcf_flags |= VAR_2;
  }
 }


 FUNC_11(VAR_10, VAR_1, VAR_5, ((void*)0));

 if (VAR_11->res_irq) {
  VAR_12 = FUNC_4(VAR_10, VAR_11->res_irq,
        VAR_3 ,
        ((void*)0), VAR_9, VAR_11, &VAR_11->intr_cookie);
  if (VAR_12) {
   FUNC_8(VAR_10, "could not setup IRQ\n");
   goto error;
  }
 }

 if ((VAR_11->iicbus = FUNC_5(VAR_10, "iicbus", -1)) == ((void*)0))
  FUNC_8(VAR_10, "could not allocate iicbus instance\n");


 FUNC_2(VAR_10);

 return (0);

error:
 if (VAR_11->res_irq != 0) {
  FUNC_3(VAR_10, VAR_8, VAR_11->rid_irq,
         VAR_11->res_irq);
 }
 if (VAR_11->res_ioport != 0) {
  FUNC_3(VAR_10, VAR_7, VAR_11->rid_ioport,
         VAR_11->res_ioport);
 }
 FUNC_9(&VAR_11->pcf_lock);
 return (VAR_12);
}
