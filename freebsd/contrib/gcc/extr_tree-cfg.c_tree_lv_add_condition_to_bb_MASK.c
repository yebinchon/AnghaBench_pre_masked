
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* edge ;
typedef int block_stmt_iterator ;
typedef int basic_block ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_6 (basic_block VAR_7, basic_block VAR_8,
                            basic_block VAR_9, void *VAR_10)
{
  block_stmt_iterator VAR_11;
  tree VAR_12 = VAR_5;
  tree VAR_13 = VAR_5;
  tree VAR_14 = VAR_5;
  tree VAR_15 = (tree) VAR_10;
  edge VAR_16;


  VAR_12 = FUNC_2 (VAR_4, VAR_6, FUNC_5 (VAR_7));
  VAR_13 = FUNC_2 (VAR_4, VAR_6, FUNC_5 (VAR_8));
  VAR_14 = FUNC_3 (VAR_1, VAR_6, VAR_15, VAR_12, VAR_13);


  VAR_11 = FUNC_1 (VAR_9);
  FUNC_0 (&VAR_11, VAR_14, VAR_0);


  VAR_16 = FUNC_4 (VAR_9);
  VAR_16->flags &= ~VAR_2;
  VAR_16->flags |= VAR_3;
}
