
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ssize_t ;



__attribute__((used)) static inline ssize_t
FUNC_0 (const char *VAR_0)
{
    uint8_t VAR_1 = (uint8_t) *VAR_0;
    ssize_t VAR_2;

    if ((VAR_1 & 0x80) == 0x0)
 VAR_2 = 1;
    else if ((VAR_1 & 0xe0) == 0xc0)
 VAR_2 = 2;
    else if ((VAR_1 & 0xf0) == 0xe0)
 VAR_2 = 3;
    else if ((VAR_1 & 0xf8) == 0xf0)
 VAR_2 = 4;
    else
 VAR_2 = -1;

    return VAR_2;
}
