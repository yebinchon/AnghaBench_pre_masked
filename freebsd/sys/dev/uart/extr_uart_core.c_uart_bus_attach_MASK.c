
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int timeout_t ;
struct TYPE_6__ {int bst; int bsh; } ;
struct uart_softc {int sc_leaving; int sc_rxbufsz; int sc_rxfifosz; int sc_txfifosz; int sc_testintr; int sc_fastintr; int sc_polled; int sc_hwmtx_s; int * sc_rres; int sc_rrid; int sc_rtype; int * sc_ires; int sc_irid; int sc_icookie; void* sc_rxbuf; void* sc_txbuf; int * sc_hwmtx; TYPE_3__* sc_sysdev; int sc_timer; scalar_t__ sc_hwoflow; scalar_t__ sc_hwiflow; TYPE_2__ sc_bas; TYPE_1__* sc_class; } ;
typedef int driver_intr_t ;
typedef int device_t ;
struct TYPE_8__ {scalar_t__ size; } ;
struct TYPE_7__ {int baudrate; int type; size_t parity; int databits; int stopbits; int (* attach ) (struct uart_softc*) ;int * hwmtx; struct uart_softc* sc; } ;
struct TYPE_5__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct uart_softc*) ;



 scalar_t__ FUNC_2 (struct uart_softc*,int ,intptr_t) ;
 int VAR_11 ;
 int FUNC_3 (struct uart_softc*,struct uart_softc*,int) ;
 scalar_t__ VAR_12 ;
 void* FUNC_4 (int ,int ,int *,int) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (int ,int *,int,int (*) (struct uart_softc*),int *,struct uart_softc*,int *) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int,int *,struct uart_softc*) ;
 TYPE_4__* FUNC_10 (int ) ;
 struct uart_softc* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ,struct uart_softc*) ;
 int FUNC_15 (void*,int ) ;
 int VAR_13 ;
 void* FUNC_16 (int,int ,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,char*,int *,int ) ;
 int FUNC_19 (char*,...) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct uart_softc*) ;
 int VAR_14 ;
 int FUNC_23 (struct uart_softc*) ;
 int VAR_15 ;
 int FUNC_24 (struct uart_softc*) ;
 int FUNC_25 (struct uart_softc*) ;

