
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdbarch {int dummy; } ;
struct TYPE_2__ {int bits_per_word; int bits_per_byte; } ;


 TYPE_1__* FUNC_0 (struct gdbarch*) ;

int
FUNC_1 (struct gdbarch *VAR_0)
{
  return (FUNC_0 (VAR_0)->bits_per_word
   / FUNC_0 (VAR_0)->bits_per_byte);
}
