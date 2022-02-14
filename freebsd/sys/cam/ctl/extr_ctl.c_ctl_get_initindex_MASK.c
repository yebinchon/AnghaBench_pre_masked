
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ctl_nexus {int targ_port; scalar_t__ initid; } ;


 int VAR_0 ;

uint32_t
FUNC_0(struct ctl_nexus *VAR_1)
{
 return (VAR_1->initid + (VAR_1->targ_port * VAR_0));
}
