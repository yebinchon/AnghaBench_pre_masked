
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef unsigned int uint32_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__,char const*,int,int ) ;
 unsigned int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,unsigned int) ;

int FUNC_8(uint64_t VAR_9, unsigned int VAR_10, const char * VAR_11, int VAR_12, uint32_t VAR_13)
{
    if (!VAR_9)
        return -1;


    uint32_t VAR_14 = FUNC_3(VAR_9 + FUNC_6(VAR_7, VAR_14));

    if (VAR_10 >= VAR_14)
    {
        FUNC_7("ERROR: attempting to read non-existant console: %d\n", VAR_10);
        return(-1);
    }
    uint64_t VAR_15 = FUNC_4(VAR_9 + FUNC_6(VAR_7, VAR_2) + VAR_10 *8);


    uint32_t VAR_16 = FUNC_3(VAR_15 + FUNC_6(VAR_8, VAR_1));

    uint32_t VAR_17, VAR_18;
    uint64_t VAR_19;

    VAR_19 = FUNC_4(VAR_15 + FUNC_6(VAR_8, VAR_3));
    VAR_17 = FUNC_3(VAR_15 + FUNC_6(VAR_8, VAR_4));
    VAR_18 = FUNC_3(VAR_15 + FUNC_6(VAR_8, VAR_5));


    int VAR_20 = FUNC_1(VAR_16, VAR_18, VAR_17);
    if (VAR_20 <= 0)
        return VAR_20;
    VAR_20 = FUNC_0(VAR_20, VAR_12);

    if (VAR_18 + VAR_20 >= VAR_16)
        VAR_20 = VAR_16 - VAR_18;



    FUNC_2(VAR_19 + VAR_18, VAR_11, VAR_20, VAR_0);
    FUNC_5(VAR_15 + FUNC_6(VAR_8, VAR_5), (VAR_18 + VAR_20)%VAR_16);

    return VAR_20;

}
