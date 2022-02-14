
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2 (
    UINT8 *VAR_0,
    UINT32 VAR_1,
    UINT32 VAR_2)
{
    UINT32 VAR_3;
    UINT32 VAR_4;
    UINT32 VAR_5;


    if (!VAR_1)
    {
        return;
    }

    FUNC_1 ("RawDataBuffer (0x%.2X)  // Vendor Data", VAR_1);

    FUNC_1 ("\n");
    FUNC_0 (VAR_2 + 1);
    FUNC_1 ("{\n");
    FUNC_0 (VAR_2 + 2);

    for (VAR_4 = 0; VAR_4 < VAR_1;)
    {
        for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
        {
            VAR_3 = VAR_4 + VAR_5;
            if (VAR_3 >= VAR_1)
            {
                goto Finish;
            }

            FUNC_1 ("0x%2.2X", VAR_0[VAR_3]);
            if ((VAR_3 + 1) >= VAR_1)
            {
                goto Finish;
            }

            FUNC_1 (", ");
        }

        FUNC_1 ("\n");
        FUNC_0 (VAR_2 + 2);

        VAR_4 += 8;
    }

Finish:
    FUNC_1 ("\n");
    FUNC_0 (VAR_2 + 1);
    FUNC_1 ("}");
}
