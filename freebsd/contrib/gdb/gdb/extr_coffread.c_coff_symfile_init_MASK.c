
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int flags; struct dbx_symfile_info* sym_private; int md; struct dbx_symfile_info* sym_stab_info; } ;
struct dbx_symfile_info {int dummy; } ;
struct coff_symfile_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct objfile*) ;
 int FUNC_1 (struct dbx_symfile_info*,int ,int) ;
 struct dbx_symfile_info* FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3 (struct objfile *VAR_1)
{

  VAR_1->sym_stab_info = (struct dbx_symfile_info *)
    FUNC_2 (VAR_1->md, sizeof (struct dbx_symfile_info));

  FUNC_1 (VAR_1->sym_stab_info, 0,
   sizeof (struct dbx_symfile_info));


  VAR_1->sym_private = FUNC_2 (VAR_1->md,
       sizeof (struct coff_symfile_info));

  FUNC_1 (VAR_1->sym_private, 0, sizeof (struct coff_symfile_info));




  VAR_1->flags |= VAR_0;

  FUNC_0 (VAR_1);
}
