
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct line_info_table {unsigned int num_files; char** dirs; char* comp_dir; TYPE_1__* files; } ;
struct TYPE_2__ {char* name; int dir; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,char*,char*,char*,...) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static char *
FUNC_8 (struct line_info_table *VAR_0, unsigned int VAR_1)
{
  char *VAR_2;

  if (VAR_1 - 1 >= VAR_0->num_files)
    {

      if (VAR_1)
 FUNC_2)
   (FUNC_1("Dwarf Error: mangled line number section (bad file number)."));
      return FUNC_5 ("<unknown>");
    }

  VAR_2 = VAR_0->files[VAR_1 - 1].name;

  if (!FUNC_0 (VAR_2))
    {
      char *VAR_3 = ((void*)0);
      char *VAR_4 = ((void*)0);
      char *VAR_5;
      size_t VAR_6;

      if (VAR_0->files[VAR_1 - 1].dir)
 VAR_4 = VAR_0->dirs[VAR_0->files[VAR_1 - 1].dir - 1];

      if (!VAR_4 || !FUNC_0 (VAR_4))
 VAR_3 = VAR_0->comp_dir;

      if (!VAR_3)
 {
   VAR_3 = VAR_4;
   VAR_4 = ((void*)0);
 }

      if (!VAR_3)
 return FUNC_5 (VAR_2);

      VAR_6 = FUNC_6 (VAR_3) + FUNC_6 (VAR_2) + 2;

      if (VAR_4)
 {
   VAR_6 += FUNC_6 (VAR_4) + 1;
   VAR_5 = FUNC_3 (VAR_6);
   if (VAR_5)
     FUNC_4 (VAR_5, "%s/%s/%s", VAR_3, VAR_4, VAR_2);
 }
      else
 {
   VAR_5 = FUNC_3 (VAR_6);
   if (VAR_5)
     FUNC_4 (VAR_5, "%s/%s", VAR_3, VAR_2);
 }

      return VAR_5;
    }

  return FUNC_5 (VAR_2);
}
