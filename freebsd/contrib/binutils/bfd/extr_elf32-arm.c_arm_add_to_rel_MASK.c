
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int src_mask; int size; int rightshift; int dst_mask; } ;
typedef TYPE_1__ reloc_howto_type ;
typedef int bfd_vma ;
typedef int bfd_signed_vma ;
typedef int bfd_byte ;
typedef int bfd ;






 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *,int,int *) ;

__attribute__((used)) static void
FUNC_4 (bfd * VAR_1,
  bfd_byte * VAR_2,
  reloc_howto_type * VAR_3,
  bfd_signed_vma VAR_4)
{
  bfd_signed_vma VAR_5;

  if (VAR_3->type == VAR_0)
    {
      int VAR_6, VAR_7;
      int VAR_8, VAR_9;

      VAR_6 = FUNC_0 (VAR_1, VAR_2);
      VAR_7 = FUNC_0 (VAR_1, VAR_2 + 2);
      VAR_8 = VAR_6 & 0x7ff;
      VAR_9 = VAR_7 & 0x7ff;

      VAR_5 = (VAR_8 << 12) | (VAR_9 << 1);
      VAR_5 += VAR_4;
      VAR_5 >>= 1;

      VAR_6 = (VAR_6 & 0xf800) | ((VAR_5 >> 11) & 0x7ff);
      VAR_7 = (VAR_7 & 0xf800) | (VAR_5 & 0x7ff);

      FUNC_2 (VAR_1, (bfd_vma) VAR_6, VAR_2);
      FUNC_2 (VAR_1, (bfd_vma) VAR_7, VAR_2 + 2);
    }
  else
    {
      bfd_vma VAR_10;

      VAR_10 = FUNC_1 (VAR_1, VAR_2);


      VAR_5 = VAR_10 & VAR_3->src_mask;
      if (VAR_5 & ((VAR_3->src_mask + 1) >> 1))
 {
   bfd_signed_vma VAR_11;

   VAR_11 = -1;
   VAR_11 &= ~ VAR_3->src_mask;
   VAR_5 |= VAR_11;
 }


      switch (VAR_3->type)
 {
 default:
   VAR_5 += VAR_4;
   break;

 case 129:
 case 128:
 case 131:
 case 130:
   VAR_5 <<= VAR_3->size;
   VAR_5 += VAR_4;




   VAR_5 >>= VAR_3->rightshift;
   break;
 }

      VAR_10 = (VAR_10 & ~ VAR_3->dst_mask) | (VAR_5 & VAR_3->dst_mask);

      FUNC_3 (VAR_1, VAR_10, VAR_2);
    }
}
