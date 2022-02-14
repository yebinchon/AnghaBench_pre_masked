
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {unsigned int octets_per_byte; unsigned int buffer_length; unsigned int buffer_vma; scalar_t__ buffer; } ;
typedef unsigned int bfd_vma ;
typedef int bfd_byte ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,unsigned int) ;

int
FUNC_1 (bfd_vma VAR_1,
      bfd_byte *VAR_2,
      unsigned int VAR_3,
      struct disassemble_info *VAR_4)
{
  unsigned int VAR_5 = VAR_4->octets_per_byte;
  unsigned int VAR_6 = VAR_3 / VAR_5;
  unsigned int VAR_7 = VAR_4->buffer_length / VAR_5;
  unsigned int VAR_8 = (VAR_1 - VAR_4->buffer_vma) * VAR_5;

  if (VAR_1 < VAR_4->buffer_vma
      || VAR_1 - VAR_4->buffer_vma + VAR_6 > VAR_7)

    return VAR_0;
  FUNC_0 (VAR_2, VAR_4->buffer + VAR_8, VAR_3);

  return 0;
}
