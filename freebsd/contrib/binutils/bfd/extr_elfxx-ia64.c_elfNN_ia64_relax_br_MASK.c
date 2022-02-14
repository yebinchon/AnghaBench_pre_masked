
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (bfd_byte *VAR_4, bfd_vma VAR_5)
{
  unsigned int VAR_6, VAR_7;
  bfd_vma VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
  long VAR_14;
  bfd_byte *VAR_15;

  VAR_15 = (bfd_byte *) (VAR_4 + VAR_5);
  VAR_14 = (long) VAR_15 & 0x3;
  VAR_15 -= VAR_14;
  VAR_8 = FUNC_7 (VAR_15 + 0);
  VAR_9 = FUNC_7 (VAR_15 + 8);




  VAR_6 = VAR_8 & 0x1e;
  VAR_10 = (VAR_8 >> 5) & 0x1ffffffffffLL;
  VAR_11 = ((VAR_8 >> 46) | (VAR_9 << 18)) & 0x1ffffffffffLL;
  VAR_12 = (VAR_9 >> 23) & 0x1ffffffffffLL;
  switch (VAR_14)
    {
    case 0:


      if (!(FUNC_2 (VAR_11) && FUNC_2 (VAR_12)))
 return VAR_0;
      VAR_13 = VAR_10;
      break;
    case 1:


      if (!((VAR_6 == 0x12
      && FUNC_2 (VAR_12))
     || (VAR_6 == 0x16
  && FUNC_2 (VAR_10)
  && FUNC_2 (VAR_12))))
 return VAR_0;
      VAR_13 = VAR_11;
      break;
    case 2:


      if (!((VAR_6 == 0x10
      && FUNC_4 (VAR_11))
     || (VAR_6 == 0x12
  && FUNC_2 (VAR_11))
     || (VAR_6 == 0x16
  && FUNC_2 (VAR_10)
  && FUNC_2 (VAR_11))
     || (VAR_6 == 0x18
  && FUNC_5 (VAR_11))
     || (VAR_6 == 0x1c
  && FUNC_3 (VAR_11))))
 return VAR_0;
      VAR_13 = VAR_12;
      break;
    default:

      FUNC_6 ();
    }


  if (!(FUNC_1 (VAR_13) || FUNC_0 (VAR_13)))
    return VAR_0;


  VAR_13 |= 0x1LL << 40;



  if (VAR_8 & 0x1)
    VAR_7 = 0x5;
  else
    VAR_7 = 0x4;

  if (VAR_6 == 0x16)
    {


      if (VAR_14 == 0)
 VAR_8 = 0LL;
      else
 VAR_8 &= VAR_1 << 5;
      VAR_8 |= 0x1LL << (VAR_3 + 5);
    }
  else
    {

      VAR_8 &= 0x1ffffffffffLL << 5;
    }

  VAR_8 |= VAR_7;


  VAR_9 = VAR_13 << 23;

  FUNC_8 (VAR_8, VAR_15);
  FUNC_8 (VAR_9, VAR_15 + 8);
  return VAR_2;
}
