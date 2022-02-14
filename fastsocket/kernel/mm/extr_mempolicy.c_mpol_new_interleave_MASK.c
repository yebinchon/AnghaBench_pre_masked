
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nodes; } ;
struct mempolicy {TYPE_1__ v; } ;
typedef int nodemask_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;

__attribute__((used)) static int FUNC_1(struct mempolicy *VAR_1, const nodemask_t *VAR_2)
{
 if (FUNC_0(*VAR_2))
  return -VAR_0;
 VAR_1->v.nodes = *VAR_2;
 return 0;
}
