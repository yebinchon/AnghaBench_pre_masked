
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtx_iv {int mode; int first_special; int extend_mode; int mult; void* delta; int extend; void* step; int base; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool
FUNC_1 (struct rtx_iv *VAR_4, rtx VAR_5, enum machine_mode VAR_6)
{
  if (VAR_6 == VAR_1)
    VAR_6 = FUNC_0 (VAR_5);

  VAR_4->mode = VAR_6;
  VAR_4->base = VAR_5;
  VAR_4->step = VAR_2;
  VAR_4->first_special = 0;
  VAR_4->extend = VAR_0;
  VAR_4->extend_mode = VAR_4->mode;
  VAR_4->delta = VAR_2;
  VAR_4->mult = VAR_3;

  return 1;
}
