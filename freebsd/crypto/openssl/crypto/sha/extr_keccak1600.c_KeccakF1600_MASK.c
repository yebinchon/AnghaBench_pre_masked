
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int **,int **,size_t) ;

__attribute__((used)) static void FUNC_1(uint64_t VAR_0[5][5])
{
    uint64_t VAR_1[5][5];
    size_t VAR_2;
    for (VAR_2 = 0; VAR_2 < 24; VAR_2 += 2) {
        FUNC_0(VAR_1, VAR_0, VAR_2);
        FUNC_0(VAR_0, VAR_1, VAR_2 + 1);
    }
}
