
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct see_register_properties {scalar_t__ regno; int last_def; int first_se_before_any_def; int first_se_after_last_def; } ;
struct see_ref_s {int use_se_hash; void* insn; } ;
typedef void* rtx ;
typedef scalar_t__ htab_t ;
typedef int PTR ;


 size_t FUNC_0 (void*) ;
 int FUNC_1 (int ,void*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int,int ,int ,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,struct see_register_properties*,int ) ;
 int FUNC_9 (scalar_t__,void*) ;
 scalar_t__* VAR_7 ;
 void* FUNC_10 (void*,int) ;
 int FUNC_11 (void*,int ) ;
 struct see_register_properties* FUNC_12 (int) ;

__attribute__((used)) static int
FUNC_13 (void **VAR_8, void *VAR_9)
{
  rtx VAR_10 = *VAR_8;
  struct see_ref_s *VAR_11 = (struct see_ref_s *) VAR_9;
  rtx VAR_12 = VAR_11->insn;
  rtx VAR_13 = FUNC_10 (VAR_10, 1);
  htab_t VAR_14;
  struct see_register_properties *VAR_15 = ((void*)0);
  struct see_register_properties **VAR_16;
  struct see_register_properties VAR_17;
  bool VAR_18 = 0;
  int VAR_19 = FUNC_1 (VAR_2, VAR_12);

  VAR_14 = VAR_7[FUNC_0 (VAR_11->insn)];
  if (!VAR_14)
    {

      VAR_14 = FUNC_7 (10,
      VAR_6,
      VAR_4,
      VAR_5);
      VAR_7[FUNC_0 (VAR_11->insn)] = VAR_14;
    }


  VAR_17.regno = FUNC_2 (VAR_13);
  VAR_16 =
    (struct see_register_properties **) FUNC_8 (VAR_14,
       &VAR_17, VAR_0);

  if (VAR_16 && *VAR_16 != ((void*)0))
    {

      VAR_15 = *VAR_16;
      FUNC_4 (VAR_15->regno == FUNC_2 (VAR_13));


      if (VAR_15->last_def < 0 && VAR_15->first_se_before_any_def < 0)
 VAR_15->first_se_before_any_def = VAR_19;
      else if (VAR_15->last_def < 0
        && VAR_15->first_se_before_any_def >= 0)
 {

   FUNC_6 (VAR_11->use_se_hash, (PTR *)VAR_8);
   VAR_18 = 1;
 }
      else if (VAR_15->last_def >= 0
        && VAR_15->first_se_after_last_def < 0)
 VAR_15->first_se_after_last_def = VAR_19;
      else if (VAR_15->last_def >= 0
        && VAR_15->first_se_after_last_def >= 0)
 {

   FUNC_6 (VAR_11->use_se_hash, (PTR *)VAR_8);
   VAR_18 = 1;
 }
      else
 FUNC_5 ();
    }
  else
    {

      VAR_15 = FUNC_12 (sizeof (struct see_register_properties));
      VAR_15->regno = FUNC_2 (VAR_13);
      VAR_15->last_def = -1;
      VAR_15->first_se_before_any_def = VAR_19;
      VAR_15->first_se_after_last_def = -1;
      *VAR_16 = VAR_15;
    }



  if (!VAR_18)
    FUNC_11 (VAR_10, VAR_1);
  if (VAR_18 && VAR_3)
    {
      FUNC_3 (VAR_3, "Locally redundant extension:\n");
      FUNC_9 (VAR_3, VAR_10);
    }
  return 1;
}
