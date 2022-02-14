
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef scalar_t__ bfd_signed_vma ;
typedef int bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef int bfd ;


 unsigned long FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_2 (bfd *VAR_3, bfd_vma VAR_4, bfd_byte *VAR_5,
        bfd_byte *VAR_6)
{
  bfd_reloc_status_type VAR_7 = VAR_1;
  bfd_vma VAR_8;
  unsigned long VAR_9, VAR_10;

  VAR_9 = FUNC_0 (VAR_3, VAR_5);
  VAR_10 = FUNC_0 (VAR_3, VAR_6);


  if (((VAR_9 >> 26) & 0x3f) != 0x09
      || ((VAR_10 >> 26) & 0x3f) != 0x08)
    VAR_7 = VAR_0;



  VAR_8 = ((VAR_9 & 0xffff) << 16) | (VAR_10 & 0xffff);
  VAR_8 = (VAR_8 ^ 0x80008000) - 0x80008000;

  VAR_4 += VAR_8;

  if ((bfd_signed_vma) VAR_4 < -(bfd_signed_vma) 0x80000000
      || (bfd_signed_vma) VAR_4 >= (bfd_signed_vma) 0x7fff8000)
    VAR_7 = VAR_2;


  VAR_9 = ((VAR_9 & 0xffff0000)
     | (((VAR_4 >> 16) + ((VAR_4 >> 15) & 1)) & 0xffff));
  VAR_10 = (VAR_10 & 0xffff0000) | (VAR_4 & 0xffff);

  FUNC_1 (VAR_3, (bfd_vma) VAR_9, VAR_5);
  FUNC_1 (VAR_3, (bfd_vma) VAR_10, VAR_6);

  return VAR_7;
}
