
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_entry {struct mtree_entry* reg_info; struct mtree_entry* dir_info; int fflags_text; int gname; int uname; int symlink; int pathname; int basename; int parentdir; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mtree_entry*) ;

__attribute__((used)) static void
FUNC_2(struct mtree_entry *VAR_0)
{
 FUNC_0(&VAR_0->parentdir);
 FUNC_0(&VAR_0->basename);
 FUNC_0(&VAR_0->pathname);
 FUNC_0(&VAR_0->symlink);
 FUNC_0(&VAR_0->uname);
 FUNC_0(&VAR_0->gname);
 FUNC_0(&VAR_0->fflags_text);
 FUNC_1(VAR_0->dir_info);
 FUNC_1(VAR_0->reg_info);
 FUNC_1(VAR_0);
}
