
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* if_ctx_t ;
struct TYPE_5__ {scalar_t__ isc_intr; } ;
struct TYPE_6__ {int * ifc_msix_mem; int ifc_dev; TYPE_1__ ifc_softc_ctx; int ifc_legacy_irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(if_ctx_t VAR_3)
{

 if (VAR_3->ifc_softc_ctx.isc_intr != VAR_1) {
  FUNC_1(VAR_3, &VAR_3->ifc_legacy_irq);
 }
 if (VAR_3->ifc_softc_ctx.isc_intr != VAR_0) {
  FUNC_2(VAR_3->ifc_dev);
 }
 if (VAR_3->ifc_msix_mem != ((void*)0)) {
  FUNC_0(VAR_3->ifc_dev, VAR_2,
      FUNC_3(VAR_3->ifc_msix_mem), VAR_3->ifc_msix_mem);
  VAR_3->ifc_msix_mem = ((void*)0);
 }
}
