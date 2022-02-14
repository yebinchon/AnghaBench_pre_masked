
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int type; scalar_t__ pc_relative; } ;
typedef TYPE_2__ reloc_howto_type ;
typedef int bfd_vma ;
typedef int bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_10__ {int output_offset; TYPE_1__* output_section; } ;
typedef TYPE_3__ asection ;
struct TYPE_11__ {int r_offset; int r_addend; } ;
struct TYPE_8__ {int vma; } ;
typedef TYPE_4__ Elf_Internal_Rela ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 long FUNC_2 (int) ;
 unsigned long FUNC_3 (int) ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_4
    (reloc_howto_type * VAR_2,
     bfd * VAR_3,
     asection * VAR_4,
     bfd_byte * VAR_5,
     Elf_Internal_Rela * VAR_6,
     bfd_vma VAR_7)
{
  unsigned long VAR_8;
  long VAR_9;
  unsigned char *VAR_10;
  bfd_vma VAR_11;
  bfd_reloc_status_type VAR_12 = VAR_0;
  int VAR_13, VAR_14;

  if (FUNC_1 (VAR_3))
    {
      VAR_13 = 0;
      VAR_14 = 0;
    }
  else
    {
      VAR_13 = 1;
      VAR_14 = 3;
    }

  VAR_11 = (VAR_4->output_section->vma
 + VAR_4->output_offset
 + VAR_6->r_offset);

  VAR_9 = VAR_7 + VAR_6->r_addend;

  VAR_10 = (unsigned char *)VAR_5 + VAR_6->r_offset;

  if (VAR_2->type == 134
      && VAR_9 == 0
      && VAR_11 >= 0x800000)
    {



      return VAR_0;
    }

  if (VAR_2->pc_relative)
    VAR_9 -= VAR_11;

  VAR_8 = (unsigned long) VAR_9;

  switch (VAR_2->type)
    {


    case 145:
      if (VAR_8 > 255) VAR_12 = VAR_1;
      VAR_10[0] = (VAR_8 & 0xff);
      break;
    case 147:
      if (VAR_8 > 65535) VAR_12 = VAR_1;
      VAR_10[0^VAR_13] = ((VAR_8 >> 8) & 0xff);
      VAR_10[1^VAR_13] = (VAR_8 & 0xff);
      break;
    case 146:
      VAR_10[0^VAR_14] = ((VAR_8 >> 24) & 0xff);
      VAR_10[1^VAR_14] = ((VAR_8 >> 16) & 0xff);
      VAR_10[2^VAR_14] = ((VAR_8 >> 8) & 0xff);
      VAR_10[3^VAR_14] = (VAR_8 & 0xff);
      break;
    case 133:
      if (-128 > VAR_9 || VAR_9 > 127) VAR_12 = VAR_1;
      VAR_10[1^VAR_13] = (VAR_10[1^VAR_13] & 0x01) | (VAR_9 & 0xfe);
      break;
    case 136:
      if (-2048 > VAR_9 || VAR_9 > 2047) VAR_12 = VAR_1;
      VAR_10[0^VAR_13] = (VAR_10[0^VAR_13] & 0xf0) | ((VAR_9 >> 8) & 0x0f);
      VAR_10[1^VAR_13] = (VAR_10[1^VAR_13] & 0x01) | (VAR_9 & 0xfe);
      break;
    case 135:
      if (-65536 > VAR_9 || VAR_9 > 65535) VAR_12 = VAR_1;
      VAR_10[2^VAR_13] = ((VAR_9 >> 9) & 0xff);
      VAR_10[3^VAR_13] = ((VAR_9 >> 1) & 0xff);
      break;
    case 134:
      if (-8388608 > VAR_9 || VAR_9 > 8388607) VAR_12 = VAR_1;
      VAR_10[0^VAR_13] = (VAR_10[0^VAR_13] & 0xf8) | ((VAR_9 >> 5) & 0x07);
      VAR_10[1^VAR_13] = (VAR_10[1^VAR_13] & 0x0f) | ((VAR_9 << 3) & 0xf0);
      VAR_10[2^VAR_13] = ((VAR_9 >> 16) & 0xff);
      VAR_10[3^VAR_13] = ((VAR_9 >> 8) & 0xff);
      break;
    case 137:
      if (VAR_8 > 16777215) VAR_12 = VAR_1;
      VAR_10[0^VAR_13] = (VAR_10[0^VAR_13] & 0xf8) | ((VAR_8 >> 5) & 0x07);
      VAR_10[1^VAR_13] = (VAR_10[1^VAR_13] & 0x0f) | ((VAR_8 << 3) & 0xf0);
      VAR_10[2^VAR_13] = ((VAR_8 >> 16) & 0xff);
      VAR_10[3^VAR_13] = ((VAR_8 >> 8) & 0xff);
      break;
    case 138:
      VAR_10[2^VAR_13] = ((VAR_8 >> 8) & 0xff);
      VAR_10[3^VAR_13] = (VAR_8 & 0xff);
      break;
    case 139:
      VAR_10[2^VAR_13] = ((VAR_8 >> 24) & 0xff);
      VAR_10[3^VAR_13] = ((VAR_8 >> 16) & 0xff);
      break;
    case 140:
      VAR_10[2^VAR_13] = ((VAR_9 >> 24) & 0xff);
      VAR_10[3^VAR_13] = ((VAR_9 >> 16) & 0xff);
      break;
    case 141:
      VAR_9 -= FUNC_2(VAR_6->r_offset);
      if (-32768 > VAR_9 || VAR_9 > 32767) VAR_12 = VAR_1;
      VAR_10[2^VAR_13] = ((VAR_9 >> 8) & 0xff);
      VAR_10[3^VAR_13] = (VAR_9 & 0xff);
      break;
    case 132:
      VAR_9 -= FUNC_3(VAR_6->r_offset);
      if (-32768 > VAR_9 || VAR_9 > 32767) VAR_12 = VAR_1;
      VAR_10[2^VAR_13] = ((VAR_9 >> 8) & 0xff);
      VAR_10[3^VAR_13] = (VAR_9 & 0xff);
      break;
    case 131:
      VAR_8 -= FUNC_3(VAR_6->r_offset);
      if (VAR_8 > 127) VAR_12 = VAR_1;
      VAR_10[1^VAR_13] = (VAR_10[1^VAR_13] & 0x80) | (VAR_8 & 0x7f);
      break;
    case 130:
      VAR_8 -= FUNC_3(VAR_6->r_offset);
      if (VAR_8 > 127) VAR_12 = VAR_1;
      VAR_10[1^VAR_13] = (VAR_10[1^VAR_13] & 0x81) | (VAR_8 & 0x7e);
      break;
    case 129:
      VAR_8 -= FUNC_3(VAR_6->r_offset);
      if (VAR_8 > 127) VAR_12 = VAR_1;
      VAR_10[1^VAR_13] = (VAR_10[1^VAR_13] & 0x83) | (VAR_8 & 0x7c);
      break;
    case 128:
      if (VAR_8 > 16777215) VAR_12 = VAR_1;
      VAR_10[1^VAR_13] = (VAR_8 & 0xff);
      VAR_10[2^VAR_13] = ((VAR_8 >> 16) & 0xff);
      VAR_10[3^VAR_13] = ((VAR_8 >> 8) & 0xff);
      break;
    case 144:
      if (VAR_8 > 16777215) VAR_12 = VAR_1;
      VAR_10[1^VAR_13] = (VAR_10[1^VAR_13] & 0x03) | (VAR_8 & 0xfc);
      VAR_10[2^VAR_13] = ((VAR_8 >> 16) & 0xff);
      VAR_10[3^VAR_13] = ((VAR_8 >> 8) & 0xff);
      break;
    case 142:
      break;
    case 143:
      break;

    default:
      FUNC_0 ();
    }

  return VAR_12;
}
