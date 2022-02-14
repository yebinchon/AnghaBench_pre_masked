
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int word; int bit_num; } ;
typedef TYPE_1__ sbitmap_iterator ;



__attribute__((used)) static inline void
FUNC_0 (sbitmap_iterator *VAR_0)
{
  VAR_0->word >>= 1;
  VAR_0->bit_num++;
}
