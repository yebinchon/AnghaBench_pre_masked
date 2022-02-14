
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t
FUNC_0(unsigned int VAR_0)
{
    size_t VAR_1 = 0;

    if(VAR_0 <= 30)
 return 1;
    while(VAR_0) {
 VAR_0 /= 128;
 VAR_1++;
    }
    return VAR_1 + 1;
}
