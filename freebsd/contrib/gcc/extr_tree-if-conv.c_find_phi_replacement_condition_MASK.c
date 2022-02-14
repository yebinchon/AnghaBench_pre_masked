
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tree ;
struct loop {TYPE_2__* header; } ;
typedef TYPE_1__* edge ;
typedef int block_stmt_iterator ;
typedef TYPE_2__* basic_block ;
struct TYPE_10__ {int aux; int preds; } ;
struct TYPE_9__ {TYPE_2__* src; scalar_t__ aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int ,int ,int,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_8 (int ,int*,int,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;

__attribute__((used)) static basic_block
FUNC_15 (struct loop *VAR_6,
    basic_block VAR_7, tree *VAR_8,
                                block_stmt_iterator *VAR_9)
{
  edge VAR_10, VAR_11;
  tree VAR_12, VAR_13;

  FUNC_9 (FUNC_0 (VAR_7->preds) == 2);
  VAR_10 = FUNC_1 (VAR_7, 0);
  VAR_11 = FUNC_1 (VAR_7, 1);
  VAR_12 = (VAR_10->src)->aux;
  if (FUNC_2 (VAR_12) == VAR_4)
    {
      edge VAR_14;

      VAR_14 = VAR_10;
      VAR_10 = VAR_11;
      VAR_11 = VAR_14;
    }



  if (VAR_10->src == VAR_6->header
      || FUNC_7 (VAR_1,
    VAR_11->src, VAR_10->src))
    {
      *VAR_8 = (VAR_11->src)->aux;



      if (VAR_11->aux)
 *VAR_8 = FUNC_6 (VAR_3, VAR_5,
   *VAR_8, VAR_11->aux);

      if (FUNC_2 (*VAR_8) == VAR_4)


 *VAR_8 = FUNC_11 (*VAR_8);
      else

 VAR_10 = VAR_11;
    }
  else
    {

      *VAR_8 = (VAR_10->src)->aux;



      if (VAR_10->aux)
 *VAR_8 = FUNC_6 (VAR_3, VAR_5,
   *VAR_8, VAR_10->aux);
    }






  *VAR_8 = FUNC_8 (FUNC_14 (*VAR_8), &VAR_13,
    0, VAR_2);
  if (VAR_13)
    FUNC_5 (VAR_9, VAR_13, VAR_0);
  if (!FUNC_13 (*VAR_8) && !FUNC_12 (*VAR_8))
    {
      tree VAR_15;

      VAR_15 = FUNC_10 (FUNC_4 (*VAR_8), FUNC_14 (*VAR_8));
      FUNC_5 (VAR_9, VAR_15, VAR_0);
      *VAR_8 = FUNC_3 (VAR_15, 0);
    }

  FUNC_9 (*VAR_8);

  return VAR_10->src;
}
