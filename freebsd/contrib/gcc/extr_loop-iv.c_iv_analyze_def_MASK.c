
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtx_iv {scalar_t__ base; scalar_t__ step; int mode; } ;
struct df_ref {int dummy; } ;
typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (struct df_ref*) ;
 struct rtx_iv* FUNC_1 (struct df_ref*) ;
 scalar_t__ FUNC_2 (struct df_ref*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (scalar_t__,struct rtx_iv*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,char*) ;
 int FUNC_10 (scalar_t__,scalar_t__,int ,struct rtx_iv*) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (struct df_ref*,struct rtx_iv*) ;
 scalar_t__ FUNC_14 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_15 (struct df_ref *VAR_3, struct rtx_iv *VAR_4)
{
  rtx VAR_5 = FUNC_0 (VAR_3);
  rtx VAR_6 = FUNC_2 (VAR_3);
  rtx VAR_7, VAR_8;

  if (VAR_2)
    {
      FUNC_9 (VAR_2, "Analysing def of ");
      FUNC_11 (VAR_2, VAR_6);
      FUNC_9 (VAR_2, " in insn ");
      FUNC_12 (VAR_2, VAR_5);
    }

  if (FUNC_1 (VAR_3))
    {
      if (VAR_2)
 FUNC_9 (VAR_2, "  already analysed.\n");
      *VAR_4 = *FUNC_1 (VAR_3);
      return VAR_4->base != VAR_0;
    }

  VAR_4->mode = VAR_1;
  VAR_4->base = VAR_0;
  VAR_4->step = VAR_0;

  VAR_7 = FUNC_14 (VAR_5);
  if (!VAR_7 || FUNC_4 (VAR_7) != VAR_6)
    return 0;

  VAR_8 = FUNC_8 (VAR_5);
  if (VAR_8)
    VAR_8 = FUNC_6 (VAR_8, 0);
  else
    VAR_8 = FUNC_5 (VAR_7);

  FUNC_10 (VAR_5, VAR_8, FUNC_3 (VAR_6), VAR_4);
  FUNC_13 (VAR_3, VAR_4);

  if (VAR_2)
    {
      FUNC_11 (VAR_2, VAR_6);
      FUNC_9 (VAR_2, " in insn ");
      FUNC_12 (VAR_2, VAR_5);
      FUNC_9 (VAR_2, "  is ");
      FUNC_7 (VAR_2, VAR_4);
      FUNC_9 (VAR_2, "\n");
    }

  return VAR_4->base != VAR_0;
}
