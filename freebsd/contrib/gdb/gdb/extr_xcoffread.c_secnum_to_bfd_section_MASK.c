
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int obfd; } ;
struct find_targ_sec_arg {int targ_index; int* resultp; struct objfile* objfile; int ** bfd_sect; } ;
typedef int asection ;


 int FUNC_0 (struct objfile*) ;
 int FUNC_1 (int ,int ,struct find_targ_sec_arg*) ;
 int VAR_0 ;

__attribute__((used)) static asection *
FUNC_2 (int VAR_1, struct objfile *VAR_2)
{
  int VAR_3 = FUNC_0 (VAR_2);
  asection *VAR_4 = ((void*)0);
  struct find_targ_sec_arg VAR_5;
  VAR_5.targ_index = VAR_1;
  VAR_5.resultp = &VAR_3;
  VAR_5.bfd_sect = &VAR_4;
  VAR_5.objfile = VAR_2;
  FUNC_1 (VAR_2->obfd, VAR_0, &VAR_5);
  return VAR_4;
}
