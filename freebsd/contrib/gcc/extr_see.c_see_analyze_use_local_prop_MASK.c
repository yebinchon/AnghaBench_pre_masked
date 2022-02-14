
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct see_register_properties {int bitmap_index; scalar_t__ first_se_before_any_def; scalar_t__ last_def; scalar_t__ first_se_after_last_def; struct see_occr* avail_occr; struct see_occr* antic_occr; int regno; } ;
struct see_ref_s {void* insn; } ;
struct see_pre_extension_expr {int bitmap_index; scalar_t__ first_se_before_any_def; scalar_t__ last_def; scalar_t__ first_se_after_last_def; struct see_occr* avail_occr; struct see_occr* antic_occr; int regno; } ;
struct see_occr {int block_num; struct see_occr* next; void* insn; } ;
typedef void* rtx ;
typedef struct see_register_properties* htab_t ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int ,void*) ;
 int VAR_0 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct see_register_properties*) ;
 scalar_t__ FUNC_6 (struct see_register_properties*,struct see_register_properties*,int ) ;
 struct see_register_properties** VAR_6 ;
 void* FUNC_7 (void*,int) ;
 struct see_register_properties* FUNC_8 (void*,int ) ;
 struct see_occr* FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10 (void **VAR_7, void *VAR_8)
{
  struct see_ref_s *VAR_9 = (struct see_ref_s *) VAR_8;
  rtx VAR_10 = *VAR_7;
  rtx VAR_11 = VAR_9->insn;
  rtx VAR_12 = FUNC_7 (VAR_10, 1);
  struct see_pre_extension_expr *VAR_13;
  struct see_register_properties *VAR_14, **VAR_15;
  struct see_register_properties VAR_16;
  struct see_occr *VAR_17 = ((void*)0);
  struct see_occr *VAR_18 = ((void*)0);
  htab_t VAR_19;
  int VAR_20;
  int VAR_21 = FUNC_0 (VAR_11);

  VAR_13 = FUNC_8 (VAR_10, VAR_1);

  FUNC_5 (VAR_13);

  VAR_19 = VAR_6[VAR_21];
  FUNC_5 (VAR_19);
  VAR_16.regno = FUNC_2 (VAR_12);
  VAR_15 =
    (struct see_register_properties **) FUNC_6 (VAR_19,
       &VAR_16, VAR_0);
  VAR_14 = *VAR_15;
  FUNC_5 (VAR_14);

  VAR_20 = VAR_13->bitmap_index;

  if (VAR_14->first_se_before_any_def == FUNC_1 (VAR_5, VAR_11))
    {

      FUNC_4 (VAR_3[VAR_21], VAR_20);

      VAR_17 = FUNC_9 (sizeof (struct see_occr));
      VAR_17->next = ((void*)0);
      VAR_17->insn = VAR_10;
      VAR_17->block_num = VAR_21;
      VAR_18 = VAR_13->antic_occr;
      if (!VAR_18)
 VAR_13->antic_occr = VAR_17;
      else
 {
   while (VAR_18->next)
     VAR_18 = VAR_18->next;
   VAR_18->next = VAR_17;
 }
      if (VAR_14->last_def < 0)
 {

   FUNC_4 (VAR_4[VAR_21], VAR_20);

   VAR_17 = FUNC_9 (sizeof (struct see_occr));
   VAR_17->next = ((void*)0);
   VAR_17->insn = VAR_10;
   VAR_17->block_num = VAR_21;
   VAR_18 = VAR_13->avail_occr;
   if (!VAR_18)
     VAR_13->avail_occr = VAR_17;
   else
     {
         while (VAR_18->next)
    VAR_18 = VAR_18->next;
       VAR_18->next = VAR_17;
     }
 }


    }
  else if (VAR_14->first_se_after_last_def == FUNC_1 (VAR_5, VAR_11))
    {

      FUNC_4 (VAR_4[VAR_21], VAR_20);

      FUNC_3 (VAR_2[VAR_21], VAR_20);

      VAR_17 = FUNC_9 (sizeof (struct see_occr));
      VAR_17->next = ((void*)0);
      VAR_17->insn = VAR_10;
      VAR_17->block_num = VAR_21;
      VAR_18 = VAR_13->avail_occr;
      if (!VAR_18)
 VAR_13->avail_occr = VAR_17;
      else
 {
   while (VAR_18->next)
     VAR_18 = VAR_18->next;
   VAR_18->next = VAR_17;
 }
    }
  return 1;
}
