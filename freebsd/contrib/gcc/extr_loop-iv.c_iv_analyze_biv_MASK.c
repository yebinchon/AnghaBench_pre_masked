
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtx_iv {int mode; int extend_mode; int extend; int first_special; void* base; int delta; int mult; void* step; } ;
struct df_ref {int dummy; } ;
typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,struct rtx_iv*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (scalar_t__,struct rtx_iv*) ;
 int FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 (struct df_ref*,int ,int *,int*,int*,int*,int *) ;
 int FUNC_6 (struct rtx_iv*,int ,int ) ;
 int FUNC_7 (int ,struct df_ref**) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int ,struct rtx_iv*) ;
 void* FUNC_10 (int ,int,int ,int ) ;

__attribute__((used)) static bool
FUNC_11 (rtx VAR_6, struct rtx_iv *VAR_7)
{
  rtx VAR_8, VAR_9;
  enum machine_mode VAR_10, VAR_11;
  enum rtx_code VAR_12;
  struct df_ref *VAR_13;

  if (VAR_5)
    {
      FUNC_4 (VAR_5, "Analyzing ");
      FUNC_8 (VAR_5, VAR_6);
      FUNC_4 (VAR_5, " for bivness.\n");
    }

  if (!FUNC_1 (VAR_6))
    {
      if (!FUNC_0 (VAR_6))
 return 0;

      return FUNC_6 (VAR_7, VAR_6, VAR_3);
    }

  if (!FUNC_7 (VAR_6, &VAR_13))
    {
      if (VAR_5)
 FUNC_4 (VAR_5, "  not simple.\n");
      return 0;
    }

  if (!VAR_13)
    return FUNC_6 (VAR_7, VAR_6, VAR_3);

  if (FUNC_2 (VAR_6, VAR_7))
    {
      if (VAR_5)
 FUNC_4 (VAR_5, "  already analysed.\n");
      return VAR_7->base != VAR_1;
    }

  if (!FUNC_5 (VAR_13, VAR_6, &VAR_8, &VAR_10, &VAR_12,
       &VAR_11, &VAR_9))
    {
      VAR_7->base = VAR_1;
      goto end;
    }







  VAR_7->base = FUNC_10 (VAR_0, VAR_11, VAR_6, VAR_9);
  VAR_7->step = FUNC_10 (VAR_2, VAR_11, VAR_8, VAR_9);
  VAR_7->mode = VAR_10;
  VAR_7->extend_mode = VAR_11;
  VAR_7->extend = VAR_12;
  VAR_7->mult = VAR_4;
  VAR_7->delta = VAR_9;
  VAR_7->first_special = VAR_10 != VAR_11;

 end:
  if (VAR_5)
    {
      FUNC_4 (VAR_5, "  ");
      FUNC_3 (VAR_5, VAR_7);
      FUNC_4 (VAR_5, "\n");
    }

  FUNC_9 (VAR_6, VAR_7);
  return VAR_7->base != VAR_1;
}