int
FUNC_26(device_t VAR_16)
{
 struct uart_softc *VAR_17, *VAR_18;
 const char *VAR_19;
 int VAR_20, VAR_21;







 VAR_18 = FUNC_11(VAR_16);
 if (VAR_18->sc_class->size > FUNC_10(VAR_16)->size) {
  VAR_17 = FUNC_16(VAR_18->sc_class->size, VAR_5, VAR_6|VAR_7);
  FUNC_3(VAR_18, VAR_17, sizeof(*VAR_17));
  FUNC_14(VAR_16, VAR_17);
 } else
  VAR_17 = VAR_18;





 if (VAR_17->sc_sysdev != ((void*)0))
  VAR_17->sc_sysdev->sc = VAR_17;






 VAR_17->sc_leaving = 1;

 FUNC_18(&VAR_17->sc_hwmtx_s, "uart_hwmtx", ((void*)0), VAR_4);
 if (VAR_17->sc_hwmtx == ((void*)0))
  VAR_17->sc_hwmtx = &VAR_17->sc_hwmtx_s;





 VAR_17->sc_rres = FUNC_4(VAR_16, VAR_17->sc_rtype, &VAR_17->sc_rrid,
     VAR_8);
 if (VAR_17->sc_rres == ((void*)0)) {
  FUNC_17(&VAR_17->sc_hwmtx_s);
  return (VAR_0);
 }
 VAR_17->sc_bas.bsh = FUNC_20(VAR_17->sc_rres);
 VAR_17->sc_bas.bst = FUNC_21(VAR_17->sc_rres);







 VAR_17->sc_rxbufsz = FUNC_0(384, VAR_17->sc_rxfifosz * 3);
 VAR_17->sc_rxbuf = FUNC_16(VAR_17->sc_rxbufsz * sizeof(*VAR_17->sc_rxbuf),
     VAR_5, VAR_6);
 VAR_17->sc_txbuf = FUNC_16(VAR_17->sc_txfifosz * sizeof(*VAR_17->sc_txbuf),
     VAR_5, VAR_6);

 VAR_20 = FUNC_1(VAR_17);
 if (VAR_20)
  goto fail;

 if (VAR_17->sc_hwiflow || VAR_17->sc_hwoflow) {
  VAR_19 = "";
  FUNC_12(VAR_16);
  if (VAR_17->sc_hwiflow) {
   FUNC_19("%sRTS iflow", VAR_19);
   VAR_19 = ", ";
  }
  if (VAR_17->sc_hwoflow) {
   FUNC_19("%sCTS oflow", VAR_19);
   VAR_19 = ", ";
  }
  FUNC_19("\n");
 }

 if (VAR_17->sc_sysdev != ((void*)0)) {
  if (VAR_17->sc_sysdev->baudrate == 0) {
   if (FUNC_2(VAR_17, VAR_11,
       (intptr_t)&VAR_17->sc_sysdev->baudrate) != 0)
    VAR_17->sc_sysdev->baudrate = -1;
  }
  switch (VAR_17->sc_sysdev->type) {
  case 130:
   FUNC_13(VAR_16, "console");
   break;
  case 129:
   FUNC_13(VAR_16, "debug port");
   break;
  case 128:
   FUNC_13(VAR_16, "keyboard");
   break;
  default:
   FUNC_13(VAR_16, "unknown system device");
   break;
  }
  FUNC_19(" (%d,%c,%d,%d)\n", VAR_17->sc_sysdev->baudrate,
      "noems"[VAR_17->sc_sysdev->parity], VAR_17->sc_sysdev->databits,
      VAR_17->sc_sysdev->stopbits);
 }

 VAR_17->sc_leaving = 0;
 VAR_17->sc_testintr = 1;
 VAR_21 = FUNC_23(VAR_17);
 VAR_17->sc_testintr = 0;






 if (VAR_21 != VAR_1 && !VAR_14) {
  VAR_17->sc_ires = FUNC_4(VAR_16, VAR_10,
      &VAR_17->sc_irid, VAR_8 | VAR_9);
 }
 if (VAR_17->sc_ires != ((void*)0)) {
  VAR_20 = FUNC_6(VAR_16, VAR_17->sc_ires, VAR_3,
      FUNC_23, ((void*)0), VAR_17, &VAR_17->sc_icookie);
  VAR_17->sc_fastintr = (VAR_20 == 0) ? 1 : 0;

  if (!VAR_17->sc_fastintr)
   VAR_20 = FUNC_6(VAR_16, VAR_17->sc_ires,
       VAR_3 | VAR_2, ((void*)0),
       (driver_intr_t *)FUNC_23, VAR_17, &VAR_17->sc_icookie);

  if (VAR_20) {
   FUNC_13(VAR_16, "could not activate interrupt\n");
   FUNC_5(VAR_16, VAR_10, VAR_17->sc_irid,
       VAR_17->sc_ires);
   VAR_17->sc_ires = ((void*)0);
  }
 }
 if (VAR_17->sc_ires == ((void*)0)) {

  VAR_17->sc_polled = 1;
  FUNC_8(&VAR_17->sc_timer, 1);
  FUNC_9(&VAR_17->sc_timer, VAR_13 / VAR_15,
      (timeout_t *)FUNC_23, VAR_17);
 }

 if (VAR_12 && (VAR_17->sc_fastintr || VAR_17->sc_polled)) {
  VAR_19 = "";
  FUNC_12(VAR_16);
  if (VAR_17->sc_fastintr) {
   FUNC_19("%sfast interrupt", VAR_19);
   VAR_19 = ", ";
  }
  if (VAR_17->sc_polled) {
   FUNC_19("%spolled mode (%dHz)", VAR_19, VAR_15);
   VAR_19 = ", ";
  }
  FUNC_19("\n");
 }

 if (VAR_17->sc_sysdev != ((void*)0) && VAR_17->sc_sysdev->attach != ((void*)0)) {
  if ((VAR_20 = VAR_17->sc_sysdev->attach(VAR_17)) != 0)
   goto fail;
 } else {
  if ((VAR_20 = FUNC_25(VAR_17)) != 0)
   goto fail;
  FUNC_24(VAR_17);
 }

 if (VAR_17->sc_sysdev != ((void*)0))
  VAR_17->sc_sysdev->hwmtx = VAR_17->sc_hwmtx;

 return (0);

 fail:
 FUNC_15(VAR_17->sc_txbuf, VAR_5);
 FUNC_15(VAR_17->sc_rxbuf, VAR_5);

 if (VAR_17->sc_ires != ((void*)0)) {
  FUNC_7(VAR_16, VAR_17->sc_ires, VAR_17->sc_icookie);
  FUNC_5(VAR_16, VAR_10, VAR_17->sc_irid,
      VAR_17->sc_ires);
 }
 FUNC_5(VAR_16, VAR_17->sc_rtype, VAR_17->sc_rrid, VAR_17->sc_rres);

 FUNC_17(&VAR_17->sc_hwmtx_s);

 return (VAR_20);
}
