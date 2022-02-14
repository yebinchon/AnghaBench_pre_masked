
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long type; int src_mask; unsigned long dst_mask; } ;
typedef TYPE_1__ reloc_howto_type ;
typedef int bfd_vma ;
typedef int bfd_signed_vma ;
typedef int bfd_byte ;
typedef int bfd ;
 int FUNC_0 (int *,int *) ;
 void* FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *,int,int *) ;

__attribute__((used)) static void
FUNC_4 (bfd *VAR_0,
        bfd_byte *VAR_1,
        reloc_howto_type *VAR_2,
        bfd_signed_vma VAR_3)
{
  bfd_signed_vma VAR_4;
  bfd_vma VAR_5;
  unsigned long VAR_6;
  unsigned long VAR_7 = VAR_2->type;
  unsigned long VAR_8, VAR_9, VAR_10, VAR_11;

  VAR_5 = FUNC_1 (VAR_0, VAR_1);

  VAR_4 = VAR_5 & VAR_2->src_mask;
  if (VAR_4 & ((VAR_2->src_mask + 1) >> 1))
    {
      bfd_signed_vma VAR_12;

      VAR_12 = -1;
      VAR_12 &= ~VAR_2->src_mask;
      VAR_4 |= VAR_12;
    }

  switch (VAR_7)
    {
    case 128:
      VAR_6 =
        (((VAR_5 & VAR_2->src_mask) & 0x3ff0000) >> 6) | ((VAR_5 & VAR_2->src_mask) & 0x3ff);
      VAR_6 += VAR_3;
      VAR_5 =
        (VAR_5 & ~VAR_2->
         src_mask) | (((VAR_6 << 6) & VAR_2->src_mask) & 0x3ff0000) | (VAR_6 & 0x3ff);
      FUNC_3 (VAR_0, VAR_5, VAR_1);
      break;
    case 130:
      break;
    case 129:
      VAR_8 = FUNC_1 (VAR_0, VAR_1 - 4);
      VAR_9 = ((((VAR_8 >> 16) & 0x3) << 15) | (VAR_8 & 0x7fff)) >> 1;
      VAR_6 = ((((VAR_5 >> 16) & 0x3) << 15) | (VAR_5 & 0x7fff)) >> 1;
      VAR_6 = (VAR_9 << 16) | (VAR_6 & 0xffff);
      VAR_11 = VAR_3 + VAR_6;
      VAR_9 = (VAR_11 >> 16) << 1;
      VAR_10 = (VAR_8 & (~(VAR_2->dst_mask)))
        | (VAR_9 & 0x7fff) | ((VAR_9 << 1) & 0x30000);
      FUNC_3 (VAR_0, VAR_10, VAR_1 - 4);
      VAR_6 = (VAR_11 & 0xffff) << 1;
      VAR_5 = (VAR_5 & (~(VAR_2->dst_mask))) | (VAR_6 & 0x7fff) | ((VAR_6 << 1) & 0x30000);
      FUNC_3 (VAR_0, VAR_5, VAR_1);
      break;
    case 131:
      VAR_6 =
        (((VAR_5 & VAR_2->src_mask) >> 1) & 0x1ff8000) | ((VAR_5 & VAR_2->src_mask) & 0x7fff);
      VAR_6 += VAR_3;
      VAR_5 =
        (VAR_5 & ~VAR_2->
         src_mask) | (((VAR_6 << 1) & VAR_2->src_mask) & 0x3ff0000) | (VAR_6 & 0x7fff);
      FUNC_3 (VAR_0, VAR_5, VAR_1);
      break;
    case 133:

      VAR_5 = FUNC_0 (VAR_0, VAR_1);
      VAR_6 = VAR_5 & VAR_2->src_mask;
      VAR_6 += VAR_3;
      VAR_5 = (VAR_5 & ~VAR_2->src_mask) | (VAR_6 & VAR_2->src_mask);
      FUNC_2 (VAR_0, VAR_5, VAR_1);

      break;
    case 132:

      VAR_5 = FUNC_0 (VAR_0, VAR_1);
      VAR_6 = (VAR_5 & VAR_2->src_mask) + ((VAR_3 >> 1) & 0xff);
      VAR_5 = (VAR_5 & (~VAR_2->src_mask)) | (VAR_6 & VAR_2->src_mask);
      FUNC_2 (VAR_0, VAR_5, VAR_1);

      break;
    default:
      VAR_4 += VAR_3;
      VAR_5 = (VAR_5 & ~VAR_2->dst_mask) | (VAR_4 & VAR_2->dst_mask);
      FUNC_3 (VAR_0, VAR_5, VAR_1);
      break;
    }
}
