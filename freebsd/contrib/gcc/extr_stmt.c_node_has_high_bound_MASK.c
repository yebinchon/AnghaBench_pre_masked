
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* case_node_ptr ;
struct TYPE_3__ {int * low; struct TYPE_3__* parent; int high; scalar_t__ right; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6 (case_node_ptr VAR_1, tree VAR_2)
{
  tree VAR_3;
  case_node_ptr VAR_4;



  if (FUNC_1 (VAR_2) == ((void*)0))
    return 1;




  if (FUNC_4 (VAR_1->high, FUNC_1 (VAR_2)))
    return 1;





  if (VAR_1->right)
    return 0;

  VAR_3 = FUNC_3 (VAR_0, FUNC_0 (VAR_1->high),
          VAR_1->high,
          FUNC_2 (FUNC_0 (VAR_1->high), 1));




  if (! FUNC_5 (VAR_1->high, VAR_3))
    return 0;

  for (VAR_4 = VAR_1->parent; VAR_4; VAR_4 = VAR_4->parent)
    if (FUNC_4 (VAR_3, VAR_4->low))
      return 1;

  return 0;
}
