
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtx_iv {int dummy; } ;
struct df_ref {int dummy; } ;
typedef int rtx ;
typedef enum iv_grd_result { ____Placeholder_iv_grd_result } iv_grd_result ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (scalar_t__,struct rtx_iv*) ;
 int FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (int ,struct rtx_iv*) ;
 int FUNC_7 (struct df_ref*,struct rtx_iv*) ;
 int FUNC_8 (struct rtx_iv*,int ,int ) ;
 int FUNC_9 (int ,int ,struct df_ref**) ;
 int FUNC_10 (struct rtx_iv*,int ) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static bool
FUNC_14 (rtx VAR_6, rtx VAR_7, struct rtx_iv *VAR_8)
{
  struct df_ref *VAR_9 = ((void*)0);
  enum iv_grd_result VAR_10;

  if (VAR_5)
    {
      FUNC_5 (VAR_5, "Analysing operand ");
      FUNC_11 (VAR_5, VAR_7);
      FUNC_5 (VAR_5, " of insn ");
      FUNC_12 (VAR_5, VAR_6);
    }

  if (FUNC_0 (VAR_7))
    VAR_10 = VAR_1;
  else if (FUNC_1 (VAR_7) == VAR_3)
    {
      if (!FUNC_13 (VAR_7))
 return 0;

      if (!FUNC_14 (VAR_6, FUNC_3 (VAR_7), VAR_8))
 return 0;

      return FUNC_10 (VAR_8, FUNC_2 (VAR_7));
    }
  else
    {
      VAR_10 = FUNC_9 (VAR_6, VAR_7, &VAR_9);
      if (VAR_10 == VAR_0)
 {
   if (VAR_5)
     FUNC_5 (VAR_5, "  not simple.\n");
   return 0;
 }
    }

  if (VAR_10 == VAR_1)
    {
      FUNC_8 (VAR_8, VAR_7, VAR_4);

      if (VAR_5)
 {
   FUNC_5 (VAR_5, "  ");
   FUNC_4 (VAR_5, VAR_8);
   FUNC_5 (VAR_5, "\n");
 }
      return 1;
    }

  if (VAR_10 == VAR_2)
    return FUNC_6 (VAR_7, VAR_8);

  return FUNC_7 (VAR_9, VAR_8);
}
