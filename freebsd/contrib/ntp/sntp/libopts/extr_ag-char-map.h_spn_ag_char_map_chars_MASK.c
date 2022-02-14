
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char** VAR_0 ;
 unsigned char* FUNC_0 (unsigned int) ;

__attribute__((used)) static inline char *
FUNC_1(char const * VAR_1, unsigned int VAR_2)
{
    unsigned char const * VAR_3 = VAR_0[VAR_2];
    if (VAR_3 == ((void*)0))
        VAR_3 = FUNC_0(VAR_2);
    while (VAR_3[(unsigned char)*VAR_1]) VAR_1++;
    return (char *)(uintptr_t)VAR_1;
}
