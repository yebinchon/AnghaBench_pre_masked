
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coff_comdat_info {int dummy; } ;
struct bfd_section {int dummy; } ;
typedef int bfd ;
struct TYPE_2__ {struct coff_comdat_info* comdat; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_1 (int *,struct bfd_section*) ;

struct coff_comdat_info *
FUNC_2 (bfd *VAR_1, struct bfd_section *VAR_2)
{
  if (FUNC_0 (VAR_1) == VAR_0
      && FUNC_1 (VAR_1, VAR_2) != ((void*)0))
    return FUNC_1 (VAR_1, VAR_2)->comdat;
  else
    return ((void*)0);
}
