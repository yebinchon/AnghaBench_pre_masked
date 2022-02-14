
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int scn_flags; } ;
struct TYPE_5__ {TYPE_1__ scn_phys; int scn_dp; } ;
typedef TYPE_2__ dsl_scan_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

boolean_t
FUNC_1(const dsl_scan_t *VAR_1)
{
 return (FUNC_0(VAR_1->scn_dp) &&
     VAR_1->scn_phys.scn_flags & VAR_0);
}
