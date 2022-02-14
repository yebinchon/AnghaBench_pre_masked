
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct loop {int nb_iterations; TYPE_1__* single_exit; int latch; } ;
typedef TYPE_1__* edge ;
typedef int block_stmt_iterator ;
struct TYPE_2__ {int flags; int dest; } ;
typedef scalar_t__ LOC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ,int ,struct loop*,int *,int,int *,int *) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_11 (struct loop*) ;
 int FUNC_12 (scalar_t__,char*,char*,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct loop*) ;
 int FUNC_15 (scalar_t__,int ,int ) ;
 int FUNC_16 (struct loop*,int *,int*) ;
 int FUNC_17 (int ) ;
 int VAR_13 ;

void
FUNC_18 (struct loop *VAR_14, tree VAR_15)
{
  tree VAR_16, VAR_17, VAR_18, VAR_19;
  tree VAR_20;
  edge VAR_21 = VAR_14->single_exit;
  block_stmt_iterator VAR_22;
  block_stmt_iterator VAR_23;
  bool VAR_24;
  tree VAR_25 = FUNC_17 (VAR_14->latch);
  tree VAR_26 = FUNC_17 (VAR_14->single_exit->dest);
  tree VAR_27 = FUNC_9 (FUNC_2 (VAR_15), 0);
  tree VAR_28 = FUNC_9 (FUNC_2 (VAR_15), 1);
  tree VAR_29;
  tree VAR_30;
  LOC VAR_31;

  VAR_20 = FUNC_14 (VAR_14);
  FUNC_13 (VAR_20);
  VAR_22 = FUNC_3 (VAR_20);

  FUNC_16 (VAR_14, &VAR_23, &VAR_24);
  FUNC_10 (VAR_27, VAR_28, VAR_6, VAR_14,
             &VAR_23, VAR_24, &VAR_16, &VAR_17);

  if (VAR_21->flags & VAR_2)
    {
      VAR_19 = FUNC_7 (VAR_3, VAR_10, VAR_17, VAR_15);
      VAR_29 = FUNC_6 (VAR_4, VAR_13, VAR_26);
      VAR_30 = FUNC_6 (VAR_4, VAR_13, VAR_25);
    }
  else
    {
      VAR_19 = FUNC_7 (VAR_5, VAR_10, VAR_17, VAR_15);
      VAR_29 = FUNC_6 (VAR_4, VAR_13, VAR_25);
      VAR_30 = FUNC_6 (VAR_4, VAR_13, VAR_26);
    }

  VAR_18 = FUNC_8 (VAR_1, FUNC_2 (VAR_20), VAR_19,
       VAR_29, VAR_30);
  FUNC_4 (&VAR_22, VAR_18, VAR_0);


  FUNC_5 (&VAR_22, 1);

  VAR_31 = FUNC_11 (VAR_14);
  if (VAR_11 && (VAR_12 & VAR_7))
    {
      if (VAR_31 != VAR_9)
        FUNC_12 (VAR_11, "\nloop at %s:%d: ",
                 FUNC_0 (VAR_31), FUNC_1 (VAR_31));
      FUNC_15 (VAR_11, VAR_18, VAR_8);
    }

  VAR_14->nb_iterations = VAR_15;
}
