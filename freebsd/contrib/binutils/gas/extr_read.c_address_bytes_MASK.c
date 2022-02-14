
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* arch_info; } ;
struct TYPE_3__ {int bits_per_address; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static inline int
FUNC_0 (void)
{


  int VAR_1 = (VAR_0->arch_info->bits_per_address - 1) / 8;
  VAR_1 |= VAR_1 >> 1;
  VAR_1 |= VAR_1 >> 2;
  VAR_1 += 1;
  return VAR_1;
}
