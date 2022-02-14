
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ n_alloc; } ;
struct sfxge_softc {int enp; TYPE_1__ intr; } ;
typedef int limits ;
struct TYPE_6__ {scalar_t__ edl_max_rxq_count; scalar_t__ edl_min_rxq_count; scalar_t__ edl_max_txq_count; scalar_t__ edl_min_txq_count; scalar_t__ edl_max_evq_count; scalar_t__ edl_min_evq_count; } ;
typedef TYPE_2__ efx_drv_limits_t ;


 scalar_t__ FUNC_0 (struct sfxge_softc*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct sfxge_softc *VAR_0)
{
 efx_drv_limits_t VAR_1;

 FUNC_2(&VAR_1, 0, sizeof(VAR_1));


 VAR_1.edl_min_evq_count = VAR_1.edl_max_evq_count =
     VAR_0->intr.n_alloc;
 VAR_1.edl_min_txq_count = VAR_1.edl_max_txq_count =
     VAR_0->intr.n_alloc + FUNC_0(VAR_0) - 1;
 VAR_1.edl_min_rxq_count = VAR_1.edl_max_rxq_count =
     VAR_0->intr.n_alloc;

 return (FUNC_1(VAR_0->enp, &VAR_1));
}
