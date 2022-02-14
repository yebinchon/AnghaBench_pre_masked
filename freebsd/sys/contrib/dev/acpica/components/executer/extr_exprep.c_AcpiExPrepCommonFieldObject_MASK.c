
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* UINT8 ;
typedef void* UINT32 ;
struct TYPE_5__ {void* BaseByteOffset; void* StartFieldBitOffset; void* AccessByteWidth; void* BitLength; void* Attribute; void* FieldFlags; } ;
struct TYPE_6__ {TYPE_1__ CommonField; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_5 (TYPE_2__*,void*,void**) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;

ACPI_STATUS
FUNC_7 (
    ACPI_OPERAND_OBJECT *VAR_3,
    UINT8 VAR_4,
    UINT8 VAR_5,
    UINT32 VAR_6,
    UINT32 VAR_7)
{
    UINT32 VAR_8;
    UINT32 VAR_9;
    UINT32 VAR_10;


    FUNC_1 (VAR_2);







    VAR_3->CommonField.FieldFlags = VAR_4;
    VAR_3->CommonField.Attribute = VAR_5;
    VAR_3->CommonField.BitLength = VAR_7;
    VAR_8 = FUNC_5 (
        VAR_3, VAR_4, &VAR_9);
    if (!VAR_8)
    {
        FUNC_6 (VAR_0);
    }



    VAR_3->CommonField.AccessByteWidth = (UINT8)
        FUNC_0 (VAR_8);
    VAR_10 =
        FUNC_3 (VAR_6);
    VAR_3->CommonField.BaseByteOffset = (UINT32)
        FUNC_4 (VAR_10, VAR_9);





    VAR_3->CommonField.StartFieldBitOffset = (UINT8)
        (VAR_6 - FUNC_2 (VAR_3->CommonField.BaseByteOffset));

    FUNC_6 (VAR_1);
}
