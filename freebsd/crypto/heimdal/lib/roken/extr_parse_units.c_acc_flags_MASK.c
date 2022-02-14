
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(int VAR_0, int VAR_1, unsigned VAR_2)
{
    if(VAR_1 == 1)
 return VAR_0 | VAR_2;
    else if(VAR_1 == -1)
 return VAR_0 & ~VAR_2;
    else if (VAR_1 == 0)
 return VAR_2;
    else
 return -1;
}
