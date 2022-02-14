
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtx_iv {int extend_mode; scalar_t__ extend; void* mult; void* delta; void* step; void* base; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (int ,int,void*,int ) ;

__attribute__((used)) static bool
FUNC_2 (struct rtx_iv *VAR_3, rtx VAR_4)
{
  enum machine_mode VAR_5 = VAR_3->extend_mode;

  if (FUNC_0 (VAR_4) != VAR_2
      && FUNC_0 (VAR_4) != VAR_5)
    return 0;

  if (VAR_3->extend == VAR_1)
    {
      VAR_3->base = FUNC_1 (VAR_0, VAR_5, VAR_3->base, VAR_4);
      VAR_3->step = FUNC_1 (VAR_0, VAR_5, VAR_3->step, VAR_4);
    }
  else
    {
      VAR_3->delta = FUNC_1 (VAR_0, VAR_5, VAR_3->delta, VAR_4);
      VAR_3->mult = FUNC_1 (VAR_0, VAR_5, VAR_3->mult, VAR_4);
    }

  return 1;
}
