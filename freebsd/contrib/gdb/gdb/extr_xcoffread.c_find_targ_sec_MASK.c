
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct objfile {int dummy; } ;
struct find_targ_sec_arg {scalar_t__ targ_index; TYPE_1__** bfd_sect; int * resultp; struct objfile* objfile; } ;
typedef int bfd ;
struct TYPE_4__ {scalar_t__ target_index; int index; } ;
typedef TYPE_1__ asection ;


 int FUNC_0 (struct objfile*) ;
 int FUNC_1 (struct objfile*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3 (bfd *VAR_2, asection *VAR_3, void *VAR_4)
{
  struct find_targ_sec_arg *VAR_5 = (struct find_targ_sec_arg *) VAR_4;
  struct objfile *VAR_6 = VAR_5->objfile;
  if (VAR_3->target_index == VAR_5->targ_index)
    {

      if (FUNC_2 (VAR_2, VAR_3) & VAR_0)
 *VAR_5->resultp = FUNC_1 (VAR_6);
      else if (FUNC_2 (VAR_2, VAR_3) & VAR_1)
 *VAR_5->resultp = FUNC_0 (VAR_6);
      else
 *VAR_5->resultp = VAR_3->index;
      *VAR_5->bfd_sect = VAR_3;
    }
}
