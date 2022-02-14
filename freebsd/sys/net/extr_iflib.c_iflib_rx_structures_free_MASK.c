
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* iflib_rxq_t ;
typedef TYPE_3__* if_shared_ctx_t ;
typedef TYPE_4__* if_ctx_t ;
struct TYPE_8__ {int isc_nrxqsets; } ;
struct TYPE_11__ {TYPE_2__* ifc_rxqs; int ifc_ifp; TYPE_1__ ifc_softc_ctx; TYPE_3__* ifc_sctx; } ;
struct TYPE_10__ {int isc_nrxqs; } ;
struct TYPE_9__ {int ifr_lc; int * ifr_ifdi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(if_ctx_t VAR_2)
{
 iflib_rxq_t VAR_3 = VAR_2->ifc_rxqs;
 if_shared_ctx_t VAR_4 = VAR_2->ifc_sctx;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2->ifc_softc_ctx.isc_nrxqsets; VAR_5++, VAR_3++) {
  for (VAR_6 = 0; VAR_6 < VAR_4->isc_nrxqs; VAR_6++)
   FUNC_2(&VAR_3->ifr_ifdi[VAR_6]);
  FUNC_3(VAR_3);




 }
 FUNC_0(VAR_2->ifc_rxqs, VAR_1);
 VAR_2->ifc_rxqs = ((void*)0);
}
