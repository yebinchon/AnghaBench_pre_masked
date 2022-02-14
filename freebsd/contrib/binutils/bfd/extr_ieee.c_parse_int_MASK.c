
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int common_header_type ;
typedef int bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (common_header_type *VAR_2, bfd_vma *VAR_3)
{
  int VAR_4 = FUNC_1 (VAR_2);
  int VAR_5;

  if (VAR_4 >= 0 && VAR_4 <= 127)
    {
      *VAR_3 = VAR_4;
      FUNC_0 (VAR_2);
      return VAR_1;
    }
  else if (VAR_4 >= 0x80 && VAR_4 <= 0x88)
    {
      unsigned int VAR_6 = VAR_4 & 0xf;

      VAR_5 = 0;
      FUNC_0 (VAR_2);
      while (VAR_6)
 {
   VAR_5 = (VAR_5 << 8) | FUNC_2 (VAR_2);
   VAR_6--;
 }
      *VAR_3 = VAR_5;
      return VAR_1;
    }
  return VAR_0;
}
