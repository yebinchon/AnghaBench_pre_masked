
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wi_softc {scalar_t__ wi_bus_type; int iobase_rid; int mem_rid; int irq_rid; int sc_unit; int sc_dev; int * irq; int * mem; void* wi_bhandle; void* wi_btag; int * iobase; int wi_io_addr; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_0 (int ,int ,int*,int) ;
 int * FUNC_1 (int ,int ,int*,int,int) ;
 struct wi_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 void* FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;

int
FUNC_10(device_t VAR_8, int VAR_9)
{
 struct wi_softc *VAR_10 = FUNC_2(VAR_8);

 if (VAR_10->wi_bus_type != VAR_7) {
  VAR_10->iobase_rid = VAR_9;
  VAR_10->iobase = FUNC_1(VAR_8, VAR_3,
      &VAR_10->iobase_rid, (1 << 6),
      FUNC_8(1 << 6) | VAR_1);
  if (VAR_10->iobase == ((void*)0)) {
   FUNC_4(VAR_8, "No I/O space?!\n");
   return VAR_0;
  }

  VAR_10->wi_io_addr = FUNC_7(VAR_10->iobase);
  VAR_10->wi_btag = FUNC_6(VAR_10->iobase);
  VAR_10->wi_bhandle = FUNC_5(VAR_10->iobase);
 } else {
  VAR_10->mem_rid = VAR_9;
  VAR_10->mem = FUNC_0(VAR_8, VAR_5,
      &VAR_10->mem_rid, VAR_1);
  if (VAR_10->mem == ((void*)0)) {
   FUNC_4(VAR_8, "No Mem space on prism2.5?\n");
   return VAR_0;
  }

  VAR_10->wi_btag = FUNC_6(VAR_10->mem);
  VAR_10->wi_bhandle = FUNC_5(VAR_10->mem);
 }

 VAR_10->irq_rid = 0;
 VAR_10->irq = FUNC_0(VAR_8, VAR_4, &VAR_10->irq_rid,
     VAR_1 |
     ((VAR_10->wi_bus_type == VAR_6) ? 0 : VAR_2));
 if (VAR_10->irq == ((void*)0)) {
  FUNC_9(VAR_8);
  FUNC_4(VAR_8, "No irq?!\n");
  return VAR_0;
 }

 VAR_10->sc_dev = VAR_8;
 VAR_10->sc_unit = FUNC_3(VAR_8);
 return 0;
}
