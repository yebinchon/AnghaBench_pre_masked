
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int * edge ;
typedef TYPE_1__* basic_block ;
struct TYPE_13__ {int loop_depth; int frequency; int count; } ;
struct TYPE_12__ {TYPE_1__* (* split_block ) (TYPE_1__*,void*) ;int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_11__* VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int * FUNC_2 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_3 (int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,void*) ;

edge
FUNC_6 (basic_block VAR_3, void *VAR_4)
{
  basic_block VAR_5;

  if (!VAR_2->split_block)
    FUNC_1 ("%s does not support split_block", VAR_2->name);

  VAR_5 = VAR_2->split_block (VAR_3, VAR_4);
  if (!VAR_5)
    return ((void*)0);

  VAR_5->count = VAR_3->count;
  VAR_5->frequency = VAR_3->frequency;
  VAR_5->loop_depth = VAR_3->loop_depth;

  if (FUNC_0 (VAR_0))
    {
      FUNC_3 (VAR_0, VAR_3, VAR_5);
      FUNC_4 (VAR_0, VAR_5, VAR_3);
    }

  return FUNC_2 (VAR_3, VAR_5, VAR_1);
}
