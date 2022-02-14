
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int ULL ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (char*,int ,int ) ;
 int VAR_0 ;

int FUNC_10(uint64_t VAR_1, uint64_t VAR_2, uint32_t VAR_3)
{
    uint64_t VAR_4;
    uint64_t VAR_5 = 0;
    int VAR_6 = 0;




    if (FUNC_2(0))
        return(0);


    if (!VAR_2)
        return(0);


    FUNC_3(VAR_3);
    VAR_4 = FUNC_0(VAR_0);
    if (VAR_4 == 0 || VAR_1 < VAR_4)
    {

        if (VAR_4 && VAR_1 + VAR_2 > VAR_4)
            goto bootmem_free_done;
        else if (VAR_1 + VAR_2 == VAR_4)
        {

            FUNC_7(VAR_1, FUNC_5(VAR_4));
            FUNC_8(VAR_1, FUNC_6(VAR_4) + VAR_2);
            FUNC_1(VAR_0, VAR_1);

        }
        else
        {

            FUNC_7(VAR_1, VAR_4);
            FUNC_8(VAR_1, VAR_2);
            FUNC_1(VAR_0, VAR_1);
        }
        VAR_6 = 1;
        goto bootmem_free_done;
    }


    while (VAR_4 && VAR_1 > VAR_4)
    {
        VAR_5 = VAR_4;
        VAR_4 = FUNC_5(VAR_4);
    }

    if (!VAR_4)
    {



        if (VAR_5 + FUNC_6(VAR_5) == VAR_1)
        {
            FUNC_8(VAR_5, FUNC_6(VAR_5) + VAR_2);
        }
        else
        {
            FUNC_7(VAR_5, VAR_1);
            FUNC_8(VAR_1, VAR_2);
            FUNC_7(VAR_1, 0);
        }
        VAR_6 = 1;
        goto bootmem_free_done;
    }
    else
    {


        if (VAR_5 + FUNC_6(VAR_5) == VAR_1)
        {

            FUNC_8(VAR_5, FUNC_6(VAR_5) + VAR_2);
            if (VAR_1 + VAR_2 == VAR_4)
            {

                FUNC_8(VAR_5, FUNC_6(VAR_4) + FUNC_6(VAR_5));
                FUNC_7(VAR_5, FUNC_5(VAR_4));
            }
            VAR_6 = 1;
            goto bootmem_free_done;
        }
        else if (VAR_1 + VAR_2 == VAR_4)
        {

            FUNC_8(VAR_1, FUNC_6(VAR_4) + VAR_2);
            FUNC_7(VAR_1, FUNC_5(VAR_4));
            FUNC_7(VAR_5, VAR_1);
            VAR_6 = 1;
            goto bootmem_free_done;
        }


        FUNC_8(VAR_1, VAR_2);
        FUNC_7(VAR_1, VAR_4);
        FUNC_7(VAR_5, VAR_1);


    }
    VAR_6 = 1;

bootmem_free_done:
    FUNC_4(VAR_3);
    return(VAR_6);

}
