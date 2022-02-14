
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(uint64_t VAR_2, char *VAR_3, int VAR_4)
{

    int VAR_5 = VAR_4;
    char *VAR_6 = VAR_3;
    VAR_2 |= (1ull << 63);
    VAR_2 += FUNC_1(VAR_0, VAR_1);
    while (VAR_5--)
        *VAR_6++ = FUNC_0(VAR_2++);
    VAR_3[VAR_4] = 0;






}
