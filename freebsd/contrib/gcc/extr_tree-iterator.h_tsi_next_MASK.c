
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ptr; } ;
typedef TYPE_2__ tree_stmt_iterator ;
struct TYPE_4__ {struct TYPE_4__* next; } ;



__attribute__((used)) static inline void
FUNC_0 (tree_stmt_iterator *VAR_0)
{
  VAR_0->ptr = VAR_0->ptr->next;
}
