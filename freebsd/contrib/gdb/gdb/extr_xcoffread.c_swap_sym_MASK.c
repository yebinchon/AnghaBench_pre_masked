
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union internal_auxent {int dummy; } internal_auxent ;
struct objfile {int obfd; scalar_t__ sym_private; int objfile_obstack; } ;
struct internal_syment {char* n_name; int n_sclass; int n_offset; unsigned int n_numaux; int n_type; scalar_t__ n_zeroes; } ;
struct TYPE_3__ {char* e_name; } ;
struct external_syment {TYPE_1__ e; } ;
struct coff_symfile_info {char* debugsec; char* strtbl; } ;
struct TYPE_4__ {int local_symesz; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int,int ,unsigned int,union internal_auxent*) ;
 int FUNC_1 (int ,char*,struct internal_syment*) ;
 TYPE_2__* FUNC_2 (int ) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_5 (struct internal_syment *VAR_1, union internal_auxent *VAR_2,
   char **VAR_3, char **VAR_4, unsigned int *VAR_5,
   struct objfile *VAR_6)
{
  FUNC_1 (VAR_6->obfd, *VAR_4, VAR_1);
  if (VAR_1->n_zeroes)
    {


      if (VAR_1->n_name[VAR_0 - 1] != '\0')
 {


   char *VAR_7;
   VAR_7 = FUNC_3 (&VAR_6->objfile_obstack, VAR_0 + 1);
   FUNC_4 (VAR_7, VAR_1->n_name, VAR_0);
   VAR_7[VAR_0] = '\0';
   *VAR_3 = VAR_7;
 }
      else


 *VAR_3 = ((struct external_syment *) *VAR_4)->e.e_name;
    }
  else if (VAR_1->n_sclass & 0x80)
    {
      *VAR_3 = ((struct coff_symfile_info *) VAR_6->sym_private)->debugsec
 + VAR_1->n_offset;
    }
  else
    {
      *VAR_3 = ((struct coff_symfile_info *) VAR_6->sym_private)->strtbl
 + VAR_1->n_offset;
    }
  ++*VAR_5;
  *VAR_4 += FUNC_2 (VAR_6->obfd)->local_symesz;
  if (VAR_1->n_numaux > 0)
    {
      FUNC_0 (VAR_6->obfd, *VAR_4, VAR_1->n_type,
       VAR_1->n_sclass, 0, VAR_1->n_numaux, VAR_2);

      *VAR_5 += VAR_1->n_numaux;
      *VAR_4 += FUNC_2 (VAR_6->obfd)->local_symesz * VAR_1->n_numaux;
    }
}
