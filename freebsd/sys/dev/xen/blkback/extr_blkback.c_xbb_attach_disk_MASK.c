
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xs_watch {int * node; scalar_t__ callback_data; } ;
struct xbb_softc {int hotplug_done; scalar_t__ dev; int * io_taskqueue; int sector_size; void* xbb_stats_in; void* xbb_stats; int * dev_name; int flags; int * dev_mode; int * dev_type; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 struct xbb_softc* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 void* FUNC_3 (char*,int ,int ,int ,int,int ) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *,char) ;
 int * FUNC_6 (int ,int ,int ,int **) ;
 int FUNC_7 (int **,int,int ,char*,int ) ;
 int VAR_10 ;
 int FUNC_8 (struct xbb_softc*,int,char*,...) ;
 int FUNC_9 (struct xbb_softc*) ;
 int FUNC_10 (struct xbb_softc*) ;
 int FUNC_11 (struct xbb_softc*) ;
 int * FUNC_12 (scalar_t__) ;
 int * FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (int ,int *,char*,int *,int **,int *) ;
 int FUNC_16 (int ,int *,char*,char*) ;
 int FUNC_17 (struct xs_watch*) ;

__attribute__((used)) static void
FUNC_18(struct xs_watch *VAR_11, const char **VAR_12, unsigned int VAR_13)
{
 device_t VAR_14;
 struct xbb_softc *VAR_15;
 int VAR_16;

 VAR_14 = (device_t) VAR_11->callback_data;
 VAR_15 = FUNC_1(VAR_14);

 VAR_16 = FUNC_15(VAR_8, FUNC_12(VAR_14), "physical-device-path",
     ((void*)0), &VAR_15->dev_name, ((void*)0));
 if (VAR_16 != 0)
  return;

 FUNC_17(VAR_11);
 FUNC_4(VAR_11->node, VAR_5);
 VAR_11->node = ((void*)0);


 VAR_16 = FUNC_15(VAR_8, FUNC_13(VAR_15->dev),
     "device-type", ((void*)0), &VAR_15->dev_type,
     ((void*)0));
 if (VAR_16 != 0)
  VAR_15->dev_type = ((void*)0);

 VAR_16 = FUNC_15(VAR_8, FUNC_12(VAR_14),
                          "mode", ((void*)0), &VAR_15->dev_mode,
                          ((void*)0));
 if (VAR_16 != 0) {
  FUNC_8(VAR_15, VAR_16, "reading backend fields at %s",
      FUNC_12(VAR_14));
                return;
        }


 if (FUNC_5(VAR_15->dev_mode, 'w') == ((void*)0))
  VAR_15->flags |= VAR_7;





 VAR_16 = FUNC_10(VAR_15);
 if (VAR_16 != 0) {
  FUNC_8(VAR_15, VAR_16, "Unable to open %s",
      VAR_15->dev_name);
  return;
 }


 VAR_15->xbb_stats = FUNC_3("xbb", FUNC_2(VAR_15->dev),
        VAR_15->sector_size,
        VAR_0,
        VAR_2
      | VAR_3,
        VAR_1);

 VAR_15->xbb_stats_in = FUNC_3("xbbi", FUNC_2(VAR_15->dev),
           VAR_15->sector_size,
           VAR_0,
           VAR_2
         | VAR_3,
           VAR_1);



 FUNC_11(VAR_15);





 VAR_15->io_taskqueue = FUNC_6(FUNC_0(VAR_14),
        VAR_4,
        VAR_10,
                  &VAR_15->io_taskqueue);
 if (VAR_15->io_taskqueue == ((void*)0)) {
  FUNC_8(VAR_15, VAR_16, "Unable to create taskqueue");
  return;
 }

 FUNC_7(&VAR_15->io_taskqueue,
                   1,
                VAR_6,

    "%s taskq", FUNC_0(VAR_14));


 VAR_16 = FUNC_16(VAR_8, FUNC_12(VAR_15->dev),
     "hotplug-status", "connected");
 if (VAR_16) {
  FUNC_8(VAR_15, VAR_16, "writing %s/hotplug-status",
      FUNC_12(VAR_15->dev));
  return;
 }

 VAR_15->hotplug_done = 1;


 if (FUNC_14(VAR_15->dev) == VAR_9)
  FUNC_9(VAR_15);
}
