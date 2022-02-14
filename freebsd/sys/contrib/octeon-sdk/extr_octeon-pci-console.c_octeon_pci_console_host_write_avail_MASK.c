
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef unsigned int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,unsigned int) ;

int FUNC_5(uint64_t VAR_8, unsigned int VAR_9)
{
    if (!VAR_8)
        return -1;


    uint32_t VAR_10 = FUNC_1(VAR_8 + FUNC_3(VAR_6, VAR_10));

    if (VAR_9 >= VAR_10)
    {
        FUNC_4("ERROR: attempting to read non-existant console: %d\n", VAR_9);
        return -1;
    }
    uint64_t VAR_11 = FUNC_2(VAR_8 + FUNC_3(VAR_6, VAR_1) + VAR_9 *8);


    uint32_t VAR_12 = FUNC_1(VAR_11 + FUNC_3(VAR_7, VAR_0));

    uint32_t VAR_13, VAR_14;
    uint64_t VAR_15;

    VAR_15 = FUNC_2(VAR_11 + FUNC_3(VAR_7, VAR_2));
    VAR_13 = FUNC_1(VAR_11 + FUNC_3(VAR_7, VAR_3));
    VAR_14 = FUNC_1(VAR_11 + FUNC_3(VAR_7, VAR_4));


    return FUNC_0(VAR_12, VAR_14, VAR_13);
}
