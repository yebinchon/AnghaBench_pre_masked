
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ieee_per_section_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_6__ {scalar_t__ used_by_bfd; } ;
typedef TYPE_1__ asection ;
struct TYPE_7__ {TYPE_1__* section; int * data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_1, asection *VAR_2)
{
  if (!VAR_2->used_by_bfd)
    {
      VAR_2->used_by_bfd = FUNC_1 (VAR_1, sizeof (ieee_per_section_type));
      if (!VAR_2->used_by_bfd)
 return VAR_0;
    }
  FUNC_2 (VAR_2)->data = ((void*)0);
  FUNC_2 (VAR_2)->section = VAR_2;
  return FUNC_0 (VAR_1, VAR_2);
}
