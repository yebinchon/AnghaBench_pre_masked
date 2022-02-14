
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct loop {int outer; } ;
typedef scalar_t__ bitmap ;
typedef TYPE_1__* basic_block ;
struct TYPE_4__ {unsigned int index; struct loop* loop_father; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,unsigned int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (basic_block VAR_1, tree VAR_2, bitmap *VAR_3,
    bitmap VAR_4)
{
  unsigned VAR_5;
  basic_block VAR_6;
  struct loop *VAR_7;

  if (FUNC_3 (VAR_2) != VAR_0)
    return;


  if (!FUNC_6 (VAR_2))
    return;

  VAR_5 = FUNC_2 (VAR_2);
  VAR_6 = FUNC_4 (FUNC_1 (VAR_2));
  if (!VAR_6)
    return;
  VAR_7 = VAR_6->loop_father;


  if (!VAR_7->outer)
    return;

  if (!VAR_3[VAR_5])
    VAR_3[VAR_5] = FUNC_0 (((void*)0));
  FUNC_5 (VAR_3[VAR_5], VAR_1->index);

  FUNC_5 (VAR_4, VAR_5);
}
