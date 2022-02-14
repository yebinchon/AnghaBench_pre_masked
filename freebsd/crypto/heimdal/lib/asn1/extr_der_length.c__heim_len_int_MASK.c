
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t
FUNC_0 (int VAR_0)
{
    unsigned char VAR_1;
    size_t VAR_2 = 0;

    if (VAR_0 >= 0) {
 do {
     VAR_1 = VAR_0 % 256;
     VAR_2++;
     VAR_0 /= 256;
 } while(VAR_0);
 if(VAR_1 >= 128)
     VAR_2++;
    } else {
 VAR_0 = ~VAR_0;
 do {
     VAR_1 = ~(VAR_0 % 256);
     VAR_2++;
     VAR_0 /= 256;
 } while(VAR_0);
 if(VAR_1 < 128)
     VAR_2++;
    }
    return VAR_2;
}
