
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;

__attribute__((used)) static int
FUNC_0(const char *VAR_1)
{
    long VAR_2 = 0;

    while (*VAR_1) {
 VAR_2 += (long) (*VAR_1 + (*(VAR_1 + 1) << 8));
 VAR_1++;
    }

    return (int) (VAR_2 % VAR_0);
}
