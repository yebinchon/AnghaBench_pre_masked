
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(const unsigned char **VAR_0)
{
    const unsigned char *VAR_1 = *VAR_0;
    unsigned int VAR_2;
    VAR_2 = *VAR_1++;
    VAR_2 |= (*VAR_1++ << 8);
    VAR_2 |= (*VAR_1++ << 16);
    VAR_2 |= (*VAR_1++ << 24);
    *VAR_0 = VAR_1;
    return VAR_2;
}
