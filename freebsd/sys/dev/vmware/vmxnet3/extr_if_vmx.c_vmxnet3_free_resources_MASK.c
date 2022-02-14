
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_softc {int * vmx_res1; int * vmx_res0; int vmx_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct vmxnet3_softc *VAR_1)
{
 device_t VAR_2;

 VAR_2 = VAR_1->vmx_dev;

 if (VAR_1->vmx_res0 != ((void*)0)) {
  FUNC_0(VAR_2, VAR_0,
      FUNC_1(VAR_1->vmx_res0), VAR_1->vmx_res0);
  VAR_1->vmx_res0 = ((void*)0);
 }

 if (VAR_1->vmx_res1 != ((void*)0)) {
  FUNC_0(VAR_2, VAR_0,
      FUNC_1(VAR_1->vmx_res1), VAR_1->vmx_res1);
  VAR_1->vmx_res1 = ((void*)0);
 }
}
