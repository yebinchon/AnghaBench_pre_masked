
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {uintptr_t callback_data; int * node; int callback; } ;
struct xbb_softc {TYPE_1__ hotplug_watch; scalar_t__ dev; int hotplug_done; int lock; int io_task; int otherend_id; } ;
struct sbuf {int dummy; } ;
typedef scalar_t__ device_t ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ,struct xbb_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 struct xbb_softc* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int *,int ) ;
 int FUNC_8 (struct sbuf*) ;
 int FUNC_9 (struct sbuf*) ;
 int * FUNC_10 (int ,int ) ;
 int VAR_5 ;
 int FUNC_11 (struct xbb_softc*,int,char*,int *) ;
 int VAR_6 ;
 int * FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,int ) ;
 struct sbuf* FUNC_15 (int *,char*) ;
 int FUNC_16 (int ,int *,char*,char*,...) ;
 int FUNC_17 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_7)
{
 struct xbb_softc *VAR_8;
 int VAR_9;
 u_int VAR_10;
 struct sbuf *VAR_11;

 FUNC_0("Attaching to %s\n", FUNC_12(VAR_7));






 VAR_8 = FUNC_4(VAR_7);
 VAR_8->dev = VAR_7;
 VAR_8->otherend_id = FUNC_13(VAR_7);
 FUNC_2(&VAR_8->io_task, 0, VAR_6, VAR_8);
 FUNC_7(&VAR_8->lock, FUNC_3(VAR_7), ((void*)0), VAR_0);





 VAR_9 = FUNC_16(VAR_3, FUNC_12(VAR_8->dev),
     "feature-barrier", "1");
 if (VAR_9) {
  FUNC_11(VAR_8, VAR_9, "writing %s/feature-barrier",
      FUNC_12(VAR_8->dev));
  return (VAR_9);
 }

 VAR_9 = FUNC_16(VAR_3, FUNC_12(VAR_8->dev),
     "feature-flush-cache", "1");
 if (VAR_9) {
  FUNC_11(VAR_8, VAR_9, "writing %s/feature-flush-cache",
      FUNC_12(VAR_8->dev));
  return (VAR_9);
 }

 VAR_10 = FUNC_5(VAR_2) - 1;
 VAR_9 = FUNC_16(VAR_3, FUNC_12(VAR_8->dev),
     "max-ring-page-order", "%u", VAR_10);
 if (VAR_9) {
  FUNC_11(VAR_8, VAR_9, "writing %s/max-ring-page-order",
      FUNC_12(VAR_8->dev));
  return (VAR_9);
 }





 FUNC_1(!VAR_8->hotplug_done, ("Hotplug scripts already executed"));
 VAR_11 = FUNC_15(FUNC_12(VAR_8->dev), "physical-device-path");
 VAR_8->hotplug_watch.callback_data = (uintptr_t)VAR_7;
 VAR_8->hotplug_watch.callback = VAR_5;
 FUNC_1(VAR_8->hotplug_watch.node == ((void*)0), ("watch node already setup"));
 VAR_8->hotplug_watch.node = FUNC_10(FUNC_8(VAR_11), VAR_1);
 FUNC_9(VAR_11);
 VAR_9 = FUNC_17(&VAR_8->hotplug_watch);
 if (VAR_9 != 0) {
  FUNC_11(VAR_8, VAR_9, "failed to create watch on %s",
      VAR_8->hotplug_watch.node);
  FUNC_6(VAR_8->hotplug_watch.node, VAR_1);
  return (VAR_9);
 }


 FUNC_14(VAR_7, VAR_4);

 return (0);
}
