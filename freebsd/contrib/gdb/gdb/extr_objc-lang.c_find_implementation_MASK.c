
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objc_object {scalar_t__ isa; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,struct objc_object*) ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (CORE_ADDR VAR_0, CORE_ADDR VAR_1)
{
  struct objc_object VAR_2;

  if (VAR_0 == 0)
    return 0;
  FUNC_1 (VAR_0, &VAR_2);
  if (VAR_2.isa == 0)
    return 0;

  return FUNC_0 (VAR_2.isa, VAR_1);
}
