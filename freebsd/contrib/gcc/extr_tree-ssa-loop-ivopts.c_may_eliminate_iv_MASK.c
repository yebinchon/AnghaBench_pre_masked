
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
struct loop {int latch; } ;
struct ivopts_data {struct loop* current_loop; } ;
struct iv_use {scalar_t__ stmt; } ;
struct iv_cand {TYPE_3__* iv; } ;
typedef TYPE_1__* edge ;
typedef int basic_block ;
struct TYPE_6__ {scalar_t__ step; } ;
struct TYPE_5__ {int dest; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_5 (struct loop*,struct iv_cand*,scalar_t__,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (struct loop*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_3__*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct ivopts_data*,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_15 (struct ivopts_data *VAR_5,
    struct iv_use *VAR_6, struct iv_cand *VAR_7, tree *VAR_8)
{
  basic_block VAR_9;
  edge VAR_10;
  tree VAR_11, VAR_12;
  tree VAR_13, VAR_14, VAR_15;
  struct loop *VAR_16 = VAR_5->current_loop;

  if (FUNC_1 (VAR_7->iv->step) != VAR_3)
    return 0;



  VAR_9 = FUNC_4 (VAR_6->stmt);
  if (VAR_6->stmt != FUNC_13 (VAR_9)
      || FUNC_1 (VAR_6->stmt) != VAR_1)
    return 0;
  if (!FUNC_6 (VAR_0, VAR_16->latch, VAR_9))
    return 0;

  VAR_10 = FUNC_0 (VAR_9, 0);
  if (FUNC_7 (VAR_16, VAR_10->dest))
    VAR_10 = FUNC_0 (VAR_9, 1);
  if (FUNC_7 (VAR_16, VAR_10->dest))
    return 0;

  VAR_11 = FUNC_14 (VAR_5, VAR_10);
  if (!VAR_11)
    return 0;

  VAR_12 = FUNC_2 (VAR_11);




  VAR_14 = FUNC_12 (VAR_7->iv);
  if (!VAR_14)
    return 0;
  VAR_15 = FUNC_2 (VAR_14);

  VAR_13 = FUNC_2 (VAR_14);
  if (FUNC_3 (VAR_12) < FUNC_3 (VAR_15))
    VAR_13 = VAR_15;
  else
    VAR_13 = VAR_12;

  if (!FUNC_11 (FUNC_9 (VAR_2, VAR_4,
          FUNC_10 (VAR_13, VAR_14),
          FUNC_10 (VAR_13, VAR_11))))
    return 0;

  *VAR_8 = FUNC_8 (FUNC_5 (VAR_16, VAR_7, VAR_6->stmt, VAR_11));
  return 1;
}
