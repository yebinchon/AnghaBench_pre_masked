
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



__attribute__((used)) static int FUNC_0(uint8_t* VAR_0)
{
    if (*VAR_0 & 0x80)
    {
        if ((*VAR_0 & 0x7F) == 1)
            return VAR_0[1];
        else
            return *(uint16_t*)&VAR_0[1];
    }
    else
        return VAR_0[0];
}
