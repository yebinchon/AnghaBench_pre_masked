
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int ACPI_OPERAND_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int * FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;

void *
FUNC_6 (
    const char *VAR_4,
    UINT32 VAR_5,
    UINT32 VAR_6)
{
    ACPI_OPERAND_OBJECT *VAR_7;


    FUNC_2 (VAR_3);


    VAR_7 = FUNC_4 (VAR_2);
    if (!VAR_7)
    {
        FUNC_1 ((VAR_4, VAR_5,
            "Could not allocate an object descriptor"));

        FUNC_5 (((void*)0));
    }



    FUNC_3 (VAR_7, VAR_1);

    FUNC_0 ((VAR_0, "%p Size %X\n",
        VAR_7, (UINT32) sizeof (ACPI_OPERAND_OBJECT)));

    FUNC_5 (VAR_7);
}
