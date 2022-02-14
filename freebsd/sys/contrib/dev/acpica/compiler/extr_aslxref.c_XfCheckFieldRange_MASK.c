
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT32 ;
typedef int ACPI_PARSE_OBJECT ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *,int *) ;

__attribute__((used)) static void
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_3,
    UINT32 VAR_4,
    UINT32 VAR_5,
    UINT32 VAR_6,
    UINT32 VAR_7)
{
    UINT32 VAR_8;







    VAR_8 = VAR_5 + VAR_6;

    if (VAR_8 > VAR_4)
    {


        FUNC_1 (VAR_0, VAR_2, VAR_3, ((void*)0));
        return;
    }





    VAR_8 = FUNC_0 (VAR_8, VAR_7);

    if (VAR_8 > VAR_4)
    {


        FUNC_1 (VAR_0, VAR_1, VAR_3, ((void*)0));
    }
}
