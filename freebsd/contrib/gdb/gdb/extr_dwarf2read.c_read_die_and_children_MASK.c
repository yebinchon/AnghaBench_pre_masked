
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_cu {int dummy; } ;
struct die_info {struct die_info* parent; int * sibling; int * child; int offset; } ;
typedef int bfd ;


 int * FUNC_0 (char*,int *,struct dwarf2_cu*,char**,struct die_info*) ;
 char* FUNC_1 (struct die_info**,int *,char*,struct dwarf2_cu*,int*) ;
 int FUNC_2 (int ,struct die_info*) ;

__attribute__((used)) static struct die_info *
FUNC_3 (char *VAR_0, bfd *VAR_1,
         struct dwarf2_cu *VAR_2,
         char **VAR_3,
         struct die_info *VAR_4)
{
  struct die_info *VAR_5;
  char *VAR_6;
  int VAR_7;

  VAR_6 = FUNC_1 (&VAR_5, VAR_1, VAR_0, VAR_2, &VAR_7);
  FUNC_2 (VAR_5->offset, VAR_5);

  if (VAR_7)
    {
      VAR_5->child = FUNC_0 (VAR_6, VAR_1, VAR_2,
       VAR_3, VAR_5);
    }
  else
    {
      VAR_5->child = ((void*)0);
      *VAR_3 = VAR_6;
    }

  VAR_5->sibling = ((void*)0);
  VAR_5->parent = VAR_4;
  return VAR_5;
}
