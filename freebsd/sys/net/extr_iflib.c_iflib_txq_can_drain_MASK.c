
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct ifmp_ring {TYPE_2__* cookie; } ;
typedef TYPE_2__* iflib_txq_t ;
typedef TYPE_3__* if_ctx_t ;
struct TYPE_8__ {int (* isc_txd_credits_update ) (int ,int ,int) ;int ifc_softc; } ;
struct TYPE_7__ {int ift_id; TYPE_1__* ift_ifdi; TYPE_3__* ift_ctx; } ;
struct TYPE_6__ {int idi_map; int idi_tag; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static uint32_t
FUNC_4(struct ifmp_ring *VAR_1)
{
 iflib_txq_t VAR_2 = VAR_1->cookie;
 if_ctx_t VAR_3 = VAR_2->ift_ctx;

 if (FUNC_1(VAR_2) > FUNC_0(VAR_3) + 2)
  return (1);
 FUNC_2(VAR_2->ift_ifdi->idi_tag, VAR_2->ift_ifdi->idi_map,
     VAR_0);
 return (VAR_3->isc_txd_credits_update(VAR_3->ifc_softc, VAR_2->ift_id,
     0));
}
