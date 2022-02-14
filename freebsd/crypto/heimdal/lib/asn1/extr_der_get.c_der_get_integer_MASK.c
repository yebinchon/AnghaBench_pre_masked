
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int
FUNC_0 (const unsigned char *VAR_1, size_t VAR_2,
   int *VAR_3, size_t *VAR_4)
{
    int VAR_5 = 0;
    size_t VAR_6 = VAR_2;

    if (VAR_2 > sizeof(int))
 return VAR_0;

    if (VAR_2 > 0) {
 VAR_5 = (signed char)*VAR_1++;
 while (--VAR_2)
     VAR_5 = VAR_5 * 256 + *VAR_1++;
    }
    *VAR_3 = VAR_5;
    if(VAR_4) *VAR_4 = VAR_6;
    return 0;
}
