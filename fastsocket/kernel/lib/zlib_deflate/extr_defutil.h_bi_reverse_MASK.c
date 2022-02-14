
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned FUNC_0(unsigned VAR_0,
      int VAR_1)
{
    register unsigned VAR_2 = 0;
    do {
        VAR_2 |= VAR_0 & 1;
        VAR_0 >>= 1, VAR_2 <<= 1;
    } while (--VAR_1 > 0);
    return VAR_2 >> 1;
}
