
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct taskqgroup {int dummy; } ;
typedef TYPE_1__* iflib_txq_t ;
typedef TYPE_2__* iflib_rxq_t ;
typedef TYPE_3__* iflib_fl_t ;
typedef int if_t ;
typedef TYPE_4__* if_ctx_t ;
struct TYPE_18__ {int * gt_uniq; } ;
struct TYPE_17__ {int ifc_flags; struct TYPE_17__* ifc_softc; TYPE_5__ ifc_vflr_task; TYPE_5__ ifc_admin_task; TYPE_2__* ifc_rxqs; TYPE_1__* ifc_txqs; int ifc_ifp; } ;
struct TYPE_16__ {TYPE_4__* ifl_rx_bitmap; } ;
struct TYPE_15__ {int ifr_nfl; TYPE_3__* ifr_fl; TYPE_5__ ifr_task; } ;
struct TYPE_14__ {TYPE_5__ ift_task; int ift_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 struct taskqgroup* VAR_2 ;
 struct taskqgroup* VAR_3 ;
 int FUNC_9 (struct taskqgroup*,TYPE_5__*) ;

int
FUNC_10(if_ctx_t VAR_4)
{
 if_t VAR_5 = VAR_4->ifc_ifp;
 iflib_txq_t VAR_6;
 iflib_rxq_t VAR_7;
 int VAR_8, VAR_9;
 struct taskqgroup *VAR_10;
 iflib_fl_t VAR_11;


 FUNC_8(VAR_4);

 FUNC_3(VAR_5);

 VAR_10 = VAR_3;
 for (VAR_6 = VAR_4->ifc_txqs, VAR_8 = 0; VAR_8 < FUNC_1(VAR_4); VAR_8++, VAR_6++) {
  FUNC_2(&VAR_6->ift_timer);
  if (VAR_6->ift_task.gt_uniq != ((void*)0))
   FUNC_9(VAR_10, &VAR_6->ift_task);
 }
 for (VAR_8 = 0, VAR_7 = VAR_4->ifc_rxqs; VAR_8 < FUNC_0(VAR_4); VAR_8++, VAR_7++) {
  if (VAR_7->ifr_task.gt_uniq != ((void*)0))
   FUNC_9(VAR_10, &VAR_7->ifr_task);

  for (VAR_9 = 0, VAR_11 = VAR_7->ifr_fl; VAR_9 < VAR_7->ifr_nfl; VAR_9++, VAR_11++)
   FUNC_4(VAR_11->ifl_rx_bitmap, VAR_1);
 }
 VAR_10 = VAR_2;
 if (VAR_4->ifc_admin_task.gt_uniq != ((void*)0))
  FUNC_9(VAR_10, &VAR_4->ifc_admin_task);
 if (VAR_4->ifc_vflr_task.gt_uniq != ((void*)0))
  FUNC_9(VAR_10, &VAR_4->ifc_vflr_task);

 FUNC_7(VAR_4);
 FUNC_6(VAR_4);

 FUNC_5(VAR_4);

 if (VAR_4->ifc_flags & VAR_0)
  FUNC_4(VAR_4->ifc_softc, VAR_1);
 FUNC_4(VAR_4, VAR_1);
 return (0);
}
