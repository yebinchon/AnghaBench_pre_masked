
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ device_t ;
typedef int UINT32 ;
typedef int ACPI_HANDLE ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ,char*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_7(ACPI_HANDLE VAR_1, UINT32 VAR_2, void *VAR_3)
{
 device_t VAR_4;

 VAR_4 = (device_t) VAR_3;
 FUNC_2(VAR_4, FUNC_3(VAR_4),
      "got notification %#x\n", VAR_2);

 FUNC_0(VAR_0);
 switch (VAR_2) {
 case 130:
 case 129:
  FUNC_4(VAR_4);
  break;
 case 128:
  FUNC_5(VAR_4);
  break;
 default:
  FUNC_6(VAR_4, "unknown notify %#x\n", VAR_2);
  break;
 }
 FUNC_1(VAR_0);
}
