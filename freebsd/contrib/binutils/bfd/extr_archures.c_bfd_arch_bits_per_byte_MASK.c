
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* arch_info; } ;
typedef TYPE_2__ bfd ;
struct TYPE_4__ {unsigned int bits_per_byte; } ;



unsigned int
FUNC_0 (bfd *VAR_0)
{
  return VAR_0->arch_info->bits_per_byte;
}
