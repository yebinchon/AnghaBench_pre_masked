
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4)
{
 int VAR_5;


 if ((FUNC_4(VAR_4) == VAR_3) &&
     ((FUNC_2(VAR_4) == VAR_1) ||
      (FUNC_2(VAR_4) == VAR_2))) {
  VAR_5 = FUNC_3(VAR_4);
  switch (VAR_5) {
  case 129:
   FUNC_1(VAR_4, "Myri10G-PCIE-8A");
   break;
  case 128:
   FUNC_1(VAR_4, "Myri10G-PCIE-8B");
   break;
  default:
   FUNC_1(VAR_4, "Myri10G-PCIE-8??");
   FUNC_0(VAR_4, "Unrecognized rev %d NIC\n",
          VAR_5);
   break;
  }
  return 0;
 }
 return VAR_0;
}
