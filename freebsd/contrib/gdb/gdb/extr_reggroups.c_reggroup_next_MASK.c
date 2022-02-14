
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reggroups {struct reggroup_el* first; } ;
struct reggroup_el {struct reggroup* group; struct reggroup_el* next; } ;
struct reggroup {int dummy; } ;
struct gdbarch {int dummy; } ;


 struct reggroups VAR_0 ;
 int FUNC_0 (int ) ;
 struct reggroups* FUNC_1 (struct gdbarch*,int ) ;
 int VAR_1 ;

struct reggroup *
FUNC_2 (struct gdbarch *VAR_2, struct reggroup *VAR_3)
{
  struct reggroups *VAR_4;
  struct reggroup_el *VAR_5;



  VAR_4 = FUNC_1 (VAR_2, VAR_1);
  FUNC_0 (VAR_4 != ((void*)0));
  if (VAR_4->first == ((void*)0))
    VAR_4 = &VAR_0;


  if (VAR_3 == ((void*)0))
    return VAR_4->first->group;
  for (VAR_5 = VAR_4->first; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    {
      if (VAR_5->group == VAR_3)
 {
   if (VAR_5->next != ((void*)0))
     return VAR_5->next->group;
   else
     return ((void*)0);
 }
    }
  return ((void*)0);
}
