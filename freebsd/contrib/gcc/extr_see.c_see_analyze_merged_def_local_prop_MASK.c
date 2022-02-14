
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct see_register_properties {int bitmap_index; scalar_t__ first_se_after_last_def; struct see_occr* avail_occr; int regno; } ;
struct see_ref_s {void* insn; } ;
struct see_pre_extension_expr {int bitmap_index; scalar_t__ first_se_after_last_def; struct see_occr* avail_occr; int regno; } ;
struct see_occr {int block_num; struct see_occr* next; void* insn; } ;
typedef void* rtx ;
typedef struct see_register_properties* htab_t ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,void*) ;
 int VAR_1 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct see_register_properties*) ;
 scalar_t__ FUNC_6 (struct see_register_properties*,struct see_register_properties*,int ) ;
 struct see_register_properties** VAR_5 ;
 void* FUNC_7 (void*,int) ;
 struct see_register_properties* FUNC_8 (void*,int ) ;
 int * VAR_6 ;
 struct see_occr* FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10 (void **VAR_7, void *VAR_8)
{
  rtx VAR_9 = *VAR_7;
  struct see_ref_s *VAR_10 = (struct see_ref_s *) VAR_8;
  rtx VAR_11 = VAR_10->insn;
  struct see_pre_extension_expr *VAR_12;
  int VAR_13;
  int VAR_14 = FUNC_0 (VAR_11);
  htab_t VAR_15;
  struct see_register_properties *VAR_16, **VAR_17;
  struct see_register_properties VAR_18;
  rtx VAR_19 = FUNC_7 (VAR_9, 1);
  struct see_occr *VAR_20 = ((void*)0);
  struct see_occr *VAR_21 = ((void*)0);

  VAR_12 = FUNC_8 (VAR_9, VAR_0);

  FUNC_5 (VAR_12);

  VAR_15 = VAR_5[VAR_14];
  FUNC_5 (VAR_15);
  VAR_18.regno = FUNC_2 (VAR_19);
  VAR_17 =
    (struct see_register_properties **) FUNC_6 (VAR_15,
       &VAR_18, VAR_1);
  VAR_16 = *VAR_17;
  FUNC_5 (VAR_16);

  VAR_13 = VAR_12->bitmap_index;


  FUNC_3 (VAR_6[VAR_14], VAR_13);

  FUNC_3 (VAR_2[VAR_14], VAR_13);

  if (VAR_16->first_se_after_last_def == FUNC_1 (VAR_4, VAR_11))
    {

      FUNC_4 (VAR_3[VAR_14], VAR_13);

      VAR_20 = FUNC_9 (sizeof (struct see_occr));
      VAR_20->next = ((void*)0);
      VAR_20->insn = VAR_9;
      VAR_20->block_num = VAR_14;
      VAR_21 = VAR_12->avail_occr;
      if (!VAR_21)
 VAR_12->avail_occr = VAR_20;
      else
 {
   while (VAR_21->next)
     VAR_21 = VAR_21->next;
   VAR_21->next = VAR_20;
 }
    }

  return 1;
}
