
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_4__ {TYPE_1__** parray; } ;
struct TYPE_3__ {int estimated_nb_iterations; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static tree
FUNC_3 (int VAR_3)
{
  tree VAR_4 = FUNC_2 (VAR_2->parray[VAR_3]);

  if (FUNC_0 (VAR_4) != VAR_0)
    VAR_4 = VAR_2->parray[VAR_3]->estimated_nb_iterations;
  if (FUNC_1 (VAR_4))
    return VAR_1;
  return VAR_4;
}
