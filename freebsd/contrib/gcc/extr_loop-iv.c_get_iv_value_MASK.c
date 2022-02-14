
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtx_iv {scalar_t__ step; scalar_t__ base; scalar_t__ extend; scalar_t__ delta; scalar_t__ mult; int extend_mode; int mode; int first_special; } ;
typedef scalar_t__ rtx ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,scalar_t__,int ) ;

rtx
FUNC_4 (struct rtx_iv *VAR_4, rtx VAR_5)
{
  rtx VAR_6;



  FUNC_0 (!VAR_4->first_special);

  if (VAR_4->step != VAR_3 && VAR_5 != VAR_3)
    VAR_6 = FUNC_2 (VAR_1, VAR_4->extend_mode, VAR_4->base,
          FUNC_2 (VAR_0, VAR_4->extend_mode,
          VAR_4->step, VAR_5));
  else
    VAR_6 = VAR_4->base;

  if (VAR_4->extend_mode == VAR_4->mode)
    return VAR_6;

  VAR_6 = FUNC_1 (VAR_4->mode, VAR_6, VAR_4->extend_mode);

  if (VAR_4->extend == VAR_2)
    return VAR_6;

  VAR_6 = FUNC_3 (VAR_4->extend, VAR_4->extend_mode, VAR_6, VAR_4->mode);
  VAR_6 = FUNC_2 (VAR_1, VAR_4->extend_mode, VAR_4->delta,
        FUNC_2 (VAR_0, VAR_4->extend_mode,
        VAR_4->mult, VAR_6));

  return VAR_6;
}
