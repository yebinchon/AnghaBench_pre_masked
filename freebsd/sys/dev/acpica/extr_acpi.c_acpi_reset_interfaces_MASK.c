
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_interface {int num; int * data; } ;
typedef int device_t ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct acpi_interface*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int ,struct acpi_interface*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ,char*,int ,...) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_3)
{
 struct acpi_interface VAR_4;
 ACPI_STATUS VAR_5;
 int VAR_6;

 if (FUNC_5(VAR_0, &VAR_4) > 0) {
  for (VAR_6 = 0; VAR_6 < VAR_4.num; VAR_6++) {
   VAR_5 = FUNC_2(VAR_4.data[VAR_6]);
   if (FUNC_0(VAR_5))
    FUNC_6(VAR_3,
        "failed to install _OSI(\"%s\"): %s\n",
        VAR_4.data[VAR_6], FUNC_1(VAR_5));
   else if (VAR_2)
    FUNC_6(VAR_3, "installed _OSI(\"%s\")\n",
        VAR_4.data[VAR_6]);
  }
  FUNC_4(&VAR_4);
 }
 if (FUNC_5(VAR_1, &VAR_4) > 0) {
  for (VAR_6 = 0; VAR_6 < VAR_4.num; VAR_6++) {
   VAR_5 = FUNC_3(VAR_4.data[VAR_6]);
   if (FUNC_0(VAR_5))
    FUNC_6(VAR_3,
        "failed to remove _OSI(\"%s\"): %s\n",
        VAR_4.data[VAR_6], FUNC_1(VAR_5));
   else if (VAR_2)
    FUNC_6(VAR_3, "removed _OSI(\"%s\")\n",
        VAR_4.data[VAR_6]);
  }
  FUNC_4(&VAR_4);
 }
}
