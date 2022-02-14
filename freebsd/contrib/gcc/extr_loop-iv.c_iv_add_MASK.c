
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtx_iv {scalar_t__ extend; scalar_t__ mode; scalar_t__ extend_mode; void* delta; void* base; void* step; } ;
typedef void* rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (struct rtx_iv*) ;
 void* FUNC_2 (int,int,void*,void*) ;
 void* FUNC_3 (int ,scalar_t__,void*,scalar_t__) ;

__attribute__((used)) static bool
FUNC_4 (struct rtx_iv *VAR_5, struct rtx_iv *VAR_6, enum rtx_code VAR_7)
{
  enum machine_mode VAR_8;
  rtx VAR_9;


  if (VAR_5->extend == VAR_2
      && VAR_5->mode == VAR_5->extend_mode
      && VAR_5->step == VAR_4
      && FUNC_0 (VAR_5->extend_mode) < FUNC_0 (VAR_6->extend_mode))
    {
      VAR_5->extend_mode = VAR_6->extend_mode;
      VAR_5->base = FUNC_3 (VAR_3, VAR_5->extend_mode,
          VAR_5->base, VAR_5->mode);
    }
  if (VAR_6->extend == VAR_2
      && VAR_6->mode == VAR_6->extend_mode
      && VAR_6->step == VAR_4
      && FUNC_0 (VAR_6->extend_mode) < FUNC_0 (VAR_5->extend_mode))
    {
      VAR_6->extend_mode = VAR_5->extend_mode;
      VAR_6->base = FUNC_3 (VAR_3, VAR_6->extend_mode,
          VAR_6->base, VAR_6->mode);
    }

  VAR_8 = VAR_5->extend_mode;
  if (VAR_8 != VAR_6->extend_mode)
    return 0;

  if (VAR_5->extend == VAR_2 && VAR_6->extend == VAR_2)
    {
      if (VAR_5->mode != VAR_6->mode)
 return 0;

      VAR_5->base = FUNC_2 (VAR_7, VAR_8, VAR_5->base, VAR_6->base);
      VAR_5->step = FUNC_2 (VAR_7, VAR_8, VAR_5->step, VAR_6->step);

      return 1;
    }


  if (VAR_6->extend == VAR_2
      && VAR_6->mode == VAR_8
      && VAR_6->step == VAR_4)
    {
      VAR_5->delta = FUNC_2 (VAR_7, VAR_8, VAR_5->delta, VAR_6->base);
      return 1;
    }

  if (VAR_5->extend == VAR_2
      && VAR_5->mode == VAR_8
      && VAR_5->step == VAR_4)
    {
      VAR_9 = VAR_5->base;
      *VAR_5 = *VAR_6;
      if (VAR_7 == VAR_0
   && !FUNC_1 (VAR_5))
 return 0;

      VAR_5->delta = FUNC_2 (VAR_1, VAR_8, VAR_5->delta, VAR_9);
      return 1;
    }

  return 0;
}
