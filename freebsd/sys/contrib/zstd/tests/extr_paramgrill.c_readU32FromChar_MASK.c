
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static unsigned FUNC_2(const char** VAR_0)
{
    const char VAR_1[] = "error: numeric value too large";
    unsigned VAR_2 = 1;
    unsigned VAR_3 = 0;
    if(**VAR_0 == '-') { VAR_2 = (unsigned)-1; (*VAR_0)++; }
    while ((**VAR_0 >='0') && (**VAR_0 <='9')) {
        unsigned const VAR_4 = (((unsigned)(-1)) / 10) - 1;
        if (VAR_3 > VAR_4) FUNC_1(VAR_1);
        VAR_3 *= 10;
        FUNC_0(**VAR_0 >= '0');
        VAR_3 += (unsigned)(**VAR_0 - '0');
        (*VAR_0)++ ;
    }
    if ((**VAR_0=='K') || (**VAR_0=='M')) {
        unsigned const VAR_5 = ((unsigned)(-1)) >> 10;
        if (VAR_3 > VAR_5) FUNC_1(VAR_1);
        VAR_3 <<= 10;
        if (**VAR_0=='M') {
            if (VAR_3 > VAR_5) FUNC_1(VAR_1);
            VAR_3 <<= 10;
        }
        (*VAR_0)++;
        if (**VAR_0=='i') (*VAR_0)++;
        if (**VAR_0=='B') (*VAR_0)++;
    }
    return VAR_3 * VAR_2;
}
