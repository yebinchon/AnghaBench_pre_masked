
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_9__ {char* Signature; int Length; } ;
typedef int INT32 ;
typedef int FILE ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;
typedef int ACPI_SIZE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,long) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_7 (int ,char*,char*,char*) ;
 int FUNC_8 (TYPE_1__*,int,int,int *) ;
 int FUNC_9 (int *,long,int ) ;
 long FUNC_10 (int *) ;
 int VAR_6 ;

__attribute__((used)) static ACPI_STATUS
FUNC_11 (
    char *VAR_7,
    FILE *VAR_8,
    UINT8 VAR_9,
    ACPI_TABLE_HEADER **VAR_10)
{
    ACPI_STATUS VAR_11 = VAR_3;
    ACPI_TABLE_HEADER VAR_12;
    ACPI_TABLE_HEADER *VAR_13;
    INT32 VAR_14;
    long VAR_15;


    *VAR_10 = ((void*)0);



    VAR_15 = FUNC_10 (VAR_8);
    VAR_14 = FUNC_8 (&VAR_12, 1, sizeof (ACPI_TABLE_HEADER), VAR_8);
    if (VAR_14 != sizeof (ACPI_TABLE_HEADER))
    {
        return (VAR_0);
    }

    if (VAR_9)
    {


        VAR_11 = FUNC_2 (VAR_8, VAR_15);
        if (FUNC_0 (VAR_11))
        {
            return (VAR_11);
        }





        if (!FUNC_6 (&VAR_12))
        {
            FUNC_7 (VAR_6,
                "    %s: Table [%4.4s] is not an AML table - ignoring\n",
                VAR_7, VAR_12.Signature);

            return (VAR_4);
        }
    }



    VAR_13 = FUNC_3 ((ACPI_SIZE) VAR_12.Length);
    if (!VAR_13)
    {
        return (VAR_2);
    }



    FUNC_9 (VAR_8, VAR_15, VAR_5);

    VAR_14 = FUNC_8 (VAR_13, 1, VAR_12.Length, VAR_8);





    if (VAR_9 && VAR_14 != (INT32) VAR_12.Length)
    {
        VAR_11 = VAR_1;
        goto ErrorExit;
    }



    VAR_11 = FUNC_5 (VAR_13, VAR_12.Length);
    if (FUNC_0 (VAR_11))
    {
        VAR_11 = FUNC_1 (VAR_13);
        if (FUNC_0 (VAR_11))
        {
            goto ErrorExit;
        }
    }

    *VAR_10 = VAR_13;
    return (VAR_3);


ErrorExit:
    FUNC_4 (VAR_13);
    return (VAR_11);
}
