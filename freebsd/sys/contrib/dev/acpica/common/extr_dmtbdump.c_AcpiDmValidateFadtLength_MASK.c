
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1 (
    UINT32 VAR_4,
    UINT32 VAR_5)
{
    UINT32 VAR_6;


    switch (VAR_4)
    {
    case 0:

        FUNC_0 ("// ACPI Warning: Invalid FADT revision: 0\n");
        return;

    case 1:

        VAR_6 = VAR_0;
        break;

    case 2:

        VAR_6 = VAR_1;
        break;

    case 3:
    case 4:

        VAR_6 = VAR_2;
        break;

    case 5:

        VAR_6 = VAR_3;
        break;

    default:

        return;
    }

    if (VAR_5 == VAR_6)
    {
        return;
    }

    FUNC_0 (
        "\n// ACPI Warning: FADT revision %X does not match length: "
        "found %X expected %X\n",
        VAR_4, VAR_5, VAR_6);
}
