
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmxnet3_softc {int vmx_ioh1; int vmx_iot1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (struct vmxnet3_softc*,int ) ;
 int FUNC_2 (struct vmxnet3_softc*,int ) ;

__attribute__((used)) static uint32_t
FUNC_3(struct vmxnet3_softc *VAR_3, uint32_t VAR_4)
{

 FUNC_2(VAR_3, VAR_4);
 FUNC_0(VAR_3->vmx_iot1, VAR_3->vmx_ioh1, 0, 0,
     VAR_0 | VAR_1);
 return (FUNC_1(VAR_3, VAR_2));
}
