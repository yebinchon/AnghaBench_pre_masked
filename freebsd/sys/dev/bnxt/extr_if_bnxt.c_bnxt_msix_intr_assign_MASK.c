
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ id; } ;
struct TYPE_8__ {int irq; TYPE_1__ ring; } ;
struct TYPE_6__ {scalar_t__ id; } ;
struct bnxt_softc {TYPE_4__ def_cp_ring; int irq; struct bnxt_softc* rx_cp_rings; TYPE_3__* scctx; TYPE_2__ ring; } ;
typedef int irq_name ;
typedef int if_ctx_t ;
struct TYPE_7__ {int isc_nrxqsets; int isc_ntxqsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct bnxt_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,scalar_t__,int ,int ,struct bnxt_softc*,int,char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int ,int *,int,char*) ;
 int FUNC_6 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_7(if_ctx_t VAR_5, int VAR_6)
{
 struct bnxt_softc *VAR_7 = FUNC_2(VAR_5);
 int VAR_8;
 int VAR_9;
 char VAR_10[16];

 VAR_8 = FUNC_3(VAR_5, &VAR_7->def_cp_ring.irq,
     VAR_7->def_cp_ring.ring.id + 1, VAR_0,
     VAR_3, VAR_7, 0, "def_cp");
 if (VAR_8) {
  FUNC_0(FUNC_1(VAR_5),
      "Failed to register default completion ring handler\n");
  return VAR_8;
 }

 for (VAR_9=0; VAR_9<VAR_7->scctx->isc_nrxqsets; VAR_9++) {
  FUNC_6(VAR_10, sizeof(VAR_10), "rxq%d", VAR_9);
  VAR_8 = FUNC_3(VAR_5, &VAR_7->rx_cp_rings[VAR_9].irq,
      VAR_7->rx_cp_rings[VAR_9].ring.id + 1, VAR_1,
      VAR_4, &VAR_7->rx_cp_rings[VAR_9], VAR_9, VAR_10);
  if (VAR_8) {
   FUNC_0(FUNC_1(VAR_5),
       "Failed to register RX completion ring handler\n");
   VAR_9--;
   goto fail;
  }
 }

 for (VAR_9=0; VAR_9<VAR_7->scctx->isc_ntxqsets; VAR_9++)
  FUNC_5(VAR_5, ((void*)0), VAR_2, ((void*)0), VAR_9, "tx_cp");

 return VAR_8;

fail:
 for (; VAR_9>=0; VAR_9--)
  FUNC_4(VAR_5, &VAR_7->rx_cp_rings[VAR_9].irq);
 FUNC_4(VAR_5, &VAR_7->def_cp_ring.irq);
 return VAR_8;
}
