
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obj_section {struct bfd_section* the_bfd_section; } ;
struct bfd_section {int dummy; } ;
typedef int CORE_ADDR ;


 struct bfd_section* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct bfd_section*,char**,int *,int *) ;
 struct obj_section* FUNC_2 (int ) ;

int
FUNC_3 (CORE_ADDR VAR_0, char **VAR_1, CORE_ADDR *VAR_2,
     CORE_ADDR *VAR_3)
{
  struct bfd_section *VAR_4;






  VAR_4 = FUNC_0 (VAR_0);
  if (VAR_4 == ((void*)0))
    {
      struct obj_section *VAR_5 = FUNC_2 (VAR_0);
      if (VAR_5 == ((void*)0))
 VAR_4 = ((void*)0);
      else
 VAR_4 = VAR_5->the_bfd_section;
    }
  return FUNC_1 (VAR_0, VAR_4, VAR_1, VAR_2,
     VAR_3);
}
