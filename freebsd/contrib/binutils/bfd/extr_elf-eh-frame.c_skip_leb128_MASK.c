
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_byte ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int *,unsigned char*) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd_byte **VAR_2, bfd_byte *VAR_3)
{
  unsigned char VAR_4;
  do
    if (!FUNC_0 (VAR_2, VAR_3, &VAR_4))
      return VAR_0;
  while (VAR_4 & 0x80);
  return VAR_1;
}
