
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int,int *) ;

void
FUNC_2 (bfd *VAR_4, int VAR_5,
     bfd_boolean VAR_6, bfd_byte *VAR_7)
{
  bfd_vma VAR_8, VAR_9, VAR_10;

  if (VAR_5 != VAR_0 && VAR_5 != VAR_1
      && VAR_5 != VAR_2 && VAR_5 != VAR_3)
    return;


  VAR_8 = FUNC_0 (VAR_4, VAR_7);
  VAR_9 = FUNC_0 (VAR_4, VAR_7 + 2);
  if (VAR_5 == VAR_0)
    {
      if (VAR_6)
 VAR_10 = ((VAR_8 & 0xfc00) << 16) | ((VAR_8 & 0x3e0) << 11)
       | ((VAR_8 & 0x1f) << 21) | VAR_9;
      else
 VAR_10 = VAR_8 << 16 | VAR_9;
    }
  else
    VAR_10 = ((VAR_8 & 0xf800) << 16) | ((VAR_9 & 0xffe0) << 11)
   | ((VAR_8 & 0x1f) << 11) | (VAR_8 & 0x7e0) | (VAR_9 & 0x1f);
  FUNC_1 (VAR_4, VAR_10, VAR_7);
}
