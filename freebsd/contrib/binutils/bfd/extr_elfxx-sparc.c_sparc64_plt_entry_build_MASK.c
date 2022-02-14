
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_vma ;
typedef int bfd ;
struct TYPE_3__ {unsigned char* contents; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,int,unsigned char*) ;
 int FUNC_1 (int *,int,unsigned char*) ;

__attribute__((used)) static int
FUNC_2 (bfd *VAR_3, asection *VAR_4, bfd_vma VAR_5,
    bfd_vma VAR_6, bfd_vma *VAR_7)
{
  unsigned char *VAR_8 = VAR_4->contents + VAR_5;
  const unsigned int VAR_9 = VAR_2;
  int VAR_10;

  if (VAR_5 < (VAR_1 * VAR_0))
    {
      unsigned int VAR_11, VAR_12;

      *VAR_7 = VAR_5;

      VAR_10 = (VAR_5 / VAR_0);

      VAR_11 = 0x03000000 | (VAR_10 * VAR_0);
      VAR_12 = 0x30680000
 | (((VAR_4->contents + VAR_0) - (VAR_8 + 4)) / 4 & 0x7ffff);

      FUNC_0 (VAR_3, (bfd_vma) VAR_11, VAR_8);
      FUNC_0 (VAR_3, (bfd_vma) VAR_12, VAR_8 + 4);
      FUNC_0 (VAR_3, (bfd_vma) VAR_9, VAR_8 + 8);
      FUNC_0 (VAR_3, (bfd_vma) VAR_9, VAR_8 + 12);
      FUNC_0 (VAR_3, (bfd_vma) VAR_9, VAR_8 + 16);
      FUNC_0 (VAR_3, (bfd_vma) VAR_9, VAR_8 + 20);
      FUNC_0 (VAR_3, (bfd_vma) VAR_9, VAR_8 + 24);
      FUNC_0 (VAR_3, (bfd_vma) VAR_9, VAR_8 + 28);
    }
  else
    {
      unsigned char *VAR_13;
      unsigned int VAR_14;
      int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
      const int VAR_20 = (6 * 4);
      const int VAR_21 = (1 * 8);
      const int VAR_22 = 160;
      const int VAR_23 = VAR_22 * (VAR_20
        + VAR_21);







      VAR_5 -= (VAR_1 * VAR_0);
      VAR_6 -= (VAR_1 * VAR_0);

      VAR_15 = VAR_5 / VAR_23;
      VAR_16 = VAR_6 / VAR_23;
      if (VAR_15 != VAR_16)
 {
   VAR_19 = 160;
 }
      else
 {
   VAR_18 = VAR_6 % VAR_23;
   VAR_19 = VAR_18 / (VAR_20 + VAR_21);
 }

      VAR_17 = VAR_5 % VAR_23;

      VAR_10 = (VAR_1 +
        (VAR_15 * 160) +
        (VAR_17 / VAR_20));

      VAR_13 = VAR_4->contents
 + (VAR_1 * VAR_0)
 + (VAR_15 * VAR_23)
 + (VAR_19 * VAR_20)
 + (VAR_17 / VAR_20) * VAR_21;

      *VAR_7 = (bfd_vma) (VAR_13 - VAR_4->contents);

      VAR_14 = 0xc25be000 | ((VAR_13 - (VAR_8+4)) & 0x1fff);







      FUNC_0 (VAR_3, (bfd_vma) 0x8a10000f, VAR_8);
      FUNC_0 (VAR_3, (bfd_vma) 0x40000002, VAR_8 + 4);
      FUNC_0 (VAR_3, (bfd_vma) VAR_2, VAR_8 + 8);
      FUNC_0 (VAR_3, (bfd_vma) VAR_14, VAR_8 + 12);
      FUNC_0 (VAR_3, (bfd_vma) 0x83c3c001, VAR_8 + 16);
      FUNC_0 (VAR_3, (bfd_vma) 0x9e100005, VAR_8 + 20);

      FUNC_1 (VAR_3, (bfd_vma) (VAR_4->contents - (VAR_8 + 4)), VAR_13);
    }

  return VAR_10 - 4;
}
