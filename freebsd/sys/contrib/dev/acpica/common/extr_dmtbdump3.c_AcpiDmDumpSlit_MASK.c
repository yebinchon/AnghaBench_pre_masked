
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_7__ {scalar_t__ Entry; scalar_t__ LocalityCount; } ;
struct TYPE_6__ {scalar_t__ Length; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;


 TYPE_4__* FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,int ,TYPE_1__*,int ,int ) ;
 int FUNC_4 (scalar_t__,int ,int *) ;
 int FUNC_5 (scalar_t__,scalar_t__,char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_6 (char*,...) ;
 int * VAR_2 ;

void
FUNC_7 (
    ACPI_TABLE_HEADER *VAR_3)
{
    ACPI_STATUS VAR_4;
    UINT32 VAR_5;
    UINT8 *VAR_6;
    UINT32 VAR_7;
    UINT32 VAR_8;
    UINT32 VAR_9;




    VAR_4 = FUNC_3 (VAR_3->Length, 0, VAR_3, 0, VAR_1);
    if (FUNC_1 (VAR_4))
    {
        return;
    }



    VAR_7 = (UINT32) FUNC_0 (VAR_0, VAR_3)->LocalityCount;
    VAR_5 = FUNC_2 (VAR_0, VAR_2[0]);
    VAR_6 = (UINT8 *) FUNC_0 (VAR_0, VAR_3)->Entry;

    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
    {


        FUNC_5 (VAR_5, VAR_7, "Locality", VAR_8);
        for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
        {


            if (VAR_5 >= VAR_3->Length)
            {
                FUNC_6 (
                    "\n**** Not enough room in table for all localities\n");
                return;
            }

            FUNC_6 ("%2.2X", VAR_6[VAR_9]);
            VAR_5++;



            if ((VAR_9+1) < VAR_7)
            {
                FUNC_6 (" ");

                if (VAR_9 && (((VAR_9+1) % 16) == 0))
                {
                    FUNC_6 ("\\\n");
                    FUNC_4 (VAR_5, 0, ((void*)0));
                }
            }
        }



        FUNC_6 ("\n");
        VAR_6 += VAR_7;
    }
}
