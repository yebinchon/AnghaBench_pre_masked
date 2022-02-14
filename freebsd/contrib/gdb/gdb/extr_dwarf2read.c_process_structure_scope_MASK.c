
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int dummy; } ;
struct dwarf2_cu {struct objfile* objfile; } ;
struct die_info {scalar_t__ tag; int type; struct die_info* child; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_2 (struct die_info*,int ,struct dwarf2_cu*) ;
 int FUNC_3 (struct die_info*,struct dwarf2_cu*) ;
 char const* VAR_3 ;
 struct die_info* FUNC_4 (struct die_info*) ;

__attribute__((used)) static void
FUNC_5 (struct die_info *VAR_4, struct dwarf2_cu *VAR_5)
{
  struct objfile *VAR_6 = VAR_5->objfile;
  const char *VAR_7 = VAR_3;
  struct die_info *VAR_8 = VAR_4->child;

  if (FUNC_0 (VAR_4->type) != ((void*)0))
    VAR_3 = FUNC_0 (VAR_4->type);
  while (VAR_8 != ((void*)0) && VAR_8->tag)
    {
      if (VAR_8->tag == VAR_1
   || VAR_8->tag == VAR_2
   || VAR_8->tag == VAR_0)
 {

 }
      else
 FUNC_3 (VAR_8, VAR_5);

      VAR_8 = FUNC_4 (VAR_8);
    }

  if (VAR_4->child != ((void*)0) && ! FUNC_1 (VAR_4, VAR_5))
    FUNC_2 (VAR_4, VAR_4->type, VAR_5);

  VAR_3 = VAR_7;
}
