
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;
typedef int ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int *) ;

__attribute__((used)) static UINT8
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_2,
    UINT32 VAR_3)
{






    if (VAR_3 <= (0x0000003F - 1))
    {
        return (1);
    }
    else if (VAR_3 <= (0x00000FFF - 2))
    {
        return (2);
    }
    else if (VAR_3 <= (0x000FFFFF - 3))
    {
        return (3);
    }
    else if (VAR_3 <= (0x0FFFFFFF - 4))
    {
        return (4);
    }
    else
    {


        FUNC_0 (VAR_0, VAR_1, VAR_2, ((void*)0));
    }

    return (0);
}
