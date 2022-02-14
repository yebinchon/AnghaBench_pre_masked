
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;
typedef size_t ACPI_SIZE ;


 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (
    UINT32 VAR_0,
    UINT8 *VAR_1,
    UINT32 VAR_2,
    UINT32 VAR_3)
{
    UINT32 VAR_4;
    UINT32 VAR_5;
    UINT8 VAR_6;


    FUNC_0 (VAR_0, "Output: [%3.3Xh %4.4d %3d] ",
        VAR_2, VAR_2, VAR_3);

    VAR_4 = 0;
    while (VAR_4 < VAR_3)
    {
        if (VAR_4 >= 16)
        {
            FUNC_0 (VAR_0, "%24s", "");
        }



        for (VAR_5 = 0; VAR_5 < 16;)
        {
            if (VAR_4 + VAR_5 >= VAR_3)
            {


                FUNC_0 (VAR_0, "   ");
                VAR_5++;
                continue;
            }

            FUNC_0 (VAR_0, "%02X ", VAR_1[VAR_4+VAR_5]);
            VAR_5++;
        }

        FUNC_0 (VAR_0, " ");
        for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
        {
            if (VAR_4 + VAR_5 >= VAR_3)
            {
                FUNC_0 (VAR_0, "\n\n");
                return;
            }

            VAR_6 = VAR_1[(ACPI_SIZE) VAR_4 + VAR_5];
            if (FUNC_1 (VAR_6))
            {
                FUNC_0 (VAR_0, "%c", VAR_6);
            }
            else
            {
                FUNC_0 (VAR_0, ".");
            }
        }



        FUNC_0 (VAR_0, "\n");
        VAR_4 += 16;
    }

    FUNC_0 (VAR_0, "\n\n");
}
