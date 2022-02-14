
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtx_iv {scalar_t__ step; int extend_mode; scalar_t__ extend; int mode; int mult; scalar_t__ delta; int base; int first_special; } ;
typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtx_iv*,scalar_t__) ;
 int FUNC_1 (int,int,int ,int) ;

__attribute__((used)) static bool
FUNC_2 (struct rtx_iv *VAR_3, enum rtx_code VAR_4, enum machine_mode VAR_5)
{

  if (VAR_3->step == VAR_1
      && !VAR_3->first_special)
    {
      rtx VAR_6 = FUNC_0 (VAR_3, VAR_1);
      VAR_6 = FUNC_1 (VAR_4, VAR_5, VAR_6, VAR_3->extend_mode);

      VAR_3->base = VAR_6;
      VAR_3->extend = VAR_0;
      VAR_3->mode = VAR_3->extend_mode = VAR_5;
      VAR_3->delta = VAR_1;
      VAR_3->mult = VAR_2;
      return 1;
    }

  if (VAR_5 != VAR_3->extend_mode)
    return 0;

  if (VAR_3->extend != VAR_0
      && VAR_3->extend != VAR_4)
    return 0;

  VAR_3->extend = VAR_4;

  return 1;
}
