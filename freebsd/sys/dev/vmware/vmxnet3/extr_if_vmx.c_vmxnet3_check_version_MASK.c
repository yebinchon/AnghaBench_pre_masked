
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmxnet3_softc {int vmx_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct vmxnet3_softc*,int ) ;
 int FUNC_2 (struct vmxnet3_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct vmxnet3_softc *VAR_3)
{
 device_t VAR_4;
 uint32_t VAR_5;

 VAR_4 = VAR_3->vmx_dev;

 VAR_5 = FUNC_1(VAR_3, VAR_2);
 if ((VAR_5 & 0x01) == 0) {
  FUNC_0(VAR_4, "unsupported hardware version %#x\n",
      VAR_5);
  return (VAR_0);
 }
 FUNC_2(VAR_3, VAR_2, 1);

 VAR_5 = FUNC_1(VAR_3, VAR_1);
 if ((VAR_5 & 0x01) == 0) {
  FUNC_0(VAR_4, "unsupported UPT version %#x\n", VAR_5);
  return (VAR_0);
 }
 FUNC_2(VAR_3, VAR_1, 1);

 return (0);
}
