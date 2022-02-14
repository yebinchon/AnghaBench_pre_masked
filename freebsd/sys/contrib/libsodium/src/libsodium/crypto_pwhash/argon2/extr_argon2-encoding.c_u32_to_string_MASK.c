
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_1(char *VAR_1, uint32_t VAR_2)
{
    char VAR_3[VAR_0 - 1U];
    size_t VAR_4;

    VAR_4 = sizeof VAR_3;
    do {
        VAR_3[--VAR_4] = (VAR_2 % (uint32_t) 10U) + '0';
        VAR_2 /= (uint32_t) 10U;
    } while (VAR_2 != 0U && VAR_4 != 0U);
    FUNC_0(VAR_1, &VAR_3[VAR_4], (sizeof VAR_3) - VAR_4);
    VAR_1[(sizeof VAR_3) - VAR_4] = 0;
}
