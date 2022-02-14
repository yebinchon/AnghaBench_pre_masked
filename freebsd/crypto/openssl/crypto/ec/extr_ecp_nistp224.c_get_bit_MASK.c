
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int* felem_bytearray ;



__attribute__((used)) static char FUNC_0(const felem_bytearray VAR_0, unsigned VAR_1)
{
    if (VAR_1 >= 224)
        return 0;
    return (VAR_0[VAR_1 >> 3] >> (VAR_1 & 7)) & 1;
}
