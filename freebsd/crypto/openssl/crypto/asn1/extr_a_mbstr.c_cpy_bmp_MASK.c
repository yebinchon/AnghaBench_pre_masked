
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned long VAR_0, void *VAR_1)
{
    unsigned char **VAR_2, *VAR_3;
    VAR_2 = VAR_1;
    VAR_3 = *VAR_2;
    *VAR_3++ = (unsigned char)((VAR_0 >> 8) & 0xff);
    *VAR_3 = (unsigned char)(VAR_0 & 0xff);
    *VAR_2 += 2;
    return 1;
}
