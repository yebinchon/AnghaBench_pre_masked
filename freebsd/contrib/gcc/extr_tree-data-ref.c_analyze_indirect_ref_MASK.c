
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct ptr_info_def {int dummy; } ;
struct loop {int num; } ;
struct data_reference {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ptr_info_def* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct loop*,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct loop*,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (scalar_t__,char*) ;
 struct data_reference* FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,struct ptr_info_def*,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,int ) ;
 struct loop* FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int VAR_9 ;

__attribute__((used)) static struct data_reference *
FUNC_14 (tree VAR_10, tree VAR_11, bool VAR_12)
{
  struct loop *VAR_13 = FUNC_11 (VAR_10);
  tree VAR_14 = FUNC_3 (VAR_11, 0);
  tree VAR_15 = FUNC_4 (VAR_13, VAR_14);
  tree VAR_16 = FUNC_10 (VAR_15, VAR_13->num);
  tree VAR_17 = VAR_1, VAR_18, VAR_19 = VAR_1;
  struct ptr_info_def *VAR_20 = ((void*)0);

  if (FUNC_2 (VAR_14) == VAR_3)
    VAR_20 = FUNC_0 (VAR_14);

  FUNC_1 (VAR_16);
  if (VAR_15 == VAR_6 || !VAR_16 || VAR_16 == VAR_6)
    {
      if (VAR_7 && (VAR_8 & VAR_4))
 {
   FUNC_8 (VAR_7, "\nBad access function of ptr: ");
   FUNC_12 (VAR_7, VAR_11, VAR_5);
   FUNC_8 (VAR_7, "\n");
 }
      return ((void*)0);
    }

  if (VAR_7 && (VAR_8 & VAR_4))
    {
      FUNC_8 (VAR_7, "\nAccess function of ptr: ");
      FUNC_12 (VAR_7, VAR_15, VAR_5);
      FUNC_8 (VAR_7, "\n");
    }

  if (!FUNC_6 (VAR_13, VAR_16))
    {
    if (VAR_7 && (VAR_8 & VAR_4))
 FUNC_8 (VAR_7, "\ninitial condition is not loop invariant.\n");
    }
  else
    {
      VAR_17 = VAR_16;
      VAR_18 = FUNC_5 (VAR_15, VAR_13->num);
      if (VAR_18 != VAR_6)
 {
   if (!VAR_18)
     VAR_19 = FUNC_13 (0);
   else
     {
       if (FUNC_2 (VAR_18) == VAR_0)
  VAR_19 = FUNC_7 (VAR_9, VAR_18);
       else
  if (VAR_7 && (VAR_8 & VAR_4))
    FUNC_8 (VAR_7, "\nnon constant step for ptr access.\n");
     }
 }
      else
 if (VAR_7 && (VAR_8 & VAR_4))
   FUNC_8 (VAR_7, "\nunknown evolution of ptr.\n");
    }
  return FUNC_9 (VAR_10, VAR_11, VAR_1, VAR_15, VAR_12, VAR_17,
   VAR_1, VAR_19, VAR_1, VAR_1,
   VAR_20, VAR_2);
}
