
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct internal_syment {int dummy; } ;
struct internal_reloc {int dummy; } ;
struct bfd_link_info {scalar_t__ relocatable; } ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 int FUNC_0 (int *,struct bfd_link_info*,int *,int *,int *,struct internal_reloc*,struct internal_syment*,int **) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd *VAR_1,
    struct bfd_link_info *VAR_2,
    bfd *VAR_3,
    asection *VAR_4,
    bfd_byte *VAR_5,
    struct internal_reloc *VAR_6,
    struct internal_syment *VAR_7,
    asection **VAR_8)
{
  if (VAR_2->relocatable)
    return VAR_0;

  return FUNC_0 (VAR_1, VAR_2, VAR_3,VAR_4, VAR_5,VAR_6, VAR_7, VAR_8);
}
