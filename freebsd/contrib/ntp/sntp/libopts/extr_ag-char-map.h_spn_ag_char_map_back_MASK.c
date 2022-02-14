
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char** VAR_0 ;
 unsigned char* FUNC_0 (unsigned int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static inline char *
FUNC_2(char const * VAR_1, char const * VAR_2, unsigned int VAR_3)
{
    unsigned char const * VAR_4 = VAR_0[VAR_3];
    if (VAR_4 == ((void*)0))
        VAR_4 = FUNC_0(VAR_3);
    if (VAR_1 >= VAR_2) VAR_2 = VAR_1 + FUNC_1(VAR_1);
    while ((VAR_2 > VAR_1) && VAR_4[(unsigned char)VAR_2[-1]]) VAR_2--;
    return (char *)(uintptr_t)VAR_2;
}
