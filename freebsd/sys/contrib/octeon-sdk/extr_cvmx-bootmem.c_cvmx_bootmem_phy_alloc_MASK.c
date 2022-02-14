
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;
typedef int ULL ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (char*,int ,int ,...) ;

int64_t FUNC_13(uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4, uint64_t VAR_5, uint32_t VAR_6)
{

    uint64_t VAR_7;
    uint64_t VAR_8;
    uint64_t VAR_9 = 0;
    uint64_t VAR_10 = 0;
    uint64_t VAR_11;
    uint64_t VAR_12 = ~(VAR_5 - 1);






    if (FUNC_5(0))
        goto error_out;







    if (!VAR_2)
        goto error_out;


    VAR_2 = (VAR_2 + (VAR_0 - 1)) & ~(VAR_0 - 1);




    if (VAR_5 < VAR_0)
    {
        VAR_5 = VAR_0;
    }
    VAR_12 = ~(VAR_5 - 1);



    if (VAR_5)
        VAR_3 = (VAR_3 + (VAR_5 - 1)) & ~(VAR_5 - 1);



    if (VAR_3 && !VAR_4)
        VAR_4 = VAR_3 + VAR_2;
    else if (!VAR_3 && !VAR_4)
        VAR_4 = ~0ull;



    if (VAR_2 > VAR_4 - VAR_3)
        goto error_out;



    FUNC_6(VAR_6);
    VAR_7 = FUNC_1(VAR_7);
    VAR_8 = VAR_7;
    while (VAR_8)
    {
        uint64_t VAR_13, VAR_14;
        uint64_t VAR_15 = FUNC_9(VAR_8);

        if (FUNC_8(VAR_8) && VAR_8 > FUNC_8(VAR_8))
        {
            FUNC_12("Internal bootmem_alloc() error: ent: 0x%llx, next: 0x%llx\n",
                   (ULL)VAR_8, (ULL)FUNC_8(VAR_8));
            goto error_out;
        }



        VAR_13 = FUNC_0(FUNC_3(VAR_3, VAR_8), VAR_12);
        VAR_14 = FUNC_4(VAR_4, VAR_8 + VAR_15);


        VAR_11 = VAR_13;


        if ((((VAR_8 + VAR_15) > VAR_13 && VAR_8 < VAR_4))
            && VAR_2 <= VAR_14 - VAR_13)
        {




            if (VAR_6 & VAR_1)
            {
                VAR_11 = VAR_14 - VAR_2;

                VAR_11 &= VAR_12;
            }


            if (VAR_11 == VAR_8)
            {
                if (VAR_2 < VAR_15)
                {

                    VAR_10 = VAR_8 + VAR_2;
                    FUNC_10(VAR_10, FUNC_8(VAR_8));
                    FUNC_11(VAR_10, VAR_15 - VAR_2);


                    FUNC_10(VAR_8, VAR_10);
                }


                if (VAR_9)
                {
                    FUNC_10(VAR_9, FUNC_8(VAR_8));
                }
                else
                {

                    FUNC_2(VAR_7, FUNC_8(VAR_8));
                }
                FUNC_7(VAR_6);
                return(VAR_11);
            }
            VAR_10 = VAR_11;
            FUNC_10(VAR_10, FUNC_8(VAR_8));
            FUNC_11(VAR_10, FUNC_9(VAR_8) - (VAR_11 - VAR_8));
            FUNC_11(VAR_8, VAR_11 - VAR_8);
            FUNC_10(VAR_8, VAR_10);

        }

        VAR_9 = VAR_8;
        VAR_8 = FUNC_8(VAR_8);
    }
error_out:

    FUNC_7(VAR_6);
    return(-1);
}
