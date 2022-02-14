
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_2, bfd_vma VAR_3)
{
  bfd_byte VAR_4[5];

  FUNC_1 (VAR_4, VAR_3);
  if (FUNC_0 ((void *) VAR_4, (bfd_size_type) 5, VAR_2) != 5)
    return VAR_0;
  return VAR_1;
}
