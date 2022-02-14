
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int lock; } ;
struct TYPE_7__ {int lock; } ;
struct TYPE_6__ {int callout; } ;
struct cpsw_softc {TYPE_4__ tx; TYPE_3__ rx; int irq_res; int * mem_res; int mem_rid; scalar_t__ mbuf_dtag; scalar_t__ nullpad; int * _slots; TYPE_2__ watchdog; TYPE_1__* port; } ;
typedef int device_t ;
struct TYPE_5__ {scalar_t__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct cpsw_softc*,int *) ;
 int FUNC_8 (struct cpsw_softc*) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ) ;
 struct cpsw_softc* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_4)
{
 struct cpsw_softc *VAR_5;
 int VAR_6, VAR_7;

 FUNC_2(VAR_4);
  VAR_5 = FUNC_11(VAR_4);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_5->port[VAR_7].dev)
   FUNC_9(VAR_4, VAR_5->port[VAR_7].dev);
 }

 if (FUNC_12(VAR_4)) {
  FUNC_6(&VAR_5->watchdog.callout);
  FUNC_5(&VAR_5->watchdog.callout);
 }


 FUNC_8(VAR_5);


 for (VAR_7 = 0; VAR_7 < FUNC_15(VAR_5->_slots); ++VAR_7)
  FUNC_7(VAR_5, &VAR_5->_slots[VAR_7]);


 if (VAR_5->nullpad)
  FUNC_13(VAR_5->nullpad, VAR_1);


 if (VAR_5->mbuf_dtag) {
  VAR_6 = FUNC_1(VAR_5->mbuf_dtag);
  FUNC_0(VAR_6 == 0, ("Unable to destroy DMA tag"));
 }


 if (VAR_5->mem_res != ((void*)0))
  FUNC_3(VAR_4, VAR_2, VAR_5->mem_rid, VAR_5->mem_res);
 FUNC_4(VAR_4, VAR_3, VAR_5->irq_res);


 FUNC_14(&VAR_5->rx.lock);
 FUNC_14(&VAR_5->tx.lock);


 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 != 0)
  return (VAR_6);

 return (FUNC_10(VAR_4));
}
