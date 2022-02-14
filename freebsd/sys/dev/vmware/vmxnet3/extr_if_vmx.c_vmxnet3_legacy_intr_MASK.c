
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmxnet3_softc {scalar_t__ vmx_intr_mask_mode; TYPE_1__* vmx_ds; int vmx_ctx; TYPE_2__* vmx_scctx; } ;
typedef TYPE_2__* if_softc_ctx_t ;
typedef int if_ctx_t ;
struct TYPE_4__ {scalar_t__ isc_intr; } ;
struct TYPE_3__ {scalar_t__ event; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct vmxnet3_softc*,int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_5)
{
 struct vmxnet3_softc *VAR_6;
 if_softc_ctx_t VAR_7;
 if_ctx_t VAR_8;

 VAR_6 = VAR_5;
 VAR_7 = VAR_6->vmx_scctx;
 VAR_8 = VAR_6->vmx_ctx;






 if (VAR_7->isc_intr == VAR_2) {
  if (FUNC_2(VAR_6, VAR_3) == 0)
   return (VAR_0);
 }
 if (VAR_6->vmx_intr_mask_mode == VAR_4)
  FUNC_1(VAR_8);

 if (VAR_6->vmx_ds->event != 0)
  FUNC_0(VAR_8);






 return (VAR_1);
}
