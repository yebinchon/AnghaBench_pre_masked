
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long CORE_ADDR ;


 int FUNC_0 (char*,unsigned long*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static CORE_ADDR
FUNC_2 ()
{
  unsigned long VAR_2;

  FUNC_0 ("eip", &VAR_2);

  if (VAR_0)
    FUNC_1 (VAR_1, "stop pc (before any decrement) is %08lx\n", VAR_2);
  return VAR_2;
}
