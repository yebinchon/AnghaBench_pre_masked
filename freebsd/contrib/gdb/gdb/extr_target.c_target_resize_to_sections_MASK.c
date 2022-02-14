
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_ops {struct section_table* to_sections_end; struct section_table* to_sections; } ;
struct section_table {int dummy; } ;
struct TYPE_2__ {struct section_table* to_sections_end; struct section_table* to_sections; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 struct target_ops** VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int) ;

int
FUNC_2 (struct target_ops *VAR_3, int VAR_4)
{
  struct target_ops **VAR_5;
  struct section_table *VAR_6;
  int VAR_7;

  VAR_6 = VAR_3->to_sections;

  if (VAR_3->to_sections)
    {
      VAR_7 = VAR_3->to_sections_end - VAR_3->to_sections;
      VAR_3->to_sections = (struct section_table *)
 FUNC_1 ((char *) VAR_3->to_sections,
    (sizeof (struct section_table)) * (VAR_4 + VAR_7));
    }
  else
    {
      VAR_7 = 0;
      VAR_3->to_sections = (struct section_table *)
 FUNC_0 ((sizeof (struct section_table)) * VAR_4);
    }
  VAR_3->to_sections_end = VAR_3->to_sections + (VAR_4 + VAR_7);




  if (VAR_6)
    {
      for (VAR_5 = VAR_2; VAR_5 < VAR_2 + VAR_1;
    ++VAR_5)
 {
   if ((*VAR_5)->to_sections == VAR_6)
     {
       (*VAR_5)->to_sections = VAR_3->to_sections;
       (*VAR_5)->to_sections_end = VAR_3->to_sections_end;
     }
 }


      if (VAR_0.to_sections == VAR_6)
 {
   VAR_0.to_sections = VAR_3->to_sections;
   VAR_0.to_sections_end = VAR_3->to_sections_end;
 }
    }

  return VAR_7;

}
