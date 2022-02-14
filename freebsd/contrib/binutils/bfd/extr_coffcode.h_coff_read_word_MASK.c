
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int ,int *) ;
 unsigned int VAR_2 ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd *VAR_3, unsigned int *VAR_4)
{
  unsigned char VAR_5[2];
  int VAR_6;

  VAR_6 = FUNC_0 (VAR_5, (bfd_size_type) 2, VAR_3);
  if (VAR_6 < 1)
    {
      *VAR_4 = 0;
      return VAR_0;
    }

  if (VAR_6 == 1)
    *VAR_4 = (unsigned int) VAR_5[0];
  else
    *VAR_4 = (unsigned int) (VAR_5[0] + (VAR_5[1] << 8));

  VAR_2 += (unsigned int) VAR_6;

  return VAR_1;
}
