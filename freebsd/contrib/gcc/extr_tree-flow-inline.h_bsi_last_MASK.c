
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * container; int * ptr; } ;
struct TYPE_6__ {TYPE_2__* bb; TYPE_3__ tsi; } ;
typedef TYPE_1__ block_stmt_iterator ;
typedef TYPE_2__* basic_block ;
struct TYPE_7__ {scalar_t__ index; scalar_t__ stmt_list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_3__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline block_stmt_iterator
FUNC_2 (basic_block VAR_1)
{
  block_stmt_iterator VAR_2;
  if (VAR_1->stmt_list)
    VAR_2.tsi = FUNC_1 (VAR_1->stmt_list);
  else
    {
      FUNC_0 (VAR_1->index < VAR_0);
      VAR_2.tsi.ptr = ((void*)0);
      VAR_2.tsi.container = ((void*)0);
    }
  VAR_2.bb = VAR_1;
  return VAR_2;
}
