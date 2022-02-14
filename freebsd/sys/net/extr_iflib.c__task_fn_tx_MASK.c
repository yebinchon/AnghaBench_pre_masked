
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_2__* iflib_txq_t ;
typedef TYPE_3__* if_t ;
typedef TYPE_4__* if_ctx_t ;
struct TYPE_14__ {int ifc_sysctl_tx_abdicate; int ifc_flags; int ifc_softc; scalar_t__ (* isc_txd_credits_update ) (int ,int ,int) ;TYPE_3__* ifc_ifp; } ;
struct TYPE_13__ {int if_snd; } ;
struct TYPE_12__ {int ift_id; int ift_br; scalar_t__ ift_db_pending; TYPE_1__* ift_ifdi; int * ift_cpu_exec_count; TYPE_4__* ift_ctx; } ;
struct TYPE_11__ {int idi_map; int idi_tag; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ) ;
 size_t VAR_5 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,void**,int,int ,int) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_10 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_11(void *VAR_6)
{
 iflib_txq_t VAR_7 = VAR_6;
 if_ctx_t VAR_8 = VAR_7->ift_ctx;



 int VAR_9 = VAR_8->ifc_sysctl_tx_abdicate;




 if (!(FUNC_5(VAR_8->ifc_ifp) & VAR_3))
  return;
 if (VAR_7->ift_db_pending)
  FUNC_8(VAR_7->ift_br, (void **)&VAR_7, 1, VAR_4, VAR_9);
 else if (!VAR_9)
  FUNC_7(VAR_7->ift_br, VAR_4);



 if (VAR_9)
  FUNC_7(VAR_7->ift_br, VAR_4);
 if (VAR_8->ifc_flags & VAR_2)
  FUNC_1(VAR_8);
 else
  FUNC_2(VAR_8, VAR_7->ift_id);
}
