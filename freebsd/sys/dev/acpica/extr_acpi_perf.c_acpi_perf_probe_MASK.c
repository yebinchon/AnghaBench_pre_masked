
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
typedef int device_t ;
struct TYPE_3__ {int * Pointer; int Length; } ;
typedef int ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_1__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char*,int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

 int FUNC_4 (int ,int *,int ,int*,int*,struct resource**,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,int,struct resource*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ FUNC_10 (char*,int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_2)
{
 ACPI_HANDLE VAR_3;
 ACPI_OBJECT *VAR_4;
 struct resource *VAR_5;
 ACPI_BUFFER VAR_6;
 int VAR_7, VAR_8, VAR_9;

 if (FUNC_10("acpi_perf", 0))
  return (VAR_1);






 VAR_7 = VAR_1;
 VAR_3 = FUNC_5(VAR_2);
 VAR_6.Pointer = ((void*)0);
 VAR_6.Length = VAR_0;
 if (FUNC_0(FUNC_2(VAR_3, "_PCT", ((void*)0), &VAR_6)))
  return (VAR_7);
 VAR_4 = (ACPI_OBJECT *)VAR_6.Pointer;
 if (FUNC_1(VAR_4, 2)) {
  VAR_8 = 0;
  VAR_7 = FUNC_4(VAR_2, VAR_4, 0, &VAR_9, &VAR_8, &VAR_5, 0);
  switch (VAR_7) {
  case 0:
   FUNC_7(VAR_2, VAR_9, VAR_8, VAR_5);
   FUNC_6(VAR_2, VAR_9, VAR_8);
   FUNC_9(VAR_2, "ACPI CPU Frequency Control");
   break;
  case 128:
   FUNC_8(VAR_2);
   VAR_7 = 0;
   break;
  }
 }
 FUNC_3(VAR_6.Pointer);

 return (VAR_7);
}
