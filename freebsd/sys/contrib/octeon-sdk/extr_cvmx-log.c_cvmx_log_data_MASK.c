
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

void FUNC_2(uint64_t VAR_1, const uint64_t *VAR_2)
{
    if (VAR_1 > 255)
        VAR_1 = 255;

    FUNC_1(FUNC_0(VAR_0, VAR_1));
    while (VAR_1--)
        FUNC_1(*VAR_2++);
}
