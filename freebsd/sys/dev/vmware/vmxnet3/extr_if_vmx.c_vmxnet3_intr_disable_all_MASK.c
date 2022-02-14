
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_softc {TYPE_1__* vmx_ds; } ;
typedef int if_ctx_t ;
struct TYPE_2__ {int ictrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vmxnet3_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct vmxnet3_softc*,int) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_2)
{
 struct vmxnet3_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2);





 if (VAR_3->vmx_ds != ((void*)0))
  VAR_3->vmx_ds->ictrl |= VAR_0;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_1(VAR_3, VAR_4);
}
