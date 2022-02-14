
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static
void FUNC_1(int VAR_2, uint64_t VAR_3)
{
    uint64_t VAR_4;
    VAR_4 = (1ull << 63) - VAR_3;

    if (!VAR_2) {
        FUNC_0(VAR_4, VAR_0);
    } else
        FUNC_0(VAR_4, VAR_1);
}
