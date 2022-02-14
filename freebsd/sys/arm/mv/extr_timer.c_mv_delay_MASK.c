
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int32_t ;
struct TYPE_4__ {TYPE_1__* config; } ;
struct TYPE_3__ {int clock_src; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void
FUNC_1(int VAR_2, void* VAR_3)
{
 uint32_t VAR_4, VAR_5;
 int32_t VAR_6;

 VAR_4 = FUNC_0(1);
 VAR_6 = ((VAR_1->config->clock_src / 1000000 + 1) * VAR_2);

 while (VAR_6 > 0) {
  VAR_5 = FUNC_0(1);
  if (VAR_4 > VAR_5)
   VAR_6 -= (VAR_4 - VAR_5);
  else
   VAR_6 -= (VAR_4 + (VAR_0 - VAR_5));

  VAR_4 = VAR_5;
 }
}
