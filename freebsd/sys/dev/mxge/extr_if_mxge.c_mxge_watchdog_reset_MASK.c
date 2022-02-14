
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct pci_devinfo {int dummy; } ;
struct TYPE_11__ {int mtx; } ;
struct mxge_slice_state {TYPE_1__ tx; } ;
struct TYPE_12__ {int num_slices; int dying; int co_hdl; int dev; int watchdog_resets; struct mxge_slice_state* ss; TYPE_9__* ifp; scalar_t__ link_state; } ;
typedef TYPE_2__ mxge_softc_t ;
struct TYPE_13__ {int if_drv_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int ,TYPE_2__*) ;
 struct pci_devinfo* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (TYPE_9__*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (struct mxge_slice_state*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (int ,struct pci_devinfo*) ;
 int FUNC_14 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_15(mxge_softc_t *VAR_7)
{
 struct pci_devinfo *VAR_8;
 struct mxge_slice_state *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13 = 1;
 uint32_t VAR_14;
 uint16_t VAR_15;

 VAR_10 = VAR_0;

 FUNC_3(VAR_7->dev, "Watchdog reset!\n");
 VAR_15 = FUNC_14(VAR_7->dev, VAR_4, 2);
 if (VAR_15 == 0xffff) {





  FUNC_0(1000*100);
  VAR_15 = FUNC_14(VAR_7->dev, VAR_4, 2);
  if (VAR_15 == 0xffff) {
   FUNC_3(VAR_7->dev, "NIC disappeared!\n");
  }
 }
 if ((VAR_15 & VAR_3) == 0) {

  VAR_14 = FUNC_10(VAR_7);
  FUNC_3(VAR_7->dev, "NIC rebooted, status = 0x%x\n",
         VAR_14);
  VAR_11 = VAR_7->ifp->if_drv_flags & VAR_1;
  if (VAR_11) {







   if (VAR_7->link_state) {
    VAR_7->link_state = 0;
    FUNC_4(VAR_7->ifp,
           VAR_2);
   }




   for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
    VAR_9 = &VAR_7->ss[VAR_12];
    FUNC_5(&VAR_9->tx.mtx);
   }
   FUNC_7(VAR_7, 1);
  }

  VAR_8 = FUNC_2(VAR_7->dev);
  FUNC_13(VAR_7->dev, VAR_8);


  FUNC_11(VAR_7);


  VAR_10 = FUNC_8(VAR_7, 0);
  if (VAR_10) {
   FUNC_3(VAR_7->dev,
          "Unable to re-load f/w\n");
  }
  if (VAR_11) {
   if (!VAR_10)
    VAR_10 = FUNC_9(VAR_7);

   for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
    VAR_9 = &VAR_7->ss[VAR_12];



    FUNC_6(&VAR_9->tx.mtx);
   }
  }
  VAR_7->watchdog_resets++;
 } else {
  FUNC_3(VAR_7->dev,
         "NIC did not reboot, not resetting\n");
  VAR_10 = 0;
 }
 if (VAR_10) {
  FUNC_3(VAR_7->dev, "watchdog reset failed\n");
 } else {
  if (VAR_7->dying == 2)
   VAR_7->dying = 0;
  FUNC_1(&VAR_7->co_hdl, VAR_6, VAR_5, VAR_7);
 }
}
