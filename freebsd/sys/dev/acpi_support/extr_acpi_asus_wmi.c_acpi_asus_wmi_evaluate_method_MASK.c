
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int params ;
typedef int device_t ;
typedef scalar_t__ UINT32 ;
struct TYPE_9__ {int member_0; scalar_t__** member_1; TYPE_2__* Pointer; } ;
struct TYPE_7__ {scalar_t__ Value; } ;
struct TYPE_8__ {scalar_t__ Type; TYPE_1__ Integer; } ;
typedef TYPE_2__ ACPI_OBJECT ;
typedef TYPE_3__ ACPI_BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,int,int,TYPE_3__*,TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_6, int VAR_7,
    UINT32 VAR_8, UINT32 VAR_9, UINT32 *VAR_10)
{
 UINT32 VAR_11[2] = { VAR_8, VAR_9 };
 UINT32 VAR_12;
 ACPI_OBJECT *VAR_13;
 ACPI_BUFFER VAR_14 = { sizeof(VAR_11), &VAR_11 };
 ACPI_BUFFER VAR_15 = { VAR_0, ((void*)0) };

 if (FUNC_0(FUNC_1(VAR_6,
     VAR_1, 1, VAR_7, &VAR_14, &VAR_15))) {
  FUNC_2(&VAR_15);
  return (-VAR_4);
 }
 VAR_13 = VAR_15.Pointer;
 if (VAR_13 && VAR_13->Type == VAR_2)
  VAR_12 = (UINT32) VAR_13->Integer.Value;
 else
  VAR_12 = 0;
 FUNC_2(&VAR_15);
 if (VAR_10)
  *VAR_10 = VAR_12;
 return (VAR_12 == VAR_3 ? -VAR_5 : 0);
}
