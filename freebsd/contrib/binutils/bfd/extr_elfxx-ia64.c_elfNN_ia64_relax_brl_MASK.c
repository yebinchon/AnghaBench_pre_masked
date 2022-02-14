
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_byte ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void
FUNC_2 (bfd_byte *VAR_0, bfd_vma VAR_1)
{
  int VAR_2;
  bfd_byte *VAR_3;
  bfd_vma VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

  VAR_3 = (bfd_byte *) (VAR_0 + VAR_1);
  VAR_3 -= (long) VAR_3 & 0x3;
  VAR_4 = FUNC_0 (VAR_3);
  VAR_5 = FUNC_0 (VAR_3 + 8);


  VAR_6 = (VAR_4 >> 5) & 0x1ffffffffffLL;

  VAR_7 = 0x4000000000LL;

  VAR_8 = (VAR_5 >> 23) & 0x0ffffffffffLL;



  if (VAR_4 & 0x1)
    VAR_2 = 0x13;
  else
    VAR_2 = 0x12;
  VAR_4 = (VAR_7 << 46) | (VAR_6 << 5) | VAR_2;
  VAR_5 = (VAR_8 << 23) | (VAR_7 >> 18);

  FUNC_1 (VAR_4, VAR_3);
  FUNC_1 (VAR_5, VAR_3 + 8);
}
