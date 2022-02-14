
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int ,int *) ;

bfd_boolean
FUNC_2 (bfd *VAR_0, unsigned int VAR_1)
{
  bfd_byte VAR_2[4];
  FUNC_1 ((bfd_vma) VAR_1, VAR_2);
  return FUNC_0 (VAR_2, (bfd_size_type) 4, VAR_0) == 4;
}
