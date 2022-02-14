
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_softc {int vmx_dev; TYPE_1__* vmx_scctx; } ;
typedef TYPE_1__* if_softc_ctx_t ;
struct TYPE_2__ {int isc_nrxqsets; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct vmxnet3_softc*,int ) ;
 int FUNC_4 (struct vmxnet3_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct vmxnet3_softc *VAR_1)
{
 if_softc_ctx_t VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->vmx_scctx;

 if (FUNC_3(VAR_1, VAR_0) != 0) {
  FUNC_2(VAR_1->vmx_dev, "device enable command failed!\n");
  return (1);
 }


 for (VAR_3 = 0; VAR_3 < VAR_2->isc_nrxqsets; VAR_3++) {
  FUNC_4(VAR_1, FUNC_0(VAR_3), 0);
  FUNC_4(VAR_1, FUNC_1(VAR_3), 0);
 }

 return (0);
}
