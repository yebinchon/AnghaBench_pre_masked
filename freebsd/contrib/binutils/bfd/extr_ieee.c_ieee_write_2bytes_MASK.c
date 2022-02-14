
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd *VAR_2, int VAR_3)
{
  bfd_byte VAR_4[2];

  VAR_4[0] = VAR_3 >> 8;
  VAR_4[1] = VAR_3 & 0xff;
  if (FUNC_0 ((void *) VAR_4, (bfd_size_type) 2, VAR_2) != 2)
    return VAR_0;
  return VAR_1;
}
