
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vmxnet3_softc {int vmx_media; int vmx_flags; } ;
typedef TYPE_1__* if_softc_ctx_t ;
typedef int if_ctx_t ;
typedef int device_t ;
struct TYPE_3__ {int isc_nrxqsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct vmxnet3_softc* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ,int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct vmxnet3_softc*) ;
 int FUNC_6 (struct vmxnet3_softc*) ;
 int FUNC_7 (struct vmxnet3_softc*) ;

__attribute__((used)) static int
FUNC_8(if_ctx_t VAR_3)
{
 device_t VAR_4;
 if_softc_ctx_t VAR_5;
 struct vmxnet3_softc *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_0(VAR_3);
 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = FUNC_1(VAR_3);

 if (VAR_5->isc_nrxqsets > 1)
  VAR_6->vmx_flags |= VAR_2;

 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7)
  goto fail;

 FUNC_6(VAR_6);
 FUNC_7(VAR_6);

 FUNC_3(VAR_6->vmx_media, VAR_1 | VAR_0, 0, ((void*)0));
 FUNC_4(VAR_6->vmx_media, VAR_1 | VAR_0);

fail:
 return (VAR_7);
}
