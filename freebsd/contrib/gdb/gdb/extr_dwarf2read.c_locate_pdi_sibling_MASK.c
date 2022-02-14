
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partial_die_info {char* sibling; scalar_t__ tag; int has_children; } ;
struct dwarf2_cu {int dummy; } ;
typedef int bfd ;


 char* FUNC_0 (struct partial_die_info*,int *,char*,struct dwarf2_cu*) ;

__attribute__((used)) static char *
FUNC_1 (struct partial_die_info *VAR_0, char *VAR_1,
      bfd *VAR_2, struct dwarf2_cu *VAR_3)
{


  if (VAR_0->sibling)
    return VAR_0->sibling;



  if (!VAR_0->has_children)
    return VAR_1;





  while (1)
    {
      struct partial_die_info VAR_4;

      VAR_1 = FUNC_0 (&VAR_4, VAR_2, VAR_1, VAR_3);

      if (VAR_4.tag == 0)
 return VAR_1;
      else
 VAR_1 = FUNC_1 (&VAR_4, VAR_1, VAR_2, VAR_3);
    }
}
