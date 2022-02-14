
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_softc {int vmx_lladdr; int vmx_ifp; TYPE_1__* vmx_scctx; } ;
typedef TYPE_1__* if_softc_ctx_t ;
typedef int if_ctx_t ;
struct TYPE_2__ {scalar_t__ isc_max_frame_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct vmxnet3_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct vmxnet3_softc*) ;
 int FUNC_6 (struct vmxnet3_softc*) ;
 int FUNC_7 (struct vmxnet3_softc*) ;
 int FUNC_8 (struct vmxnet3_softc*) ;
 int FUNC_9 (struct vmxnet3_softc*) ;
 int FUNC_10 (struct vmxnet3_softc*) ;

__attribute__((used)) static void
FUNC_11(if_ctx_t VAR_4)
{
 struct vmxnet3_softc *VAR_5;
 if_softc_ctx_t VAR_6;

 VAR_5 = FUNC_4(VAR_4);
 VAR_6 = VAR_5->vmx_scctx;

 VAR_6->isc_max_frame_size = FUNC_2(FUNC_3(VAR_4)) +
     VAR_2 + VAR_3 + VAR_1;


 FUNC_1(FUNC_0(VAR_5->vmx_ifp), VAR_5->vmx_lladdr, VAR_0);
 FUNC_10(VAR_5);

 FUNC_9(VAR_5);
 FUNC_7(VAR_5);

 FUNC_5(VAR_5);

 FUNC_8(VAR_5);
 FUNC_6(VAR_5);
}
