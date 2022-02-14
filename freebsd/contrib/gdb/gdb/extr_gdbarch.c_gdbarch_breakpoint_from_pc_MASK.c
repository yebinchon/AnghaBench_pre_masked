
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {unsigned char const* (* breakpoint_from_pc ) (int *,int*) ;} ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char const* FUNC_2 (int *,int*) ;

const unsigned char *
FUNC_3 (struct gdbarch *VAR_2, CORE_ADDR *VAR_3, int *VAR_4)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->breakpoint_from_pc != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_breakpoint_from_pc called\n");
  return VAR_2->breakpoint_from_pc (VAR_3, VAR_4);
}
