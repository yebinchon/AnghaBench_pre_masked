
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;
typedef size_t ACPI_SIZE ;


 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int*,int *) ;
 int FUNC_2 (char*,...) ;

 int VAR_0 ;



 scalar_t__ FUNC_3 (int ) ;

void
FUNC_4 (
    UINT8 *VAR_1,
    UINT32 VAR_2,
    UINT32 VAR_3,
    UINT32 VAR_4)
{
    UINT32 VAR_5 = 0;
    UINT32 VAR_6;
    UINT32 VAR_7;
    UINT8 VAR_8;
    UINT32 VAR_9 = VAR_3 & VAR_0;


    VAR_3 &= ~VAR_0;
    if (!VAR_1)
    {
        FUNC_2 ("Null Buffer Pointer in DumpBuffer!\n");
        return;
    }

    if ((VAR_2 < 4) || (VAR_2 & 0x01))
    {
        VAR_3 = 131;
    }



    while (VAR_5 < VAR_2)
    {


        if (!VAR_9)
        {
            FUNC_2 ("%8.4X: ", (VAR_4 + VAR_5));
        }



        for (VAR_6 = 0; VAR_6 < 16;)
        {
            if (VAR_5 + VAR_6 >= VAR_2)
            {


                FUNC_2 ("%*s", ((VAR_3 * 2) + 1), " ");
                VAR_6 += VAR_3;
                continue;
            }

            switch (VAR_3)
            {
            case 131:
            default:

                FUNC_2 ("%02X ", VAR_1[(ACPI_SIZE) VAR_5 + VAR_6]);
                break;

            case 128:

                FUNC_0 (&VAR_7, &VAR_1[(ACPI_SIZE) VAR_5 + VAR_6]);
                FUNC_2 ("%04X ", VAR_7);
                break;

            case 130:

                FUNC_1 (&VAR_7, &VAR_1[(ACPI_SIZE) VAR_5 + VAR_6]);
                FUNC_2 ("%08X ", VAR_7);
                break;

            case 129:

                FUNC_1 (&VAR_7, &VAR_1[(ACPI_SIZE) VAR_5 + VAR_6]);
                FUNC_2 ("%08X", VAR_7);

                FUNC_1 (&VAR_7, &VAR_1[(ACPI_SIZE) VAR_5 + VAR_6 + 4]);
                FUNC_2 ("%08X ", VAR_7);
                break;
            }

            VAR_6 += VAR_3;
        }





        if (!VAR_9)
        {
            FUNC_2 (" ");
            for (VAR_6 = 0; VAR_6 < 16; VAR_6++)
            {
                if (VAR_5 + VAR_6 >= VAR_2)
                {
                    FUNC_2 ("\n");
                    return;
                }





                if (VAR_6 == 0)
                {
                    FUNC_2 ("// ");
                }

                VAR_8 = VAR_1[(ACPI_SIZE) VAR_5 + VAR_6];
                if (FUNC_3 (VAR_8))
                {
                    FUNC_2 ("%c", VAR_8);
                }
                else
                {
                    FUNC_2 (".");
                }
            }



            FUNC_2 ("\n");
        }
        VAR_5 += 16;
    }

    return;
}
