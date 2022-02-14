
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct see_pre_extension_expr {int * avail_occr; int * antic_occr; scalar_t__ bitmap_index; void* se_insn; } ;
typedef void* rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum extension_type { ____Placeholder_extension_type } extension_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct see_pre_extension_expr*,int ) ;
 void* FUNC_3 (void*,int,int) ;
 int FUNC_4 (void*,int*) ;
 void* FUNC_5 (void*,int) ;
 int VAR_3 ;
 struct see_pre_extension_expr* FUNC_6 (int) ;

__attribute__((used)) static struct see_pre_extension_expr *
FUNC_7 (rtx VAR_4, enum extension_type VAR_5)
{
  struct see_pre_extension_expr **VAR_6, VAR_7;
  rtx VAR_8 = FUNC_5 (VAR_4, 1);
  enum rtx_code VAR_9;
  enum machine_mode VAR_10;

  if (VAR_5 == VAR_0)
    {
      VAR_9 = FUNC_4 (VAR_4,
            &VAR_10);
      FUNC_0 (VAR_9 != VAR_2);
      VAR_4 =
 FUNC_3 (VAR_8, VAR_9,
          VAR_10);
    }
  VAR_7.se_insn = VAR_4;
  VAR_6 =
    (struct see_pre_extension_expr **) FUNC_2 (VAR_3,
       &VAR_7, VAR_1);
  if (*VAR_6 == ((void*)0))


    {
      (*VAR_6) = FUNC_6 (sizeof (struct see_pre_extension_expr));
      (*VAR_6)->se_insn = VAR_4;
      (*VAR_6)->bitmap_index =
 (FUNC_1 (VAR_3) - 1);
      (*VAR_6)->antic_occr = ((void*)0);
      (*VAR_6)->avail_occr = ((void*)0);
      return ((void*)0);
    }
  return *VAR_6;
}
