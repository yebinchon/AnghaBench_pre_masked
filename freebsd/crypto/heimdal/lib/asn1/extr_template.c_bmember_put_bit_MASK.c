
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (void const*,unsigned int,size_t) ;

__attribute__((used)) static void
FUNC_1(unsigned char *VAR_0, const void *VAR_1, unsigned int VAR_2,
  size_t VAR_3, unsigned int *VAR_4)
{
    unsigned int VAR_5 = VAR_2 % 8;

    if (FUNC_0(VAR_1, VAR_2, VAR_3)) {
 *VAR_0 |= (1 << (7 - VAR_5));
 if (*VAR_4 == 0)
     *VAR_4 = (7 - VAR_5) + 1;
    }
}
