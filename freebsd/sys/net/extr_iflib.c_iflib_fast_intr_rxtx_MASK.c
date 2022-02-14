
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct grouptask {int dummy; } ;
typedef size_t qidx_t ;
typedef TYPE_4__* iflib_txq_t ;
typedef TYPE_5__* iflib_rxq_t ;
typedef TYPE_6__* iflib_filter_info_t ;
typedef TYPE_7__* if_ctx_t ;
struct TYPE_19__ {int ifc_flags; TYPE_2__* ifc_sctx; int (* isc_txd_credits_update ) (void*,size_t,int) ;TYPE_4__* ifc_txqs; void* ifc_softc; } ;
struct TYPE_18__ {int (* ifi_filter ) (int ) ;int ifi_filter_arg; int ifi_ctx; struct grouptask* ifi_task; } ;
struct TYPE_17__ {int ifr_ntxqirq; size_t* ifr_txqid; int ifr_cq_cidx; int ifr_id; TYPE_3__* ifr_fl; TYPE_7__* ifr_ctx; } ;
struct TYPE_16__ {struct grouptask ift_task; TYPE_1__* ift_ifdi; } ;
struct TYPE_15__ {int ifl_cidx; } ;
struct TYPE_14__ {int isc_flags; } ;
struct TYPE_13__ {int idi_map; int idi_tag; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct grouptask*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (TYPE_7__*,size_t) ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (TYPE_7__*,TYPE_5__*,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (void*,size_t,int) ;

__attribute__((used)) static int
FUNC_10(void *VAR_9)
{
 iflib_filter_info_t VAR_10 = VAR_9;
 struct grouptask *VAR_11 = VAR_10->ifi_task;
 if_ctx_t VAR_12;
 iflib_rxq_t VAR_13 = (iflib_rxq_t)VAR_10->ifi_ctx;
 iflib_txq_t VAR_14;
 void *VAR_15;
 int VAR_16, VAR_17, VAR_18;
 qidx_t VAR_19;
 bool VAR_20, VAR_21;

 if (!VAR_7)
  return (VAR_3);

 FUNC_0(VAR_6);
 if (VAR_10->ifi_filter != ((void*)0)) {
  VAR_18 = VAR_10->ifi_filter(VAR_10->ifi_filter_arg);
  if ((VAR_18 & VAR_2) == 0)
   return (VAR_18);
 }

 VAR_12 = VAR_13->ifr_ctx;
 VAR_15 = VAR_12->ifc_softc;
 VAR_20 = 0;
 VAR_21 = !!(VAR_12->ifc_flags & VAR_4);
 FUNC_5(VAR_13->ifr_ntxqirq);
 for (VAR_16 = 0; VAR_16 < VAR_13->ifr_ntxqirq; VAR_16++) {
  VAR_19 = VAR_13->ifr_txqid[VAR_16];
  VAR_14 = &VAR_12->ifc_txqs[VAR_19];
  FUNC_6(VAR_14->ift_ifdi->idi_tag, VAR_14->ift_ifdi->idi_map,
      VAR_0);
  if (!VAR_12->isc_txd_credits_update(VAR_15, VAR_19, 0)) {
   if (VAR_21)
    VAR_20 = 1;
   else
    FUNC_4(VAR_12, VAR_19);
   continue;
  }
  FUNC_1(&VAR_14->ift_task);
 }
 if (VAR_12->ifc_sctx->isc_flags & VAR_5)
  VAR_17 = VAR_13->ifr_cq_cidx;
 else
  VAR_17 = VAR_13->ifr_fl[0].ifl_cidx;
 if (FUNC_7(VAR_12, VAR_13, VAR_17, 1))
  FUNC_1(VAR_11);
 else {
  if (VAR_21)
   VAR_20 = 1;
  else
   FUNC_3(VAR_12, VAR_13->ifr_id);
  FUNC_0(VAR_8);
 }
 if (VAR_20)
  FUNC_2(VAR_12);
 return (VAR_1);
}
