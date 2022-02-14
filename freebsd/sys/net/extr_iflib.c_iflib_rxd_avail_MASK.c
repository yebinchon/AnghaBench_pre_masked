
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int qidx_t ;
typedef TYPE_2__* iflib_rxq_t ;
typedef TYPE_3__* iflib_fl_t ;
typedef TYPE_4__* if_ctx_t ;
struct TYPE_10__ {int (* isc_rxd_available ) (int ,int ,int ,int ) ;int ifc_softc; } ;
struct TYPE_9__ {TYPE_1__* ifl_ifdi; } ;
struct TYPE_8__ {scalar_t__ ifr_nfl; int ifr_id; TYPE_3__* ifr_fl; } ;
struct TYPE_7__ {int idi_map; int idi_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(if_ctx_t VAR_2, iflib_rxq_t VAR_3, qidx_t VAR_4, qidx_t VAR_5)
{
 iflib_fl_t VAR_6;
 u_int VAR_7;

 for (VAR_7 = 0, VAR_6 = &VAR_3->ifr_fl[0]; VAR_7 < VAR_3->ifr_nfl; VAR_7++, VAR_6++)
  FUNC_0(VAR_6->ifl_ifdi->idi_tag, VAR_6->ifl_ifdi->idi_map,
      VAR_0 | VAR_1);
 return (VAR_2->isc_rxd_available(VAR_2->ifc_softc, VAR_3->ifr_id, VAR_4,
     VAR_5));
}
