
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static inline void FUNC_2(uint64_t VAR_0, int VAR_1, int VAR_2, uint64_t VAR_3)
{
    VAR_0 = (1ull << 63) | (VAR_0 + VAR_1);
    switch (VAR_2)
    {
        case 4:
            FUNC_0(VAR_0, VAR_3);
            break;
        case 8:
            FUNC_1(VAR_0, VAR_3);
            break;
        default:
            break;
    }
}
