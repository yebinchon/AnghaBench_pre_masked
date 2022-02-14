
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum bfd_architecture { ____Placeholder_bfd_architecture } bfd_architecture ;
struct TYPE_3__ {int bits_per_byte; } ;
typedef TYPE_1__ bfd_arch_info_type ;


 TYPE_1__* FUNC_0 (int,unsigned long) ;

unsigned int
FUNC_1 (enum bfd_architecture VAR_0,
          unsigned long VAR_1)
{
  const bfd_arch_info_type *VAR_2 = FUNC_0 (VAR_0, VAR_1);

  if (VAR_2)
    return VAR_2->bits_per_byte / 8;
  return 1;
}
