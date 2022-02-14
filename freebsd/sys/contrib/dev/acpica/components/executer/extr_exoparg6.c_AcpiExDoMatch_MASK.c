
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int BOOLEAN ;
typedef int ACPI_STATUS ;
typedef int ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int *,int *) ;
 int VAR_3 ;






 int VAR_4 ;

__attribute__((used)) static BOOLEAN
FUNC_2 (
    UINT32 VAR_5,
    ACPI_OPERAND_OBJECT *VAR_6,
    ACPI_OPERAND_OBJECT *VAR_7)
{
    BOOLEAN VAR_8 = VAR_4;
    ACPI_STATUS VAR_9;
    switch (VAR_5)
    {
    case 128:



        break;

    case 133:




        VAR_9 = FUNC_1 (
            VAR_0, VAR_7, VAR_6, &VAR_8);
        if (FUNC_0 (VAR_9))
        {
            return (VAR_3);
        }
        break;

    case 130:




        VAR_9 = FUNC_1 (
            VAR_2, VAR_7, VAR_6, &VAR_8);
        if (FUNC_0 (VAR_9))
        {
            return (VAR_3);
        }
        VAR_8 = (BOOLEAN) !VAR_8;
        break;

    case 129:




        VAR_9 = FUNC_1 (
            VAR_1, VAR_7, VAR_6, &VAR_8);
        if (FUNC_0 (VAR_9))
        {
            return (VAR_3);
        }
        break;

    case 132:




        VAR_9 = FUNC_1 (
            VAR_1, VAR_7, VAR_6, &VAR_8);
        if (FUNC_0 (VAR_9))
        {
            return (VAR_3);
        }
        VAR_8 = (BOOLEAN)!VAR_8;
        break;

    case 131:




        VAR_9 = FUNC_1 (
            VAR_2, VAR_7, VAR_6, &VAR_8);
        if (FUNC_0 (VAR_9))
        {
            return (VAR_3);
        }
        break;

    default:



        return (VAR_3);
    }

    return (VAR_8);
}
