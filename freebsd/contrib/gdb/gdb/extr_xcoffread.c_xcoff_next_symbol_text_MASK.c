
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct objfile {int obfd; scalar_t__ sym_private; } ;
struct internal_syment {int n_sclass; int n_offset; scalar_t__ n_zeroes; } ;
struct coff_symfile_info {char* debugsec; } ;
struct TYPE_4__ {scalar_t__ local_symesz; } ;
struct TYPE_3__ {struct objfile* objfile; } ;


 int FUNC_0 (int ,int ,struct internal_syment*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static char *
FUNC_3 (struct objfile *VAR_4)
{
  struct internal_syment VAR_5;
  char *VAR_6;

  VAR_4 = VAR_3->objfile;

  FUNC_0 (VAR_4->obfd, VAR_0, &VAR_5);
  if (VAR_5.n_zeroes)
    {
      FUNC_2 (&VAR_1, "Unexpected symbol continuation");



      VAR_6 = "";
    }
  else if (VAR_5.n_sclass & 0x80)
    {
      VAR_6 =
 ((struct coff_symfile_info *) VAR_4->sym_private)->debugsec
 + VAR_5.n_offset;
      VAR_0 +=
 FUNC_1 (VAR_4->obfd)->local_symesz;
      ++VAR_2;
    }
  else
    {
      FUNC_2 (&VAR_1, "Unexpected symbol continuation");



      VAR_6 = "";
    }
  return VAR_6;
}
