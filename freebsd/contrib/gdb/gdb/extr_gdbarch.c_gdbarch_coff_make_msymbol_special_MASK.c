
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {int dummy; } ;
struct gdbarch {int (* coff_make_msymbol_special ) (int,struct minimal_symbol*) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,struct minimal_symbol*) ;

void
FUNC_3 (struct gdbarch *VAR_2, int VAR_3, struct minimal_symbol *VAR_4)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->coff_make_msymbol_special != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_coff_make_msymbol_special called\n");
  VAR_2->coff_make_msymbol_special (VAR_3, VAR_4);
}
