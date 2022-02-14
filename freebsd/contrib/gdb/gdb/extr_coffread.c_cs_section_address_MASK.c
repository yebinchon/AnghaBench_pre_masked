
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct find_targ_sec_arg {int ** resultp; int targ_index; } ;
struct coff_symbol {int c_secnum; } ;
typedef int bfd ;
typedef int asection ;
struct TYPE_2__ {int obfd; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ,struct find_targ_sec_arg*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (struct coff_symbol *VAR_2, bfd *VAR_3)
{
  asection *VAR_4 = ((void*)0);
  struct find_targ_sec_arg VAR_5;
  CORE_ADDR VAR_6 = 0;

  VAR_5.targ_index = VAR_2->c_secnum;
  VAR_5.resultp = &VAR_4;
  FUNC_1 (VAR_3, VAR_0, &VAR_5);
  if (VAR_4 != ((void*)0))
    VAR_6 = FUNC_0 (VAR_1->obfd, VAR_4);
  return VAR_6;
}
