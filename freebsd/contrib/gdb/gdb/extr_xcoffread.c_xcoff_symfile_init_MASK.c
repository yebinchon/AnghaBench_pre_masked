
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int flags; int md; int sym_private; } ;
struct coff_symfile_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct objfile*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2 (struct objfile *VAR_1)
{

  VAR_1->sym_private = FUNC_1 (VAR_1->md,
       sizeof (struct coff_symfile_info));




  VAR_1->flags |= VAR_0;

  FUNC_0 (VAR_1);
}
