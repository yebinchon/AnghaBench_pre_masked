
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcma_devinfo {void* pmu_info; } ;
typedef int device_t ;
 int VAR_0 ;
 int VAR_1 ;
 struct bcma_devinfo* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, device_t VAR_3, int VAR_4, uintptr_t VAR_5)
{
 struct bcma_devinfo *VAR_6;

 VAR_6 = FUNC_0(VAR_3);

 switch (VAR_4) {
 case 129:
 case 134:
 case 131:
 case 133:
 case 128:
 case 132:
 case 136:
 case 135:
  return (VAR_0);
 case 130:
  VAR_6->pmu_info = (void *)VAR_5;
  return (0);
 default:
  return (VAR_1);
 }
}
