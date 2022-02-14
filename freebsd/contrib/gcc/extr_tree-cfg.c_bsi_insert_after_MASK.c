
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef enum tsi_iterator_update { ____Placeholder_tsi_iterator_update } tsi_iterator_update ;
typedef enum bsi_iterator_update { ____Placeholder_bsi_iterator_update } bsi_iterator_update ;
struct TYPE_3__ {int tsi; int bb; } ;
typedef TYPE_1__ block_stmt_iterator ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ) ;

void
FUNC_3 (block_stmt_iterator *VAR_0, tree VAR_1, enum bsi_iterator_update VAR_2)
{
  FUNC_0 (VAR_1, VAR_0->bb);
  FUNC_2 (VAR_1);
  FUNC_1 (&VAR_0->tsi, VAR_1, (enum tsi_iterator_update) VAR_2);
}
