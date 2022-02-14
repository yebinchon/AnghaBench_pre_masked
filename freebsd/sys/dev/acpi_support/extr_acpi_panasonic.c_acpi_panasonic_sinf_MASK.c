
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t UINT64 ;
struct TYPE_11__ {int * Pointer; int Length; } ;
struct TYPE_9__ {TYPE_2__* Elements; } ;
struct TYPE_10__ {scalar_t__ Type; TYPE_3__ Package; } ;
struct TYPE_7__ {size_t Value; } ;
struct TYPE_8__ {TYPE_1__ Integer; } ;
typedef TYPE_4__ ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_5__ ACPI_BUFFER ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,int *,TYPE_5__*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

__attribute__((used)) static UINT64
FUNC_3(ACPI_HANDLE VAR_3, UINT64 VAR_4)
{
 ACPI_BUFFER VAR_5;
 ACPI_OBJECT *VAR_6;
 UINT64 VAR_7;

 FUNC_0(VAR_2);
 VAR_7 = -1;
 VAR_5.Length = VAR_0;
 VAR_5.Pointer = ((void*)0);
 FUNC_1(VAR_3, "SINF", ((void*)0), &VAR_5);
 VAR_6 = (ACPI_OBJECT *)VAR_5.Pointer;
 if (VAR_6->Type == VAR_1)
  VAR_7 = VAR_6->Package.Elements[VAR_4].Integer.Value;
 FUNC_2(VAR_5.Pointer);

 return (VAR_7);
}
