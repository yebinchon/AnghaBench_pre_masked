
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int (* walk_namespaces_fn ) (scalar_t__,void*) ;
typedef scalar_t__ tree ;
struct TYPE_2__ {scalar_t__ namespaces; } ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,void*) ;

__attribute__((used)) static int
FUNC_3 (tree VAR_0, walk_namespaces_fn VAR_1, void* VAR_2)
{
  int VAR_3 = 0;
  tree VAR_4 = FUNC_0 (VAR_0)->namespaces;

  VAR_3 |= (*VAR_1) (VAR_0, VAR_2);

  for (; VAR_4; VAR_4 = FUNC_1 (VAR_4))
    VAR_3 |= FUNC_3 (VAR_4, VAR_1, VAR_2);

  return VAR_3;
}
