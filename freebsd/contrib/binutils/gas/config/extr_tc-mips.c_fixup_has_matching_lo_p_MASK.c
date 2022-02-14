
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fx_addsy; scalar_t__ fx_offset; TYPE_1__* fx_next; } ;
typedef TYPE_2__ fixS ;
typedef int bfd_boolean ;
struct TYPE_4__ {scalar_t__ fx_r_type; scalar_t__ fx_addsy; scalar_t__ fx_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bfd_boolean
FUNC_0 (fixS *VAR_2)
{
  return (VAR_2->fx_next != ((void*)0)
   && (VAR_2->fx_next->fx_r_type == VAR_0
      || VAR_2->fx_next->fx_r_type == VAR_1)
   && VAR_2->fx_addsy == VAR_2->fx_next->fx_addsy
   && VAR_2->fx_offset == VAR_2->fx_next->fx_offset);
}
