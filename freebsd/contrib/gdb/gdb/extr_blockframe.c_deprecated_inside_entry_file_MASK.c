
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ deprecated_entry_file_lowpc; scalar_t__ deprecated_entry_file_highpc; } ;
struct TYPE_4__ {TYPE_1__ ei; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 TYPE_2__* VAR_3 ;

int
FUNC_1 (CORE_ADDR VAR_4)
{
  if (VAR_4 == 0)
    return 1;
  if (VAR_3 == 0)
    return 0;
  if (VAR_2 == VAR_0
      || VAR_2 == VAR_1)
    {



      if (FUNC_0 (VAR_4, 0, 0))
 return 0;
    }
  return (VAR_4 >= VAR_3->ei.deprecated_entry_file_lowpc &&
   VAR_4 < VAR_3->ei.deprecated_entry_file_highpc);
}
