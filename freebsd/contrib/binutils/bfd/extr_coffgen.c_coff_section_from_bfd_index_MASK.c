
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfd_section {int target_index; struct bfd_section* next; } ;
struct TYPE_3__ {struct bfd_section* sections; } ;
typedef TYPE_1__ bfd ;
typedef struct bfd_section asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bfd_section* VAR_3 ;
 struct bfd_section* VAR_4 ;

asection *
FUNC_0 (bfd *VAR_5, int VAR_6)
{
  struct bfd_section *VAR_7 = VAR_5->sections;

  if (VAR_6 == VAR_0)
    return VAR_3;
  if (VAR_6 == VAR_2)
    return VAR_4;
  if (VAR_6 == VAR_1)
    return VAR_3;

  while (VAR_7)
    {
      if (VAR_7->target_index == VAR_6)
 return VAR_7;
      VAR_7 = VAR_7->next;
    }



  return VAR_4;
}
