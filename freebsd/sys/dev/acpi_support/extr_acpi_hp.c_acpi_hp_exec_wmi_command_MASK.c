
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int params ;
typedef int device_t ;
typedef int UINT32 ;
struct TYPE_9__ {int member_0; int** member_1; TYPE_2__* Pointer; } ;
struct TYPE_7__ {scalar_t__ Pointer; } ;
struct TYPE_8__ {scalar_t__ Type; TYPE_1__ Buffer; } ;
typedef TYPE_2__ ACPI_OBJECT ;
typedef TYPE_3__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,int ,int,TYPE_3__*,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4, int VAR_5, int VAR_6,
    int VAR_7, int *VAR_8)
{
 UINT32 VAR_9[4+32] = { 0x55434553, VAR_6 ? 2 : 1,
       VAR_5, 4, VAR_7};
 UINT32* VAR_10;
 ACPI_OBJECT *VAR_11;
 ACPI_BUFFER VAR_12 = { sizeof(VAR_9), &VAR_9 };
 ACPI_BUFFER VAR_13 = { VAR_0, ((void*)0) };
 int VAR_14;

 if (FUNC_0(FUNC_1(VAR_4, VAR_1,
      0, 0x3, &VAR_12, &VAR_13))) {
  FUNC_2(&VAR_13);
  return (-VAR_3);
 }
 VAR_11 = VAR_13.Pointer;
 if (!VAR_11 || VAR_11->Type != VAR_2) {
  FUNC_2(&VAR_13);
  return (-VAR_3);
 }
 VAR_10 = (UINT32*) VAR_11->Buffer.Pointer;
 VAR_14 = VAR_10[1];
 if (VAR_14 == 0 && VAR_8 != ((void*)0))
  *VAR_8 = VAR_10[2];
 FUNC_2(&VAR_13);

 return (VAR_14);
}
