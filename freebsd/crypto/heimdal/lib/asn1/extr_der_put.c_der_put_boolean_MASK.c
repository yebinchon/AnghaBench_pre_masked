
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int
FUNC_0(unsigned char *VAR_1, size_t VAR_2, const int *VAR_3, size_t *VAR_4)
{
    if(VAR_2 < 1)
 return VAR_0;
    if(*VAR_3 != 0)
 *VAR_1 = 0xff;
    else
 *VAR_1 = 0;
    *VAR_4 = 1;
    return 0;
}
