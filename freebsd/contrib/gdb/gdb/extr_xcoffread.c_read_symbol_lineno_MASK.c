
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x_lnno; } ;
struct TYPE_6__ {TYPE_1__ x_lnsz; } ;
struct TYPE_7__ {TYPE_2__ x_misc; } ;
union internal_auxent {TYPE_3__ x_sym; } ;
struct objfile {int obfd; scalar_t__ sym_private; } ;
struct internal_syment {scalar_t__ n_sclass; int n_offset; char* n_name; scalar_t__ n_numaux; int n_type; } ;
struct coff_symfile_info {int symtbl_num_syms; char* symtbl; char* strtbl; } ;
struct TYPE_8__ {struct objfile* objfile; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int ,scalar_t__,int ,scalar_t__,union internal_auxent*) ;
 int FUNC_3 (int ,char*,struct internal_syment*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;

__attribute__((used)) static int
FUNC_5 (int VAR_4)
{
  struct objfile *VAR_5 = VAR_3->objfile;
  int VAR_6 = FUNC_4 (VAR_5->obfd);

  struct coff_symfile_info *VAR_7 =
    (struct coff_symfile_info *)VAR_5->sym_private;
  int VAR_8 = VAR_7->symtbl_num_syms;
  char *VAR_9 = VAR_7->symtbl;
  char *VAR_10 = VAR_7->strtbl;

  struct internal_syment VAR_11[1];
  union internal_auxent VAR_12[1];

  if (VAR_4 < 0)
    {
      FUNC_1 ();
      return 0;
    }
  while (VAR_4 < VAR_8)
    {
      FUNC_3 (VAR_2,
       VAR_9 + (VAR_4 * VAR_1), VAR_11);
      if (VAR_11->n_sclass == VAR_0)
 {
   char *VAR_13 = VAR_6 ? VAR_10 + VAR_11->n_offset : VAR_11->n_name;
   if (FUNC_0 (VAR_13, ".bf"))
     goto gotit;
 }
      VAR_4 += VAR_11->n_numaux + 1;
    }

  FUNC_1 ();
  return 0;

gotit:

  VAR_4++;
  FUNC_2 (VAR_5->obfd, VAR_9 + VAR_4 * VAR_1,
   VAR_11->n_type, VAR_11->n_sclass,
   0, VAR_11->n_numaux, VAR_12);

  return VAR_12->x_sym.x_misc.x_lnsz.x_lnno;
}
