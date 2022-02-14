
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct taskqgroup {int dummy; } ;
typedef TYPE_1__* iflib_txq_t ;
typedef TYPE_2__* iflib_rxq_t ;
typedef TYPE_3__* iflib_fl_t ;
typedef int if_t ;
typedef TYPE_4__* if_ctx_t ;
typedef int device_t ;
struct TYPE_28__ {int * gt_uniq; } ;
struct TYPE_27__ {int ifc_flags; struct TYPE_27__* ifc_softc; int ifc_dev; TYPE_6__ ifc_vflr_task; TYPE_6__ ifc_admin_task; TYPE_2__* ifc_rxqs; TYPE_1__* ifc_txqs; int * ifc_led_dev; int ifc_ifp; } ;
struct TYPE_26__ {TYPE_4__* ifl_rx_bitmap; } ;
struct TYPE_25__ {int ifr_nfl; TYPE_3__* ifr_fl; TYPE_6__ ifr_task; } ;
struct TYPE_24__ {TYPE_6__ ift_task; int ift_timer; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (TYPE_4__*) ;
 int FUNC_22 (TYPE_4__*) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int ) ;
 struct taskqgroup* VAR_4 ;
 struct taskqgroup* VAR_5 ;
 int FUNC_25 (struct taskqgroup*,TYPE_6__*) ;
 int FUNC_26 (TYPE_4__*) ;

int
FUNC_27(if_ctx_t VAR_6)
{
 if_t VAR_7 = VAR_6->ifc_ifp;
 iflib_txq_t VAR_8;
 iflib_rxq_t VAR_9;
 device_t VAR_10 = VAR_6->ifc_dev;
 int VAR_11, VAR_12;
 struct taskqgroup *VAR_13;
 iflib_fl_t VAR_14;


 if (FUNC_14(VAR_7)) {
  FUNC_10(VAR_10, "Vlan in use, detach first\n");
  return (VAR_0);
 }







 FUNC_6(VAR_6);
 VAR_6->ifc_flags |= VAR_1;
 FUNC_7(VAR_6);


 FUNC_22(VAR_6);

 FUNC_17(VAR_7);
 FUNC_12(VAR_7);

 FUNC_1(VAR_6);
 FUNC_20(VAR_6);
 FUNC_2(VAR_6);

 FUNC_18(VAR_6);
 if (VAR_6->ifc_led_dev != ((void*)0))
  FUNC_23(VAR_6->ifc_led_dev);

 VAR_13 = VAR_5;
 for (VAR_8 = VAR_6->ifc_txqs, VAR_11 = 0; VAR_11 < FUNC_5(VAR_6); VAR_11++, VAR_8++) {
  FUNC_9(&VAR_8->ift_timer);
  if (VAR_8->ift_task.gt_uniq != ((void*)0))
   FUNC_25(VAR_13, &VAR_8->ift_task);
 }
 for (VAR_11 = 0, VAR_9 = VAR_6->ifc_rxqs; VAR_11 < FUNC_4(VAR_6); VAR_11++, VAR_9++) {
  if (VAR_9->ifr_task.gt_uniq != ((void*)0))
   FUNC_25(VAR_13, &VAR_9->ifr_task);

  for (VAR_12 = 0, VAR_14 = VAR_9->ifr_fl; VAR_12 < VAR_9->ifr_nfl; VAR_12++, VAR_14++)
   FUNC_13(VAR_14->ifl_rx_bitmap, VAR_3);
 }
 VAR_13 = VAR_4;
 if (VAR_6->ifc_admin_task.gt_uniq != ((void*)0))
  FUNC_25(VAR_13, &VAR_6->ifc_admin_task);
 if (VAR_6->ifc_vflr_task.gt_uniq != ((void*)0))
  FUNC_25(VAR_13, &VAR_6->ifc_vflr_task);
 FUNC_1(VAR_6);
 FUNC_3(VAR_6);
 FUNC_2(VAR_6);


 FUNC_16(VAR_6);

 FUNC_8(VAR_10);

 FUNC_21(VAR_6);
 FUNC_19(VAR_6);

 FUNC_15(VAR_6);

 FUNC_11(VAR_6->ifc_dev, ((void*)0));
 if (VAR_6->ifc_flags & VAR_2)
  FUNC_13(VAR_6->ifc_softc, VAR_3);
 FUNC_26(VAR_6);
 FUNC_13(VAR_6, VAR_3);
 return (0);
}
