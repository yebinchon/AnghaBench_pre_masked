
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* edge ;
typedef int block_stmt_iterator ;
typedef int basic_block ;
struct TYPE_5__ {int dest; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;

__attribute__((used)) static edge
FUNC_8 (basic_block VAR_8, tree VAR_9, basic_block VAR_10,
          basic_block VAR_11)
{
  block_stmt_iterator VAR_12;
  edge VAR_13, VAR_14;
  tree VAR_15, VAR_16, VAR_17;

  VAR_14 = FUNC_0 (VAR_8, 0);
  VAR_14->flags &= ~VAR_3;
  VAR_14->flags |= VAR_4;
  VAR_12 = FUNC_2 (VAR_8);

  VAR_16 = FUNC_3 (VAR_6, VAR_7,
                       FUNC_7 (VAR_10));
  VAR_17 = FUNC_3 (VAR_6, VAR_7,
                       FUNC_7 (VAR_14->dest));
  VAR_15 = FUNC_4 (VAR_2, VAR_7, VAR_9,
          VAR_16, VAR_17);
  FUNC_1 (&VAR_12, VAR_15, VAR_0);

  VAR_13 = FUNC_5 (VAR_8, VAR_10, VAR_5);
  FUNC_6 (VAR_1, VAR_10, VAR_11);
  return VAR_13;
}
