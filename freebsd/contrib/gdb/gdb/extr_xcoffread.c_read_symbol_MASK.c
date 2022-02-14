
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct internal_syment {int n_scnum; scalar_t__ n_value; } ;
struct coff_symfile_info {int symtbl_num_syms; char* symtbl; } ;
struct TYPE_4__ {TYPE_1__* objfile; } ;
struct TYPE_3__ {int obfd; scalar_t__ sym_private; } ;


 int FUNC_0 (int ,char*,struct internal_syment*) ;
 int FUNC_1 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void
FUNC_2 (struct internal_syment *VAR_3, int VAR_4)
{
  int VAR_5 =
  ((struct coff_symfile_info *) VAR_2->objfile->sym_private)
  ->symtbl_num_syms;
  char *VAR_6 =
  ((struct coff_symfile_info *) VAR_2->objfile->sym_private)
  ->symtbl;
  if (VAR_4 < 0 || VAR_4 >= VAR_5)
    {
      FUNC_1 (&VAR_1, "Invalid symbol offset");
      VAR_3->n_value = 0;
      VAR_3->n_scnum = -1;
      return;
    }
  FUNC_0 (VAR_2->objfile->obfd,
   VAR_6 + (VAR_4 * VAR_0),
   VAR_3);
}
