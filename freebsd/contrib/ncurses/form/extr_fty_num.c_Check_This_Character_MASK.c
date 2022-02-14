
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct lconv* L; } ;
typedef TYPE_1__ thisARG ;
struct lconv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bool
FUNC_2(int VAR_2, const void *VAR_3)
{
  const thisARG *VAR_4 = (const thisARG *)VAR_3;
  struct lconv *VAR_5 = VAR_4->L;

  return ((FUNC_1(VAR_2) ||
    VAR_2 == '+' ||
    VAR_2 == '-' ||
    FUNC_0(VAR_2))
   ? VAR_1
   : VAR_0);
}
