
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT64 ;
typedef int UINT32 ;
typedef int UINT16 ;
struct TYPE_3__ {scalar_t__ Pointer; int Length; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_NAMESPACE_NODE ;
typedef TYPE_1__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ,int ,int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void
FUNC_7 (
    UINT32 VAR_3,
    ACPI_NAMESPACE_NODE *VAR_4,
    UINT32 VAR_5,
    UINT32 VAR_6,
    char *VAR_7,
    UINT64 VAR_8,
    UINT8 VAR_9,
    UINT16 VAR_10)
{
    ACPI_BUFFER VAR_11;
    ACPI_STATUS VAR_12;




    VAR_11.Length = VAR_0;
    VAR_12 = FUNC_3 (VAR_4, &VAR_11, VAR_2);
    if (FUNC_0 (VAR_12))
    {
        return;
    }



    FUNC_6 (VAR_1, "\"");
    FUNC_5 (VAR_1, &((char *) VAR_11.Pointer)[1]);
    FUNC_5 (VAR_1, "\",");
    FUNC_2 (VAR_11.Pointer);





    FUNC_4 (VAR_3,
        "    {%-29s 0x%4.4X, 0x%8.8X, 0x%2.2X, 0x%8.8X, 0x%8.8X%8.8X}, /* %s */\n",
        VAR_1, VAR_10, VAR_5, VAR_9,
        VAR_6, FUNC_1 (VAR_8), VAR_7);
}
