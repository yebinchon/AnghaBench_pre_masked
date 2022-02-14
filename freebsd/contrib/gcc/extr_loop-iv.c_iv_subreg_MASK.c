
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtx_iv {scalar_t__ step; int first_special; int extend_mode; scalar_t__ base; int mode; scalar_t__ delta; void* mult; void* extend; } ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_1 (struct rtx_iv*,scalar_t__) ;
 scalar_t__ FUNC_2 (int,scalar_t__,int) ;
 void* FUNC_3 (int ,int,scalar_t__,void*) ;

__attribute__((used)) static bool
FUNC_4 (struct rtx_iv *VAR_5, enum machine_mode VAR_6)
{

  if (VAR_5->step == VAR_3
      && !VAR_5->first_special)
    {
      rtx VAR_7 = FUNC_1 (VAR_5, VAR_3);
      VAR_7 = FUNC_2 (VAR_6, VAR_7, VAR_5->extend_mode);

      VAR_5->base = VAR_7;
      VAR_5->extend = VAR_2;
      VAR_5->mode = VAR_5->extend_mode = VAR_6;
      VAR_5->delta = VAR_3;
      VAR_5->mult = VAR_4;
      return 1;
    }

  if (VAR_5->extend_mode == VAR_6)
    return 1;

  if (FUNC_0 (VAR_6) > FUNC_0 (VAR_5->mode))
    return 0;

  VAR_5->extend = VAR_2;
  VAR_5->mode = VAR_6;

  VAR_5->base = FUNC_3 (VAR_1, VAR_5->extend_mode, VAR_5->delta,
      FUNC_3 (VAR_0, VAR_5->extend_mode,
             VAR_5->base, VAR_5->mult));
  VAR_5->step = FUNC_3 (VAR_0, VAR_5->extend_mode, VAR_5->step, VAR_5->mult);
  VAR_5->mult = VAR_4;
  VAR_5->delta = VAR_3;
  VAR_5->first_special = 0;

  return 1;
}
