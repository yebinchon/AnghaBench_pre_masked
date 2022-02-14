
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tOptions ;
typedef int tOptDesc ;


 int VAR_0 ;
 char VAR_1 ;
 scalar_t__ FUNC_0 (char*,int *,int *,char const* const*,unsigned int) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static uintptr_t
FUNC_2(tOptions * VAR_2, tOptDesc * VAR_3, char const * VAR_4, int VAR_5,
                char const * const * VAR_6, unsigned int VAR_7)
{
    char VAR_8[ VAR_0 ];

    FUNC_1(VAR_8, VAR_4, VAR_5);
    VAR_8[VAR_5] = VAR_1;

    {
        unsigned int VAR_9 = (unsigned int)
            FUNC_0(VAR_8, VAR_2, VAR_3, VAR_6, VAR_7);
        if (VAR_9 >= VAR_7)
            return 0UL;

        return (uintptr_t)1U << VAR_9;
    }
}
