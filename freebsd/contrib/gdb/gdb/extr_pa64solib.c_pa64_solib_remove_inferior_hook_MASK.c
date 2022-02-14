
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dld_flags; int dld_flags_addr; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;

void
FUNC_1 (int VAR_2)
{

  VAR_1.dld_flags &= ~VAR_0;
  FUNC_0 (VAR_1.dld_flags_addr,
         (char *)&VAR_1.dld_flags,
         sizeof (VAR_1.dld_flags));
}
