
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void const* FUNC_0 (int) ;
 void const* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 void const* FUNC_3 (int) ;

void FUNC_4(size_t VAR_0, void *VAR_1,
                                              size_t VAR_2,
                                              void *VAR_3,
                                              void (*VAR_4) (void *VAR_5),
                                              int (*VAR_6) (const void
                                                                    *VAR_7),
                                              void (*VAR_8) (void *VAR_9,
                                                                    const void
                                                                    *VAR_10),
                                              void (*VAR_11) (void *VAR_12,
                                                                    const void
                                                                    *VAR_13),
                                              void (*VAR_14) (void *VAR_15,
                                                                 const void
                                                                 *VAR_16,
                                                                 const void
                                                                 *VAR_17),
                                              void (*VAR_18) (void *VAR_19,
                                                                 const void
                                                                 *VAR_20),
                                              void (*VAR_21) (void
                                                                      *VAR_22,
                                                                      const
                                                                      void
                                                                      *VAR_23))
{
    int VAR_24 = 0;






    if (!VAR_6((&((char *)VAR_1)[(3*(0) + 2) * VAR_2])))
        VAR_8((&((char *)VAR_3)[(0) * VAR_2]), (&((char *)VAR_1)[(3*(0) + 2) * VAR_2]));
    else
        VAR_4((&((char *)VAR_3)[(0) * VAR_2]));
    for (VAR_24 = 1; VAR_24 < (int)VAR_0; VAR_24++) {
        if (!VAR_6((&((char *)VAR_1)[(3*(VAR_24) + 2) * VAR_2])))
            VAR_14((&((char *)VAR_3)[(VAR_24) * VAR_2]), (&((char *)VAR_3)[(VAR_24 - 1) * VAR_2]), (&((char *)VAR_1)[(3*(VAR_24) + 2) * VAR_2]));
        else
            VAR_8((&((char *)VAR_3)[(VAR_24) * VAR_2]), (&((char *)VAR_3)[(VAR_24 - 1) * VAR_2]));
    }





    VAR_18((&((char *)VAR_3)[(VAR_0 - 1) * VAR_2]), (&((char *)VAR_3)[(VAR_0 - 1) * VAR_2]));
    for (VAR_24 = VAR_0 - 1; VAR_24 >= 0; VAR_24--) {
        if (VAR_24 > 0)





            VAR_14((&((char *)VAR_3)[(VAR_0) * VAR_2]), (&((char *)VAR_3)[(VAR_24 - 1) * VAR_2]), (&((char *)VAR_3)[(VAR_24) * VAR_2]));
        else
            VAR_8((&((char *)VAR_3)[(VAR_0) * VAR_2]), (&((char *)VAR_3)[(0) * VAR_2]));

        if (!VAR_6((&((char *)VAR_1)[(3*(VAR_24) + 2) * VAR_2]))) {
            if (VAR_24 > 0)



                VAR_14((&((char *)VAR_3)[(VAR_24 - 1) * VAR_2]), (&((char *)VAR_3)[(VAR_24) * VAR_2]), (&((char *)VAR_1)[(3*(VAR_24) + 2) * VAR_2]));




            VAR_11((&((char *)VAR_1)[(3*(VAR_24) + 2) * VAR_2]), (&((char *)VAR_3)[(VAR_0) * VAR_2]));
            VAR_14((&((char *)VAR_1)[3*(VAR_24) * VAR_2]), (&((char *)VAR_1)[3*(VAR_24) * VAR_2]), (&((char *)VAR_1)[(3*(VAR_24) + 2) * VAR_2]));
            VAR_14((&((char *)VAR_1)[(3*(VAR_24) + 2) * VAR_2]), (&((char *)VAR_1)[(3*(VAR_24) + 2) * VAR_2]), (&((char *)VAR_3)[(VAR_0) * VAR_2]));
            VAR_14((&((char *)VAR_1)[(3*(VAR_24) + 1) * VAR_2]), (&((char *)VAR_1)[(3*(VAR_24) + 1) * VAR_2]), (&((char *)VAR_1)[(3*(VAR_24) + 2) * VAR_2]));
            VAR_21((&((char *)VAR_1)[3*(VAR_24) * VAR_2]), (&((char *)VAR_1)[3*(VAR_24) * VAR_2]));
            VAR_21((&((char *)VAR_1)[(3*(VAR_24) + 1) * VAR_2]), (&((char *)VAR_1)[(3*(VAR_24) + 1) * VAR_2]));
            VAR_4((&((char *)VAR_1)[(3*(VAR_24) + 2) * VAR_2]));
        } else {
            if (VAR_24 > 0)



                VAR_8((&((char *)VAR_3)[(VAR_24 - 1) * VAR_2]), (&((char *)VAR_3)[(VAR_24) * VAR_2]));
        }
    }
}
