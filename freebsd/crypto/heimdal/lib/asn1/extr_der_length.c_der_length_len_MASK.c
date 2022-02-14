
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t
FUNC_0 (size_t VAR_0)
{
    if (VAR_0 < 128)
 return 1;
    else {
 int VAR_1 = 0;
 do {
     ++VAR_1;
     VAR_0 /= 256;
 } while (VAR_0);
 return VAR_1 + 1;
    }
}
