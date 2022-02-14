
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* iflib_rxq_t ;
typedef TYPE_3__* if_ctx_t ;
struct TYPE_6__ {int isc_nrxqsets; int * isc_nrxd; } ;
struct TYPE_8__ {int ifc_ifp; TYPE_2__* ifc_rxqs; int ifc_dev; TYPE_1__ ifc_softc_ctx; } ;
struct TYPE_7__ {size_t ifr_fl_offset; int ifr_lc; int ifr_id; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(if_ctx_t VAR_2)
{
 iflib_rxq_t VAR_3 = VAR_2->ifc_rxqs;
 int VAR_4;




 for (VAR_4 = 0; VAR_4 < VAR_2->ifc_softc_ctx.isc_nrxqsets; VAR_4++, VAR_3++) {
  FUNC_0(VAR_2, VAR_3->ifr_id);
 }
 return (0);
}
