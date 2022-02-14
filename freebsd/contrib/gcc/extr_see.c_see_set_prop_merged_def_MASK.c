
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct see_register_properties {scalar_t__ regno; int last_def; int first_se_after_last_def; int first_se_before_any_def; } ;
struct see_ref_s {void* insn; } ;
typedef void* rtx ;
typedef scalar_t__ htab_t ;


 size_t FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (int ,void*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int,int ,int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,struct see_register_properties*,int ) ;
 scalar_t__* VAR_6 ;
 void* FUNC_6 (void*,int) ;
 int FUNC_7 (void*,int ) ;
 struct see_register_properties* FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9 (void **VAR_7, void *VAR_8)
{
  rtx VAR_9 = *VAR_7;
  struct see_ref_s *VAR_10 = (struct see_ref_s *) VAR_8;
  rtx VAR_11 = VAR_10->insn;
  rtx VAR_12 = FUNC_6 (VAR_9, 1);
  htab_t VAR_13;
  struct see_register_properties *VAR_14 = ((void*)0);
  struct see_register_properties **VAR_15;
  struct see_register_properties VAR_16;
  int VAR_17 = FUNC_1 (VAR_2, VAR_11);

  VAR_13 = VAR_6[FUNC_0 (VAR_10->insn)];
  if (!VAR_13)
    {

      VAR_13 = FUNC_4 (10,
      VAR_5,
      VAR_3,
      VAR_4);
      VAR_6[FUNC_0 (VAR_10->insn)] = VAR_13;
    }


  VAR_16.regno = FUNC_2 (VAR_12);
  VAR_15 =
    (struct see_register_properties **) FUNC_5 (VAR_13,
       &VAR_16, VAR_1);

  if (VAR_15 && *VAR_15 != ((void*)0))
    {

      VAR_14 = *VAR_15;
      FUNC_3 (VAR_14->regno == FUNC_2 (VAR_12));

      VAR_14->last_def = VAR_17;
      VAR_14->first_se_after_last_def = VAR_17;
    }
  else
    {

      VAR_14 = FUNC_8 (sizeof (struct see_register_properties));
      VAR_14->regno = FUNC_2 (VAR_12);
      VAR_14->last_def = VAR_17;
      VAR_14->first_se_before_any_def = -1;
      VAR_14->first_se_after_last_def = VAR_17;
      *VAR_15 = VAR_14;
    }



  FUNC_7 (VAR_9, VAR_0);

  return 1;
}
