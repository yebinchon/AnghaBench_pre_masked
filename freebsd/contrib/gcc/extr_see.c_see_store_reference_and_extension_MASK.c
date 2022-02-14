
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct see_ref_s {int * merged_def_se_hash; int * unmerged_def_se_hash; int * use_se_hash; int * merged_insn; int * insn; int luid; } ;
typedef int splay_tree_value ;
typedef TYPE_1__* splay_tree_node ;
typedef int * rtx ;
typedef void* htab_t ;
typedef enum extension_type { ____Placeholder_extension_type } extension_type ;
struct TYPE_3__ {scalar_t__ value; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;


 int VAR_0 ;
 int FUNC_2 (int *) ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int VAR_3 ;
 void* FUNC_5 (int,int ,int ,int *) ;
 scalar_t__ FUNC_6 (void*,int *,int ) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ) ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (scalar_t__,int ,int ) ;
 TYPE_1__* FUNC_9 (scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int ,int *,int ) ;
 struct see_ref_s* FUNC_11 (int) ;

__attribute__((used)) static bool
FUNC_12 (rtx VAR_8, rtx VAR_9,
       enum extension_type VAR_10)
{
  rtx *VAR_11;
  int VAR_12;
  splay_tree_node VAR_13 = ((void*)0);
  htab_t VAR_14 = ((void*)0);
  struct see_ref_s *VAR_15 = ((void*)0);


  FUNC_3 (VAR_8 && VAR_9);
  if (!VAR_5)
    return 0;

  VAR_12 = FUNC_0 (VAR_8);
  FUNC_3 (VAR_12 < VAR_4 && VAR_12 >= 0);


  if (!VAR_5[VAR_12])

    VAR_5[VAR_12] = FUNC_10 (VAR_7,
          ((void*)0), VAR_6);
  else


    {
      VAR_13 = FUNC_9 (VAR_5[VAR_12],
          FUNC_1 (VAR_1, VAR_8));
      if (VAR_13)
 switch (VAR_10)
   {
   case 130:
     VAR_14 =
       ((struct see_ref_s *) (VAR_13->value))->unmerged_def_se_hash;
     if (!VAR_14)
       {
  VAR_14 = FUNC_5 (10,
           VAR_3,
           VAR_2,
           ((void*)0));
  ((struct see_ref_s *) (VAR_13->value))->unmerged_def_se_hash =
    VAR_14;
       }
     break;
   case 129:
     VAR_14 = ((struct see_ref_s *) (VAR_13->value))->merged_def_se_hash;
     if (!VAR_14)
       {
  VAR_14 = FUNC_5 (10,
           VAR_3,
           VAR_2,
           ((void*)0));
  ((struct see_ref_s *) (VAR_13->value))->merged_def_se_hash =
    VAR_14;
       }
     break;
   case 128:
     VAR_14 = ((struct see_ref_s *) (VAR_13->value))->use_se_hash;
     if (!VAR_14)
       {
  VAR_14 = FUNC_5 (10,
           VAR_3,
           VAR_2,
           ((void*)0));
  ((struct see_ref_s *) (VAR_13->value))->use_se_hash = VAR_14;
       }
     break;
   default:
     FUNC_4 ();
   }
    }



  if (!VAR_13)
    {
      VAR_15 = FUNC_11 (sizeof (struct see_ref_s));
      VAR_15->luid = FUNC_1 (VAR_1, VAR_8);
      VAR_15->insn = VAR_8;
      VAR_15->merged_insn = ((void*)0);


      switch (VAR_10)
 {
 case 130:
   VAR_15->unmerged_def_se_hash = FUNC_5 (10,
           VAR_3,
           VAR_2,
           ((void*)0));
   VAR_14 = VAR_15->unmerged_def_se_hash;
   VAR_15->merged_def_se_hash = ((void*)0);
   VAR_15->use_se_hash = ((void*)0);
   break;
 case 129:
   VAR_15->merged_def_se_hash = FUNC_5 (10,
         VAR_3,
         VAR_2,
         ((void*)0));
   VAR_14 = VAR_15->merged_def_se_hash;
   VAR_15->unmerged_def_se_hash = ((void*)0);
   VAR_15->use_se_hash = ((void*)0);
   break;
 case 128:
   VAR_15->use_se_hash = FUNC_5 (10,
         VAR_3,
         VAR_2,
         ((void*)0));
   VAR_14 = VAR_15->use_se_hash;
   VAR_15->unmerged_def_se_hash = ((void*)0);
   VAR_15->merged_def_se_hash = ((void*)0);
   break;
 default:
   FUNC_4 ();
 }
    }



  VAR_11 = (rtx *) FUNC_6 (VAR_14, VAR_9, VAR_0);
  if (*VAR_11 != ((void*)0))
    {
      FUNC_3 (VAR_10 == 128);
      FUNC_3 (FUNC_7 (FUNC_2 (*VAR_11), FUNC_2 (VAR_9)));
    }
  else
    *VAR_11 = VAR_9;


  if (!VAR_13)
    FUNC_8 (VAR_5[VAR_12],
         FUNC_1 (VAR_1, VAR_8), (splay_tree_value) VAR_15);
  return 1;
}
