
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;



__attribute__((used)) static int FUNC_0(unsigned long VAR_0)
{
    size_t VAR_1;
    unsigned long VAR_2 = 0;







    for (VAR_1 = 0; VAR_1 < sizeof(VAR_0) * 8; VAR_1++) {
        VAR_2 += (VAR_0 != 0);
        VAR_0 >>= 1;
    }

    return (int)VAR_2;
}
