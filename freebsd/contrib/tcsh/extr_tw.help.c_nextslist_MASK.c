
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;



__attribute__((used)) static void
FUNC_0(const Char *VAR_0, Char *VAR_1)
{
    if (!*VAR_0)
 *VAR_1 = '\000';
    else if (*VAR_0 == ':') {
 *VAR_1++ = '.';
 *VAR_1 = '\000';
    }
    else {
 while (*VAR_0 && *VAR_0 != ':')
     *VAR_1++ = *VAR_0++;
 *VAR_1 = '\000';
    }
}
