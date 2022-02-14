
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct objfile {int obfd; } ;
struct find_targ_sec_arg {TYPE_1__** resultp; int targ_index; } ;
struct coff_symbol {int c_secnum; } ;
struct TYPE_3__ {int index; } ;
typedef TYPE_1__ asection ;


 int FUNC_0 (struct objfile*) ;
 int FUNC_1 (struct objfile*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int ,struct find_targ_sec_arg*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4 (struct coff_symbol *VAR_4, struct objfile *VAR_5)
{
  asection *VAR_6 = ((void*)0);
  struct find_targ_sec_arg VAR_7;
  int VAR_8 = FUNC_1 (VAR_5);

  VAR_7.targ_index = VAR_4->c_secnum;
  VAR_7.resultp = &VAR_6;
  FUNC_3 (VAR_5->obfd, VAR_3, &VAR_7);
  if (VAR_6 != ((void*)0))
    {

      if (FUNC_2 (VAR_2, VAR_6) & VAR_0)
 VAR_8 = FUNC_1 (VAR_5);
      else if (FUNC_2 (VAR_2, VAR_6) & VAR_1)
 VAR_8 = FUNC_0 (VAR_5);
      else

 VAR_8 = VAR_6->index;
    }
  return VAR_8;
}
