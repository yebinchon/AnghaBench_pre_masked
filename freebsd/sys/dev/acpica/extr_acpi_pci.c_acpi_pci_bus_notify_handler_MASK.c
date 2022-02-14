
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* device_t ;
typedef int UINT32 ;
typedef int ACPI_HANDLE ;



 int FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (void*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(ACPI_HANDLE VAR_1, UINT32 VAR_2, void *VAR_3)
{
 device_t VAR_4;

 VAR_4 = VAR_3;

 switch (VAR_2) {
 case 128:
  FUNC_2(&VAR_0);
  FUNC_0(VAR_4);
  FUNC_3(&VAR_0);
  break;
 default:
  FUNC_1(VAR_4, "unknown notify %#x\n", VAR_2);
  break;
 }
}
