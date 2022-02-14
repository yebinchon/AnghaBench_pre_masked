
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT64 ;
typedef size_t UINT32 ;
typedef int UINT16 ;
typedef int BOOLEAN ;


 size_t VAR_0 ;
 int FUNC_0 () ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,int *,size_t*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static UINT32
FUNC_4 (
    UINT64 VAR_6,
    UINT16 VAR_7,
    UINT8 *VAR_8,
    UINT8 VAR_9)
{
    UINT64 VAR_10;
    UINT32 VAR_11;
    UINT32 VAR_12;
    UINT32 VAR_13 = 0;
    UINT32 VAR_14;
    UINT32 VAR_15;
    UINT32 VAR_16;
    BOOLEAN VAR_17;


    FUNC_0 ();


    switch (VAR_7)
    {
    case 10:



        switch (VAR_9)
        {
        case 1:

            VAR_15 = VAR_3;
            break;

        case 4:

            VAR_15 = VAR_1;
            break;

        case 8:
        default:

            VAR_15 = VAR_2;
            break;
        }

        VAR_17 = VAR_5;
        VAR_16 = 0;

        for (VAR_11 = VAR_15; VAR_11 > 0; VAR_11--)
        {


            VAR_10 = VAR_6;
            for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
            {
                (void) FUNC_3 (VAR_10, 10, &VAR_10, &VAR_16);
            }



            if (VAR_16 != 0)
            {
                VAR_17 = VAR_4;
            }

            if (!VAR_17)
            {
                VAR_8[VAR_13] = (UINT8) (VAR_0 + VAR_16);
                VAR_13++;
            }
        }
        break;

    case 16:



        VAR_14 = (VAR_9 * 2);
        for (VAR_11 = 0, VAR_12 = (VAR_14-1); VAR_11 < VAR_14; VAR_11++, VAR_12--)
        {


            VAR_8[VAR_13] = (UINT8)
                FUNC_2 (VAR_6, FUNC_1 (VAR_12));
            VAR_13++;
        }
        break;

    default:
        return (0);
    }







    if (!VAR_13)
    {
        VAR_8 [0] = VAR_0;
        VAR_13 = 1;
    }

    VAR_8 [VAR_13] = 0;
    return ((UINT32) VAR_13);
}
