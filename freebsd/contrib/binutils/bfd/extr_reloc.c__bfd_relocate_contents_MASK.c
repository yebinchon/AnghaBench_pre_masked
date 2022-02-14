
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int rightshift; unsigned int bitpos; scalar_t__ size; int complain_on_overflow; unsigned int src_mask; unsigned int dst_mask; int bitsize; } ;
typedef TYPE_1__ reloc_howto_type ;
typedef unsigned int bfd_vma ;
typedef int bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef int bfd ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *,int *) ;
 unsigned int FUNC_4 (int *,int *) ;
 unsigned int FUNC_5 (int *,int *) ;
 unsigned int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,unsigned int,int *) ;
 int FUNC_9 (int *,unsigned int,int *) ;
 int FUNC_10 (int *,unsigned int,int *) ;
 int FUNC_11 (int *,unsigned int,int *) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;



bfd_reloc_status_type
FUNC_12 (reloc_howto_type *VAR_3,
   bfd *VAR_4,
   bfd_vma VAR_5,
   bfd_byte *VAR_6)
{
  int VAR_7;
  bfd_vma VAR_8 = 0;
  bfd_reloc_status_type VAR_9;
  unsigned int VAR_10 = VAR_3->rightshift;
  unsigned int VAR_11 = VAR_3->bitpos;



  if (VAR_3->size < 0)
    VAR_5 = -VAR_5;


  VAR_7 = FUNC_7 (VAR_3);
  switch (VAR_7)
    {
    default:
    case 0:
      FUNC_1 ();
    case 1:
      VAR_8 = FUNC_6 (VAR_4, VAR_6);
      break;
    case 2:
      VAR_8 = FUNC_3 (VAR_4, VAR_6);
      break;
    case 4:
      VAR_8 = FUNC_4 (VAR_4, VAR_6);
      break;
    case 8:



      FUNC_1 ();

      break;
    }





  VAR_9 = VAR_0;
  if (VAR_3->complain_on_overflow != VAR_2)
    {
      bfd_vma VAR_12, VAR_13, VAR_14, VAR_15;
      bfd_vma VAR_16, VAR_17, VAR_18;





      VAR_13 = FUNC_0 (VAR_3->bitsize);
      VAR_14 = ~VAR_13;
      VAR_12 = FUNC_0 (FUNC_2 (VAR_4)) | VAR_13;
      VAR_16 = (VAR_5 & VAR_12) >> VAR_10;
      VAR_17 = (VAR_8 & VAR_3->src_mask & VAR_12) >> VAR_11;

      switch (VAR_3->complain_on_overflow)
 {
 case 129:



   VAR_14 = ~(VAR_13 >> 1);


 case 130:





   VAR_15 = VAR_16 & VAR_14;
   if (VAR_15 != 0 && VAR_15 != ((VAR_12 >> VAR_10) & VAR_14))
     VAR_9 = VAR_1;







   VAR_15 = ((~VAR_3->src_mask) >> 1) & VAR_3->src_mask;
   VAR_15 >>= VAR_11;


   VAR_17 = (VAR_17 ^ VAR_15) - VAR_15;


   VAR_18 = VAR_16 + VAR_17;
   if (((~(VAR_16 ^ VAR_17)) & (VAR_16 ^ VAR_18)) & VAR_14 & VAR_12)
     VAR_9 = VAR_1;
   break;

 case 128:
   VAR_18 = (VAR_16 + VAR_17) & VAR_12;
   if ((VAR_16 | VAR_17 | VAR_18) & VAR_14)
     VAR_9 = VAR_1;
   break;

 default:
   FUNC_1 ();
 }
    }


  VAR_5 >>= (bfd_vma) VAR_10;
  VAR_5 <<= (bfd_vma) VAR_11;


  VAR_8 = ((VAR_8 & ~VAR_3->dst_mask)
       | (((VAR_8 & VAR_3->src_mask) + VAR_5) & VAR_3->dst_mask));


  switch (VAR_7)
    {
    default:
      FUNC_1 ();
    case 1:
      FUNC_11 (VAR_4, VAR_8, VAR_6);
      break;
    case 2:
      FUNC_8 (VAR_4, VAR_8, VAR_6);
      break;
    case 4:
      FUNC_9 (VAR_4, VAR_8, VAR_6);
      break;
    case 8:



      FUNC_1 ();

      break;
    }

  return VAR_9;
}
