
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int instruction; int cond; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  if (VAR_1)
    VAR_0.instruction |= 0xe0000000;
  else
    VAR_0.instruction |= VAR_0.cond << 28;
}
