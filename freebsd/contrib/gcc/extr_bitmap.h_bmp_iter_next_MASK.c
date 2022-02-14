
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bits; } ;
typedef TYPE_1__ bitmap_iterator ;



__attribute__((used)) static inline void
FUNC_0 (bitmap_iterator *VAR_0, unsigned *VAR_1)
{
  VAR_0->bits >>= 1;
  *VAR_1 += 1;
}
