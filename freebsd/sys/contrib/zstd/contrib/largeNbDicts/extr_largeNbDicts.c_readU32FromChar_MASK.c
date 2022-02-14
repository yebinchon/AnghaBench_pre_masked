
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static unsigned FUNC_1(const char** VAR_0)
{
    unsigned VAR_1 = 0;
    while ((**VAR_0 >='0') && (**VAR_0 <='9')) {
        unsigned const VAR_2 = (((unsigned)(-1)) / 10) - 1;
        FUNC_0(VAR_1 <= VAR_2);
        VAR_1 *= 10, VAR_1 += **VAR_0 - '0', (*VAR_0)++ ;
    }
    if ((**VAR_0=='K') || (**VAR_0=='M')) {
        unsigned const VAR_3 = ((unsigned)(-1)) >> 10;
        FUNC_0(VAR_1 <= VAR_3);
        VAR_1 <<= 10;
        if (**VAR_0=='M') {
            FUNC_0(VAR_1 <= VAR_3);
            VAR_1 <<= 10;
        }
        (*VAR_0)++;
        if (**VAR_0=='i') (*VAR_0)++;
        if (**VAR_0=='B') (*VAR_0)++;
    }
    return VAR_1;
}
