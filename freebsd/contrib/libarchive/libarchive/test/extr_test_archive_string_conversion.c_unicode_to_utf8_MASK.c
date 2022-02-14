
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static int
FUNC_0(char *VAR_0, uint32_t VAR_1)
{
        char *VAR_2 = VAR_0;


        if (VAR_1 <= 0x7f) {
                *VAR_0++ = (char)VAR_1;
        } else if (VAR_1 <= 0x7ff) {
                *VAR_0++ = 0xc0 | ((VAR_1 >> 6) & 0x1f);
                *VAR_0++ = 0x80 | (VAR_1 & 0x3f);
        } else if (VAR_1 <= 0xffff) {
                *VAR_0++ = 0xe0 | ((VAR_1 >> 12) & 0x0f);
                *VAR_0++ = 0x80 | ((VAR_1 >> 6) & 0x3f);
                *VAR_0++ = 0x80 | (VAR_1 & 0x3f);
        } else {
                *VAR_0++ = 0xf0 | ((VAR_1 >> 18) & 0x07);
                *VAR_0++ = 0x80 | ((VAR_1 >> 12) & 0x3f);
                *VAR_0++ = 0x80 | ((VAR_1 >> 6) & 0x3f);
                *VAR_0++ = 0x80 | (VAR_1 & 0x3f);
        }
        return ((int)(VAR_0 - VAR_2));
}
