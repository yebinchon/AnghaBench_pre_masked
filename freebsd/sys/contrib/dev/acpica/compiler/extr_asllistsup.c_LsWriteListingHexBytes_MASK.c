
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;





 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*,...) ;
 size_t VAR_5 ;
 int FUNC_1 (int) ;

void
FUNC_2 (
    UINT8 *VAR_6,
    UINT32 VAR_7,
    UINT32 VAR_8)
{
    UINT32 VAR_9;




    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
    {


        if (VAR_3 == 0)
        {
            if (VAR_4)
            {
                FUNC_0 (VAR_8, "%*s", 10, " ");
            }

            switch (VAR_8)
            {
            case 128:

                FUNC_0 (VAR_8, "%8.8X%s", VAR_2,
                    VAR_0);
                break;

            case 130:

                FUNC_0 (VAR_8, "    db ");
                break;

            case 129:

                FUNC_0 (VAR_8, "        ");
                break;

            default:



                return;
            }
        }



        VAR_1[VAR_3] = VAR_6[VAR_9];

        VAR_3++;
        VAR_2++;



        if (VAR_3 >= VAR_5)
        {
            FUNC_1 (VAR_8);
        }
    }
}
