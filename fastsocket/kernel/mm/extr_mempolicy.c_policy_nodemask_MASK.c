
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nodes; } ;
struct mempolicy {scalar_t__ mode; TYPE_1__ v; } ;
typedef int nodemask_t ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static nodemask_t *FUNC_3(gfp_t VAR_2, struct mempolicy *VAR_3)
{

 if (FUNC_2(VAR_3->mode == VAR_0) &&
   FUNC_1(VAR_2) >= VAR_1 &&
   FUNC_0(&VAR_3->v.nodes))
  return &VAR_3->v.nodes;

 return ((void*)0);
}
