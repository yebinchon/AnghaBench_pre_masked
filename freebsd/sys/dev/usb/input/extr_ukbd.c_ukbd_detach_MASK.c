
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kb_flags; } ;
struct ukbd_softc {int sc_flags; int sc_callout; int * sc_xfer; TYPE_1__ sc_kbd; int sc_evdev; int sc_ndata; } ;
typedef int device_t ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 struct ukbd_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct ukbd_softc*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int ) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_5)
{
 struct ukbd_softc *VAR_6 = FUNC_4(VAR_5);
 int VAR_7;

 FUNC_2();

 FUNC_0("\n");

 VAR_6->sc_flags |= VAR_1;

 FUNC_13(&VAR_6->sc_callout);


 if (VAR_6->sc_flags & VAR_0) {

  FUNC_14(VAR_6->sc_xfer[VAR_2]);
  FUNC_14(VAR_6->sc_xfer[VAR_3]);


  FUNC_9(&VAR_6->sc_ndata, 0, sizeof(VAR_6->sc_ndata));


  FUNC_11(VAR_6);
 }

 FUNC_10(&VAR_6->sc_kbd);
 if (FUNC_1(&VAR_6->sc_kbd)) {
  VAR_7 = FUNC_8(&VAR_6->sc_kbd);
  if (VAR_7) {

   FUNC_5(VAR_5, "WARNING: kbd_unregister() "
       "returned non-zero! (ignored)\n");
  }
 }
 VAR_6->sc_kbd.kb_flags = 0;

 FUNC_15(VAR_6->sc_xfer, VAR_4);

 FUNC_12(&VAR_6->sc_callout);

 FUNC_0("%s: disconnected\n",
     FUNC_3(VAR_5));

 return (0);
}
