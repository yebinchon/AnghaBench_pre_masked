
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,long) ;
 int VAR_1 ;
 int FUNC_1 (char*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_2 (CORE_ADDR VAR_2)
{
  if (VAR_0)
    FUNC_0 (VAR_1, "set pc to %08lx\n", (long) VAR_2);
  FUNC_1 ("eip", &VAR_2);
}
