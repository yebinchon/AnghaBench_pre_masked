
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int retobj ;
typedef int device_t ;
struct TYPE_10__ {int Length; TYPE_3__* Pointer; } ;
struct TYPE_7__ {int Value; } ;
struct TYPE_9__ {scalar_t__ Type; TYPE_1__ Integer; } ;
struct TYPE_8__ {int Count; TYPE_3__* Pointer; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OBJECT_LIST ;
typedef TYPE_3__ ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_4__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,TYPE_2__*,TYPE_4__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, int VAR_3)
{
 ACPI_HANDLE VAR_4;
 ACPI_OBJECT VAR_5;
 ACPI_OBJECT_LIST VAR_6;
 ACPI_BUFFER VAR_7;
 ACPI_OBJECT VAR_8;
 ACPI_STATUS VAR_9;

 VAR_4 = FUNC_2(VAR_2);

 VAR_5.Type = VAR_1;
 VAR_5.Integer.Value = VAR_3;
 VAR_6.Count = 1;
 VAR_6.Pointer = &VAR_5;
 VAR_7.Pointer = &VAR_8;
 VAR_7.Length = sizeof(VAR_8);
 VAR_9 = FUNC_1(VAR_4, "_DCK", &VAR_6, &VAR_7);




 if (VAR_3 == VAR_0)
  return (0);


 if (FUNC_0(VAR_9) && VAR_8.Type == VAR_1 &&
     VAR_8.Integer.Value == 1)
  return (0);

 return (-1);
}
