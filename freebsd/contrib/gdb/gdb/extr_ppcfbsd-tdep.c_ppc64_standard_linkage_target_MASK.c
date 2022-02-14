
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {scalar_t__ ppc_gp0_regnum; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 struct gdbarch_tdep* FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static CORE_ADDR
FUNC_5 (CORE_ADDR VAR_1, unsigned int *VAR_2)
{
  struct gdbarch_tdep *VAR_3 = FUNC_0 (VAR_0);



  CORE_ADDR VAR_4
    = ((CORE_ADDR) FUNC_4 (VAR_3->ppc_gp0_regnum + 2)
       + (FUNC_1 (VAR_2[0]) << 16)
       + FUNC_2 (VAR_2[2]));


  return FUNC_3 (VAR_4);
}
