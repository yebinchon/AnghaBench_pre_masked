
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(uint32_t VAR_2)
{
    int VAR_3;
    int VAR_4 = 0;

    for(VAR_3=0;VAR_3<3;VAR_3++)
    {
        VAR_4 |= FUNC_0(VAR_0, VAR_1+VAR_3, VAR_2 & 0xFF);
        VAR_2 >>= 8;
    }
    return VAR_4;
}
