
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_reloc_status_type ;
typedef int bfd ;


 int FUNC_0 (int *,void*) ;
 int FUNC_1 (int *,int,void*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_2 (bfd *VAR_2, void *VAR_3, bfd_vma VAR_4)
{
  if (VAR_4 > 0xfff)
    return VAR_1;

  VAR_4 |= FUNC_0 (VAR_2, VAR_3) & 0xfffff000;
  FUNC_1 (VAR_2, VAR_4, VAR_3);
  return VAR_0;
}
