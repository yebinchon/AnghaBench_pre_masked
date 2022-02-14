
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int param ;
typedef int UINT32 ;
struct TYPE_10__ {int Length; TYPE_2__* Pointer; } ;
struct TYPE_8__ {int Value; } ;
struct TYPE_9__ {scalar_t__ Type; TYPE_1__ Integer; } ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_2__ ACPI_OBJECT ;
typedef int * ACPI_HANDLE ;
typedef TYPE_3__ ACPI_BUFFER ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *,char*,int *,TYPE_3__*) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int *) ;

ACPI_STATUS
FUNC_5(ACPI_HANDLE VAR_5, char *VAR_6, UINT32 *VAR_7)
{
    ACPI_STATUS VAR_8;
    ACPI_BUFFER VAR_9;
    ACPI_OBJECT VAR_10;

    if (VAR_5 == ((void*)0))
 VAR_5 = VAR_0;





    VAR_9.Pointer = &VAR_10;
    VAR_9.Length = sizeof(VAR_10);
    VAR_8 = FUNC_1(VAR_5, VAR_6, ((void*)0), &VAR_9);
    if (FUNC_0(VAR_8)) {
 if (VAR_10.Type == VAR_1)
     *VAR_7 = VAR_10.Integer.Value;
 else
     VAR_8 = VAR_4;
    }
    if (VAR_8 == VAR_2) {
 if ((VAR_9.Pointer = FUNC_2(VAR_9.Length)) == ((void*)0)) {
     VAR_8 = VAR_3;
 } else {
     VAR_8 = FUNC_1(VAR_5, VAR_6, ((void*)0), &VAR_9);
     if (FUNC_0(VAR_8))
  VAR_8 = FUNC_4(&VAR_9, VAR_7);
     FUNC_3(VAR_9.Pointer);
 }
    }
    return (VAR_8);
}
