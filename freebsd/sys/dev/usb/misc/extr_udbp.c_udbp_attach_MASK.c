
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bIfaceIndex; } ;
struct usb_attach_arg {TYPE_1__ info; int device; } ;
struct udbp_softc {char* sc_name; int * sc_node; int sc_xmitq_hipri; int sc_xmitq; int sc_mtx; int sc_xfer; } ;
typedef int device_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct udbp_softc*) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 struct usb_attach_arg* FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 struct udbp_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,char*,int *,int) ;
 scalar_t__ FUNC_9 (int *,int **) ;
 scalar_t__ FUNC_10 (int *,char*) ;
 int VAR_5 ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,int,char*,char*) ;
 int VAR_6 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,int *,int ,int ,int ,struct udbp_softc*,int *) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_7)
{
 struct usb_attach_arg *VAR_8 = FUNC_4(VAR_7);
 struct udbp_softc *VAR_9 = FUNC_6(VAR_7);
 int VAR_10;

 FUNC_7(VAR_7);

 FUNC_12(VAR_9->sc_name, sizeof(VAR_9->sc_name),
     "%s", FUNC_5(VAR_7));

 FUNC_8(&VAR_9->sc_mtx, "udbp lock", ((void*)0), VAR_1 | VAR_2);

 VAR_10 = FUNC_15(VAR_8->device, &VAR_8->info.bIfaceIndex,
     VAR_9->sc_xfer, VAR_6, VAR_4, VAR_9, &VAR_9->sc_mtx);
 if (VAR_10) {
  FUNC_0("error=%s\n", FUNC_14(VAR_10));
  goto detach;
 }
 FUNC_1(&VAR_9->sc_xmitq, VAR_3);

 FUNC_1(&VAR_9->sc_xmitq_hipri, VAR_3);



 if (FUNC_9(&VAR_5, &VAR_9->sc_node) != 0) {
  FUNC_11("%s: Could not create Netgraph node\n",
      VAR_9->sc_name);
  VAR_9->sc_node = ((void*)0);
  goto detach;
 }


 if (FUNC_10(VAR_9->sc_node, VAR_9->sc_name) != 0) {
  FUNC_11("%s: Could not name node\n",
      VAR_9->sc_name);
  FUNC_3(VAR_9->sc_node);
  VAR_9->sc_node = ((void*)0);
  goto detach;
 }
 FUNC_2(VAR_9->sc_node, VAR_9);



 return (0);

detach:
 FUNC_13(VAR_7);
 return (VAR_0);
}
