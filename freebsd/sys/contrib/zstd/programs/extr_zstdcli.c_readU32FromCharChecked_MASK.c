
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char** VAR_0, unsigned* VAR_1)
{
    unsigned VAR_2 = 0;
    while ((**VAR_0 >='0') && (**VAR_0 <='9')) {
        unsigned const VAR_3 = (((unsigned)(-1)) / 10) - 1;
        if (VAR_2 > VAR_3) return 1;
        VAR_2 *= 10;
        VAR_2 += (unsigned)(**VAR_0 - '0');
        (*VAR_0)++ ;
    }
    if ((**VAR_0=='K') || (**VAR_0=='M')) {
        unsigned const VAR_4 = ((unsigned)(-1)) >> 10;
        if (VAR_2 > VAR_4) return 1;
        VAR_2 <<= 10;
        if (**VAR_0=='M') {
            if (VAR_2 > VAR_4) return 1;
            VAR_2 <<= 10;
        }
        (*VAR_0)++;
        if (**VAR_0=='i') (*VAR_0)++;
        if (**VAR_0=='B') (*VAR_0)++;
    }
    *VAR_1 = VAR_2;
    return 0;
}
