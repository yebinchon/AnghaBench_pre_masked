
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtx_iv {scalar_t__ extend; int extend_mode; void* mult; void* delta; void* step; void* base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ,int ,void*,int ) ;

__attribute__((used)) static bool
FUNC_1 (struct rtx_iv *VAR_2)
{
  if (VAR_2->extend == VAR_1)
    {
      VAR_2->base = FUNC_0 (VAR_0, VAR_2->extend_mode,
         VAR_2->base, VAR_2->extend_mode);
      VAR_2->step = FUNC_0 (VAR_0, VAR_2->extend_mode,
         VAR_2->step, VAR_2->extend_mode);
    }
  else
    {
      VAR_2->delta = FUNC_0 (VAR_0, VAR_2->extend_mode,
          VAR_2->delta, VAR_2->extend_mode);
      VAR_2->mult = FUNC_0 (VAR_0, VAR_2->extend_mode,
         VAR_2->mult, VAR_2->extend_mode);
    }

  return 1;
}
