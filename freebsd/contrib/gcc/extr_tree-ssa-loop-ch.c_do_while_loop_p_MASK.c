
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct loop {int header; int latch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3 (struct loop *VAR_2)
{
  tree VAR_3 = FUNC_2 (VAR_2->latch);


  if (VAR_3
      && FUNC_0 (VAR_3) != VAR_1)
    return 0;


  VAR_3 = FUNC_1 (VAR_2->header);
  if (VAR_3
      && FUNC_0 (VAR_3) == VAR_0)
    return 0;

  return 1;
}
