
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ppc_gp0_regnum; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (int VAR_1)
{
  int VAR_2;
  if (0 <= VAR_1 && VAR_1 <= 31)
    return VAR_1 + FUNC_0 (VAR_0)->ppc_gp0_regnum;
  else
    return VAR_1;
}
