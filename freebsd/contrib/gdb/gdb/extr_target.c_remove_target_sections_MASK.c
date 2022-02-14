
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {struct section_table* to_sections_end; struct section_table* to_sections; } ;
struct section_table {int * bfd; } ;
typedef int bfd ;


 int FUNC_0 (struct target_ops*,int) ;
 int VAR_0 ;
 struct target_ops** VAR_1 ;

void
FUNC_1 (bfd *VAR_2)
{
  struct target_ops **VAR_3;

  for (VAR_3 = VAR_1; VAR_3 < VAR_1 + VAR_0; VAR_3++)
    {
      struct section_table *VAR_4, *VAR_5;

      VAR_5 = (*VAR_3)->to_sections;
      for (VAR_4 = (*VAR_3)->to_sections; VAR_4 < (*VAR_3)->to_sections_end; VAR_4++)
 if (VAR_4->bfd != VAR_2)
   {

     if (VAR_5 < VAR_4) *VAR_5 = *VAR_4;
     VAR_5++;
   }


      if (VAR_5 < VAR_4)
 FUNC_0 (*VAR_3, VAR_5 - VAR_4);
    }
}
