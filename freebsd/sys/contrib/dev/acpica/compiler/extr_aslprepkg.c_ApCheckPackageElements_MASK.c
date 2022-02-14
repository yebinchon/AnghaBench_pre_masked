
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_6__ {TYPE_2__* Next; } ;
struct TYPE_7__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int FUNC_0 (char const*,TYPE_2__*,int ,scalar_t__) ;

__attribute__((used)) static ACPI_PARSE_OBJECT *
FUNC_1 (
    const char *VAR_0,
    ACPI_PARSE_OBJECT *VAR_1,
    UINT8 VAR_2,
    UINT32 VAR_3,
    UINT8 VAR_4,
    UINT32 VAR_5)
{
    UINT32 VAR_6;
    for (VAR_6 = 0; (VAR_6 < VAR_3) && VAR_1; VAR_6++)
    {
        FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_6);
        VAR_1 = VAR_1->Asl.Next;
    }

    for (VAR_6 = 0; (VAR_6 < VAR_5) && VAR_1; VAR_6++)
    {
        FUNC_0 (VAR_0, VAR_1, VAR_4, (VAR_6 + VAR_3));
        VAR_1 = VAR_1->Asl.Next;
    }

    return (VAR_1);
}
