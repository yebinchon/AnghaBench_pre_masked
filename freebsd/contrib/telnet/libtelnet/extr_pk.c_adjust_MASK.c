
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(char VAR_1[VAR_0+1], char *VAR_2)
{
        char *VAR_3;
        char *VAR_4;

        for (VAR_3 = VAR_2; *VAR_3; VAR_3++)
                ;
        for (VAR_4 = VAR_1 + VAR_0; VAR_3 >= VAR_2; VAR_3--, VAR_4--) {
                *VAR_4 = *VAR_3;
        }
        while (VAR_4 >= VAR_1) {
                *VAR_4-- = '0';
        }
}
