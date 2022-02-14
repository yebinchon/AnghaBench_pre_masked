
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int device_t ;
typedef TYPE_3__* bt3c_softc_p ;
struct TYPE_8__ {int ifq_mtx; int ifq_maxlen; } ;
struct TYPE_7__ {int ifq_mtx; int ifq_maxlen; } ;
struct TYPE_9__ {int want; scalar_t__ iobase_rid; int * iobase; scalar_t__ irq_rid; int * irq; int * irq_cookie; int * ith; int * node; int state; TYPE_2__ outq; TYPE_1__ inq; int debug; int dev; int ioh; int iot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_2 (int ,int ,scalar_t__*,int ) ;
 int * FUNC_3 (int ,int ,scalar_t__*,int,int ) ;
 int FUNC_4 (int ,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_5 (int ,int *,int ,int *,int ,TYPE_3__*,int **) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_11 (int *,int **) ;
 scalar_t__ FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,int ,int ,TYPE_3__*,int ,int ,int **) ;
 int FUNC_16 (int *) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_17(device_t VAR_14)
{
 bt3c_softc_p VAR_15 = (bt3c_softc_p) FUNC_8(VAR_14);


 VAR_15->iobase_rid = 0;
 VAR_15->iobase = FUNC_3(VAR_14, VAR_8,
   &VAR_15->iobase_rid, 8, VAR_6);
 if (VAR_15->iobase == ((void*)0)) {
  FUNC_9(VAR_14, "Could not allocate I/O ports\n");
  goto bad;
 }
 VAR_15->iot = FUNC_14(VAR_15->iobase);
 VAR_15->ioh = FUNC_13(VAR_15->iobase);


 VAR_15->irq_rid = 0;
 VAR_15->irq = FUNC_2(VAR_14, VAR_9, &VAR_15->irq_rid,
   VAR_6);
 if (VAR_15->irq == ((void*)0)) {
  FUNC_9(VAR_14, "Could not allocate IRQ\n");
  goto bad;
 }

 VAR_15->irq_cookie = ((void*)0);
 if (FUNC_5(VAR_14, VAR_15->irq, VAR_2, ((void*)0), VAR_10, VAR_15,
   &VAR_15->irq_cookie) != 0) {
  FUNC_9(VAR_14, "Could not setup ISR\n");
  goto bad;
 }


 VAR_15->ith = ((void*)0);
 if (FUNC_15(&VAR_12, FUNC_7(VAR_14),
   VAR_11, VAR_15, VAR_7, 0, &VAR_15->ith) < 0) {
  FUNC_9(VAR_14, "Could not setup SWI ISR\n");
  goto bad;
 }


 if (FUNC_11(&VAR_13, &VAR_15->node) != 0) {
  FUNC_9(VAR_14, "Could not create Netgraph node\n");
  VAR_15->node = ((void*)0);
  goto bad;
 }


 if (FUNC_12(VAR_15->node, FUNC_7(VAR_14)) != 0) {
  FUNC_9(VAR_14, "Could not name Netgraph node\n");
  FUNC_1(VAR_15->node);
  VAR_15->node = ((void*)0);
  goto bad;
 }

 VAR_15->dev = VAR_14;
 VAR_15->debug = VAR_5;

 VAR_15->inq.ifq_maxlen = VAR_15->outq.ifq_maxlen = VAR_0;
 FUNC_10(&VAR_15->inq.ifq_mtx, "BT3C inq", ((void*)0), VAR_3);
 FUNC_10(&VAR_15->outq.ifq_mtx, "BT3C outq", ((void*)0), VAR_3);

 VAR_15->state = VAR_4;
 VAR_15->want = 1;

 FUNC_0(VAR_15->node, VAR_15);

 return (0);
bad:
 if (VAR_15->ith != ((void*)0)) {
  FUNC_16(VAR_15->ith);
  VAR_15->ith = ((void*)0);
 }

 if (VAR_15->irq != ((void*)0)) {
  if (VAR_15->irq_cookie != ((void*)0))
   FUNC_6(VAR_14, VAR_15->irq, VAR_15->irq_cookie);

  FUNC_4(VAR_14, VAR_9,
   VAR_15->irq_rid, VAR_15->irq);

  VAR_15->irq = ((void*)0);
  VAR_15->irq_rid = 0;
 }

 if (VAR_15->iobase != ((void*)0)) {
  FUNC_4(VAR_14, VAR_8,
   VAR_15->iobase_rid, VAR_15->iobase);

  VAR_15->iobase = ((void*)0);
  VAR_15->iobase_rid = 0;
 }

 return (VAR_1);
}
