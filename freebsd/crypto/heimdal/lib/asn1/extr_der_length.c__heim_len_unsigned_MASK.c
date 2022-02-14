
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t
FUNC_0 (unsigned VAR_0)
{
    size_t VAR_1 = 0;
    int VAR_2;

    do {
 ++VAR_1;
 VAR_2 = (VAR_0 >= 128);
 VAR_0 /= 256;
    } while (VAR_0);

    if(VAR_2)
 VAR_1++;

    return VAR_1;
}
