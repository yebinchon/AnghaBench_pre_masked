
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Char ;



__attribute__((used)) static void
FUNC_0(Char *VAR_0, Char *VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
 if (*VAR_1 == (Char) 0)
     break;
 *VAR_0++ = *VAR_1++;
    }

    while (VAR_3 < VAR_2) {
 *VAR_0++ = ' ';
 VAR_3++;
    }
    *VAR_0 = (Char) 0;
}
