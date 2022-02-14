
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* UINT64 ;
struct TYPE_5__ {void* Value; } ;
struct TYPE_7__ {TYPE_1__ Integer; void* Type; } ;
struct TYPE_6__ {int Count; TYPE_3__* Pointer; } ;
typedef TYPE_2__ ACPI_OBJECT_LIST ;
typedef TYPE_3__ ACPI_OBJECT ;
typedef int ACPI_HANDLE ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 int FUNC_1 (int ,char*,TYPE_2__*,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(ACPI_HANDLE VAR_2, UINT64 VAR_3, UINT64 VAR_4)
{
 ACPI_OBJECT_LIST VAR_5;
 ACPI_OBJECT VAR_6[2];

 FUNC_0(VAR_1);
 VAR_6[0].Type = VAR_0;
 VAR_6[0].Integer.Value = VAR_3;
 VAR_6[1].Type = VAR_0;
 VAR_6[1].Integer.Value = VAR_4;
 VAR_5.Count = 2;
 VAR_5.Pointer = VAR_6;
 FUNC_1(VAR_2, "SSET", &VAR_5, ((void*)0));
}
