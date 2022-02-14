
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ,int ,int,int ,int *,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(device_t VAR_3)
{
 ACPI_STATUS VAR_4;
 ACPI_HANDLE VAR_5;

 VAR_4 = FUNC_1(VAR_0, "\\_SB_", &VAR_5);
 if (FUNC_0(VAR_4)) {
  FUNC_2(VAR_1, VAR_5,
      100, VAR_2, ((void*)0), VAR_3, ((void*)0));
 }
}
