
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

void
FUNC_1(const char **VAR_0,
   int VAR_1,
   int *VAR_2,
   int *VAR_3)
{
    int VAR_4;

    *VAR_3 = 0;
    *VAR_2 = 0;
    for (VAR_4 = 0; VAR_0[VAR_4] != 0; VAR_4++) {
 if (VAR_1) {
     *VAR_3 += 1;
     *VAR_2 = 1;
 } else {
     int VAR_5 = FUNC_0(VAR_0[VAR_4]);
     if (VAR_5 > *VAR_2)
  *VAR_2 = VAR_5;
     *VAR_3 += VAR_5;
 }
    }




    if (*VAR_2 < 6 - (*VAR_2 & 1))
 *VAR_2 = 6 - (*VAR_2 & 1);
    if (!VAR_1)
 *VAR_3 = *VAR_2 * VAR_4;
}
