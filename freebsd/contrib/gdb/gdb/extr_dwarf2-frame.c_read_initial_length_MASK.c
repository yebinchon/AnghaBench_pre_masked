
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_byte ;
typedef int bfd ;
typedef int ULONGEST ;
typedef int LONGEST ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static ULONGEST
FUNC_2 (bfd *VAR_0, char *VAR_1, unsigned int *VAR_2)
{
  LONGEST VAR_3;

  VAR_3 = FUNC_0 (VAR_0, (bfd_byte *) VAR_1);
  if (VAR_3 == 0xffffffff)
    {
      VAR_3 = FUNC_1 (VAR_0, (bfd_byte *) VAR_1 + 4);
      *VAR_2 = 12;
    }
  else
    *VAR_2 = 4;

  return VAR_3;
}
