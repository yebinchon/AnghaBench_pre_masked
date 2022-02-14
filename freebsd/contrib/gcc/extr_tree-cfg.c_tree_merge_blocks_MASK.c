
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int tree_stmt_iterator ;
typedef scalar_t__ tree ;
typedef int block_stmt_iterator ;
typedef TYPE_1__* basic_block ;
struct TYPE_14__ {int flags; } ;
struct TYPE_13__ {int index; scalar_t__ loop_father; int * stmt_list; } ;
typedef scalar_t__ SSA_NAME_DEF_STMT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,scalar_t__,int ) ;
 int FUNC_8 (int *,scalar_t__,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_16 (scalar_t__,char*,int,int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (scalar_t__,scalar_t__) ;
 int FUNC_21 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (scalar_t__,int *) ;
 int FUNC_24 (scalar_t__,scalar_t__) ;
 TYPE_4__* FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *,int *,int ) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_29 (basic_block VAR_10, basic_block VAR_11)
{
  block_stmt_iterator VAR_12;
  tree_stmt_iterator VAR_13;
  tree VAR_14;

  if (VAR_8)
    FUNC_16 (VAR_8, "Merging blocks %d and %d\n", VAR_10->index, VAR_11->index);



  VAR_12 = FUNC_9 (VAR_10);
  for (VAR_14 = FUNC_22 (VAR_11); VAR_14; VAR_14 = FUNC_22 (VAR_11))
    {
      tree VAR_15 = FUNC_3 (VAR_14), VAR_16 = FUNC_2 (VAR_14, 0);
      tree VAR_17;
      bool VAR_18 = FUNC_20 (VAR_15, VAR_16);



      if (VAR_7
   && FUNC_18 (VAR_15)
   && FUNC_5 (VAR_16) == VAR_5
   && VAR_10->loop_father != VAR_11->loop_father)
 VAR_18 = 0;

      if (!VAR_18)
 {
   FUNC_17 (FUNC_18 (VAR_15));





   VAR_17 = FUNC_14 (VAR_3, VAR_9, VAR_15, VAR_16);
   FUNC_7 (&VAR_12, VAR_17, VAR_0);
   FUNC_4 (VAR_14, VAR_4);
   SSA_NAME_DEF_STMT (VAR_19) = VAR_17;
 }
      else
 FUNC_24 (VAR_15, VAR_16);

      FUNC_23 (VAR_14, ((void*)0));
    }


  FUNC_21 (VAR_11, VAR_10);

  FUNC_17 (FUNC_25 (VAR_10)->flags & VAR_1);
  FUNC_17 (!FUNC_19 (VAR_10) || !FUNC_26 (FUNC_19 (VAR_10)));


  for (VAR_12 = FUNC_12 (VAR_11); !FUNC_6 (VAR_12);)
    {
      if (FUNC_5 (FUNC_13 (VAR_12)) == VAR_2)
 {
   tree VAR_20 = FUNC_13 (VAR_12);

   FUNC_11 (&VAR_12, 0);






   if (FUNC_0 (FUNC_1 (VAR_20)))
     {
       block_stmt_iterator VAR_21 = FUNC_12 (VAR_10);
       FUNC_8 (&VAR_21, VAR_20, VAR_0);
     }
 }
      else
 {
   FUNC_15 (FUNC_13 (VAR_12), VAR_10);
   FUNC_10 (&VAR_12);
 }
    }


  VAR_13 = FUNC_27 (VAR_10->stmt_list);
  FUNC_28 (&VAR_13, VAR_11->stmt_list, VAR_6);
  VAR_11->stmt_list = ((void*)0);
}
