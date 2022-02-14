
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;
typedef int ULL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,char const*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (int,int,int,int,int) ;
 int FUNC_7 (char const*,int) ;
 int FUNC_8 (char*,int ,int ,int ,int ,char const*) ;
 int VAR_3 ;

int64_t FUNC_9(uint64_t VAR_4, uint64_t VAR_5, uint64_t VAR_6, uint64_t VAR_7, const char *VAR_8, uint32_t VAR_9)
{
    int64_t VAR_10;
    uint64_t VAR_11;
    if (FUNC_3(3))
        return(-1);



    FUNC_4(VAR_9);

    VAR_11 = FUNC_7(VAR_8, VAR_9 | VAR_1);
    if (VAR_11)
    {
        FUNC_5(VAR_9);
        return(-1);
    }


    VAR_11 = FUNC_7(((void*)0), VAR_9 | VAR_1);
    if (!VAR_11)
    {
        FUNC_5(VAR_9);
        return(-1);
    }





    VAR_4 = (VAR_4 + (VAR_0 - 1)) & ~(VAR_0 - 1);

    VAR_10 = FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7, VAR_9 | VAR_1);
    if (VAR_10 >= 0)
    {
        FUNC_1(VAR_11, VAR_2, VAR_10);
        FUNC_1(VAR_11, VAR_4, VAR_4);
        FUNC_2(VAR_11, VAR_8, FUNC_0(VAR_3));
    }

    FUNC_5(VAR_9);
    return(VAR_10);
}
