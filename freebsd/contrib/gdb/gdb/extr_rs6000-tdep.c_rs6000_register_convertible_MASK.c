
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reg {int fpr; } ;
struct TYPE_2__ {struct reg* regs; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (int VAR_1)
{
  const struct reg *VAR_2 = FUNC_0 (VAR_0)->regs + VAR_1;
  return VAR_2->fpr;
}
