
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ device_t ;
typedef int UINT32 ;
typedef int ACPI_HANDLE ;





 int FUNC_0 (int ,int ,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,char*,int) ;

__attribute__((used)) static void
FUNC_2(ACPI_HANDLE VAR_2, UINT32 VAR_3, void *VAR_4)
{
    device_t VAR_5;

    VAR_5 = (device_t)VAR_4;
    switch (VAR_3) {
    case 130:
    case 129:
    case 128:

 FUNC_0(VAR_0, VAR_1, VAR_4);
 break;
    default:
 FUNC_1(VAR_5, "unknown notify %#x\n", VAR_3);
 break;
    }
}
