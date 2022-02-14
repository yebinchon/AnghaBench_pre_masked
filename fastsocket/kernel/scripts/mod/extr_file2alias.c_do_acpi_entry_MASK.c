
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device_id {char* id; } ;


 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0,
   struct acpi_device_id *VAR_1, char *VAR_2)
{
 FUNC_0(VAR_2, "acpi*:%s:*", VAR_1->id);
 return 1;
}
