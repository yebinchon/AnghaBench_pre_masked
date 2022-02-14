
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_niter_desc {int dummy; } ;
struct loop {int num_nodes; } ;


 int FUNC_0 (struct loop*,unsigned int,struct tree_niter_desc*) ;

__attribute__((used)) static bool
FUNC_1 (struct loop *VAR_0, struct tree_niter_desc *VAR_1,
        unsigned VAR_2)
{
  if (!FUNC_0 (VAR_0, VAR_2, VAR_1))
    return 0;






  if (VAR_0->num_nodes > 2)
    return 0;

  return 1;
}
