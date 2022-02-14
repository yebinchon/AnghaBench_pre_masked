
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_softc {int * vmx_res1; void* vmx_ioh1; void* vmx_iot1; int * vmx_res0; void* vmx_ioh0; void* vmx_iot0; int vmx_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct vmxnet3_softc *VAR_3)
{
 device_t VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->vmx_dev;

 VAR_5 = FUNC_0(0);
 VAR_3->vmx_res0 = FUNC_1(VAR_4, VAR_2, &VAR_5,
     VAR_1);
 if (VAR_3->vmx_res0 == ((void*)0)) {
  FUNC_2(VAR_4,
      "could not map BAR0 memory\n");
  return (VAR_0);
 }

 VAR_3->vmx_iot0 = FUNC_4(VAR_3->vmx_res0);
 VAR_3->vmx_ioh0 = FUNC_3(VAR_3->vmx_res0);

 VAR_5 = FUNC_0(1);
 VAR_3->vmx_res1 = FUNC_1(VAR_4, VAR_2, &VAR_5,
     VAR_1);
 if (VAR_3->vmx_res1 == ((void*)0)) {
  FUNC_2(VAR_4,
      "could not map BAR1 memory\n");
  return (VAR_0);
 }

 VAR_3->vmx_iot1 = FUNC_4(VAR_3->vmx_res1);
 VAR_3->vmx_ioh1 = FUNC_3(VAR_3->vmx_res1);

 return (0);
}
