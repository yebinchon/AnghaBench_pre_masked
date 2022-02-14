
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ incremented_off_time; } ;
typedef TYPE_1__ ticker_t ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void
FUNC_1 (ticker_t *VAR_0)
{
  if (VAR_0->incremented_off_time == 0)
    VAR_0->incremented_off_time = FUNC_0 () + 1;
}
