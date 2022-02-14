
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tree ;
struct TYPE_7__ {int * prev; int next; } ;
struct TYPE_6__ {int imm_use; TYPE_5__ iter_node; } ;
typedef TYPE_1__ imm_use_iterator ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;

__attribute__((used)) static inline tree
FUNC_4 (imm_use_iterator *VAR_1)
{
  VAR_1->imm_use = VAR_1->iter_node.next;
  if (FUNC_2 (VAR_1))
    {
      if (VAR_1->iter_node.prev != ((void*)0))
 FUNC_1 (&VAR_1->iter_node);
      return VAR_0;
    }

  FUNC_3 (VAR_1->imm_use, VAR_1);
  return FUNC_0 (VAR_1->imm_use);

}
