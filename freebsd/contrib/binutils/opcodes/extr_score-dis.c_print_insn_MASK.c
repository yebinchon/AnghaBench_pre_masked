
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {int bytes_per_chunk; int (* read_memory_func ) (int,int *,int,struct disassemble_info*) ;int (* memory_error_func ) (int,int,struct disassemble_info*) ;int display_endian; } ;
typedef int bfd_vma ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct disassemble_info*) ;
 int FUNC_1 (int,struct disassemble_info*,long) ;
 int FUNC_2 (int,struct disassemble_info*,long) ;
 int FUNC_3 (int,int *,int,struct disassemble_info*) ;
 int FUNC_4 (int,int *,int,struct disassemble_info*) ;
 int FUNC_5 (int,int *,int,struct disassemble_info*) ;
 int FUNC_6 (int,int,struct disassemble_info*) ;

__attribute__((used)) static int
FUNC_7 (bfd_vma VAR_4, struct disassemble_info *VAR_5, bfd_boolean VAR_6)
{
  unsigned char VAR_7[4];
  long VAR_8;
  long VAR_9;
  int VAR_10;
  bfd_boolean VAR_11 = VAR_2;
  bfd_boolean VAR_12 = VAR_2;

  VAR_5->display_endian = VAR_6 ? VAR_1 : VAR_0;

  if (VAR_4 & 0x2)
    {
      VAR_5->bytes_per_chunk = 2;
      VAR_10 = VAR_5->read_memory_func (VAR_4, (bfd_byte *) VAR_7, 2, VAR_5);
      VAR_7[3] = VAR_7[2] = 0;
      VAR_12 = VAR_3;
    }
  else
    {
      VAR_5->bytes_per_chunk = 4;
      VAR_10 = VAR_5->read_memory_func (VAR_4, (bfd_byte *) & VAR_7[0], 4, VAR_5);
      if (VAR_10 != 0)
 {
          VAR_5->bytes_per_chunk = 2;
          VAR_10 = VAR_5->read_memory_func (VAR_4, (bfd_byte *) VAR_7, 2, VAR_5);
          VAR_7[3] = VAR_7[2] = 0;
          VAR_12 = VAR_3;
 }
    }

  if (VAR_10 != 0)
    {
      VAR_5->memory_error_func (VAR_10, VAR_4, VAR_5);
      return -1;
    }

  if (VAR_6)
    {
      VAR_8 = (VAR_7[0]) | (VAR_7[1] << 8) | (VAR_7[2] << 16) | (VAR_7[3] << 24);
    }
  else
    {
      VAR_8 = (VAR_7[0] << 24) | (VAR_7[1] << 16) | (VAR_7[2] << 8) | (VAR_7[3]);
    }

  if ((VAR_8 & 0x80008000) == 0x80008000)
    {
      VAR_11 = VAR_2;
      VAR_12 = VAR_2;
    }
  else if ((VAR_8 & 0x8000) == 0x8000)
    {
      VAR_11 = VAR_3;
    }
  else
    {
      VAR_12 = VAR_3;
    }


  if (VAR_12)
    {
      if (VAR_6)
 {
          VAR_8 = VAR_7[0] | (VAR_7[1] << 8);
 }
      else
 {
          VAR_8 = (VAR_7[0] << 8) | VAR_7[1];
 }

      VAR_10 = FUNC_1 (VAR_4, VAR_5, VAR_8);
    }

  else if (VAR_11)
    {
      long VAR_13;

      VAR_13 = VAR_8 & 0xFFFF;
      VAR_8 = (VAR_8 & 0xFFFF0000) >> 16;

      VAR_10 = FUNC_1 (VAR_4, VAR_5, VAR_8);
      FUNC_0 (VAR_5);
      VAR_10 += FUNC_1 (VAR_4, VAR_5, VAR_13);

      VAR_5->bytes_per_chunk = 4;
    }

  else
    {

      VAR_9 = (VAR_8 & 0x7FFF);
      VAR_9 |= (VAR_8 & 0x7FFF0000) >> 1;
      VAR_8 = VAR_9;
      VAR_10 = FUNC_2 (VAR_4, VAR_5, VAR_8);
    }

  return VAR_10;
}
