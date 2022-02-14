
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd *VAR_3, bfd_vma VAR_4)
{
  if (VAR_4 <= 127)
    {
      if (! FUNC_0 (VAR_3, (bfd_byte) VAR_4))
 return VAR_0;
    }
  else
    {
      unsigned int VAR_5;



      if (VAR_4 & 0xff000000)
 VAR_5 = 4;
      else if (VAR_4 & 0x00ff0000)
 VAR_5 = 3;
      else if (VAR_4 & 0x0000ff00)
 VAR_5 = 2;
      else
 VAR_5 = 1;

      if (! FUNC_0 (VAR_3,
        (bfd_byte) ((int) VAR_2
      + VAR_5)))
 return VAR_0;
      switch (VAR_5)
 {
 case 4:
   if (! FUNC_0 (VAR_3, (bfd_byte) (VAR_4 >> 24)))
     return VAR_0;

 case 3:
   if (! FUNC_0 (VAR_3, (bfd_byte) (VAR_4 >> 16)))
     return VAR_0;

 case 2:
   if (! FUNC_0 (VAR_3, (bfd_byte) (VAR_4 >> 8)))
     return VAR_0;

 case 1:
   if (! FUNC_0 (VAR_3, (bfd_byte) (VAR_4)))
     return VAR_0;
 }
    }

  return VAR_1;
}
