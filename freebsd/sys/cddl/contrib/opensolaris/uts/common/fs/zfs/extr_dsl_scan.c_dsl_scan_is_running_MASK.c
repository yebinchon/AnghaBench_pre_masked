
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ scn_state; } ;
struct TYPE_5__ {TYPE_1__ scn_phys; } ;
typedef TYPE_2__ dsl_scan_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline boolean_t
FUNC_0(const dsl_scan_t *VAR_1)
{
 return (VAR_1->scn_phys.scn_state == VAR_0);
}
