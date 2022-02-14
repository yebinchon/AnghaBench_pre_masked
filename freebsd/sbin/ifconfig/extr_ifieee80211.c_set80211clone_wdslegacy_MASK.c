
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afswtch {int dummy; } ;
struct TYPE_2__ {int icp_flags; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(const char *VAR_2, int VAR_3, int VAR_4, const struct afswtch *VAR_5)
{
 if (VAR_3)
  VAR_1.icp_flags |= VAR_0;
 else
  VAR_1.icp_flags &= ~VAR_0;
}
