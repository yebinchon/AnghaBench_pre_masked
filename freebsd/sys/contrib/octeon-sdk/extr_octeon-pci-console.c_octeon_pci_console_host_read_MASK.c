
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef unsigned int uint32_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,scalar_t__,int,int ) ;
 unsigned int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (char*,unsigned int) ;

int FUNC_8(uint64_t VAR_8, unsigned int VAR_9, char * VAR_10, int VAR_11, uint32_t VAR_12)
{
    if (!VAR_8)
        return -1;


    uint32_t VAR_13 = FUNC_3(VAR_8 + FUNC_6(VAR_3, VAR_13));

    if (VAR_9 >= VAR_13)
    {
        FUNC_7("ERROR: attempting to read non-existant console: %d\n", VAR_9);
        return(-1);
    }
    uint64_t VAR_14 = FUNC_4(VAR_8 + FUNC_6(VAR_3, VAR_1) + VAR_9 *8);
    uint32_t VAR_15 = FUNC_3(VAR_14 + FUNC_6(VAR_4, VAR_11));



    uint32_t VAR_16, VAR_17;
    uint64_t VAR_18;

    VAR_18 = FUNC_4(VAR_14 + FUNC_6(VAR_4, VAR_5));
    VAR_16 = FUNC_3(VAR_14 + FUNC_6(VAR_4, VAR_6));
    VAR_17 = FUNC_3(VAR_14 + FUNC_6(VAR_4, VAR_7));


    int VAR_19 = FUNC_1(VAR_15, VAR_17, VAR_16);
    if (VAR_19 <= 0)
        return VAR_19;


    VAR_19 = FUNC_0(VAR_19, VAR_11);

    if (VAR_16 + VAR_19 >= VAR_15)
        VAR_19 = VAR_15 - VAR_16;


    FUNC_2(VAR_10, VAR_18 + VAR_16, VAR_19,VAR_0);
    FUNC_5(VAR_14 + FUNC_6(VAR_4, VAR_6), (VAR_16 + VAR_19)%VAR_15);

    return VAR_19;
}
