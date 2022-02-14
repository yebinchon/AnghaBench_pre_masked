
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0, int VAR_1)
{
    if (VAR_0) {
        switch (*VAR_0) {
        case 'f':
        case 'F':
        case 'n':
        case 'N':
        case '0':
            return 0;
        case 't':
        case 'T':
        case 'y':
        case 'Y':
        case '1':
            return 1;
        }
    }
    return VAR_1;
}
