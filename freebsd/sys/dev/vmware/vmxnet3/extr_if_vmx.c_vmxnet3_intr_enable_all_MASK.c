
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmxnet3_softc {TYPE_1__* vmx_ds; TYPE_2__* vmx_scctx; } ;
typedef TYPE_2__* if_softc_ctx_t ;
typedef int if_ctx_t ;
struct TYPE_4__ {int isc_vectors; } ;
struct TYPE_3__ {int ictrl; } ;


 int VAR_0 ;
 struct vmxnet3_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct vmxnet3_softc*,int) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_1)
{
 struct vmxnet3_softc *VAR_2;
 if_softc_ctx_t VAR_3;
 int VAR_4;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = VAR_2->vmx_scctx;
 VAR_2->vmx_ds->ictrl &= ~VAR_0;
 for (VAR_4 = 0; VAR_4 < VAR_3->isc_vectors; VAR_4++)
  FUNC_1(VAR_2, VAR_4);
}
