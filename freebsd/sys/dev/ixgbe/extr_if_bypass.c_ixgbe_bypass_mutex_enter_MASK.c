
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int high; int low; } ;
struct adapter {TYPE_1__ bypass; } ;


 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct adapter *VAR_0)
{
 while (FUNC_0(&VAR_0->bypass.low, 0, 1) == 0)
  FUNC_1(3000);
 while (FUNC_0(&VAR_0->bypass.high, 0, 1) == 0)
  FUNC_1(3000);
 return;
}
