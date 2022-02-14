
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONGEST ;
typedef int CORE_ADDR ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (CORE_ADDR VAR_0)
{
  unsigned int VAR_1;
  unsigned int VAR_2;
  int VAR_3;
  LONGEST VAR_4;

  VAR_1 = FUNC_0 (VAR_0);


  VAR_2 = (VAR_1 >> 26) & 0x3f;

  if (VAR_2 == 0x1a)
    {


      return (FUNC_1 ((VAR_1 >> 16) & 0x1f) & ~3);
    }

  if ((VAR_2 & 0x30) == 0x30)
    {


      if (VAR_2 == 0x30 ||
   VAR_2 == 0x34)
 {
 branch_taken:
          VAR_3 = (VAR_1 & 0x001fffff);
   if (VAR_3 & 0x00100000)
     VAR_3 |= 0xffe00000;
   VAR_3 *= 4;
   return (VAR_0 + 4 + VAR_3);
 }


      VAR_4 = (LONGEST) FUNC_1 ((VAR_1 >> 21) & 0x1f);
      switch (VAR_2)
 {
 case 0x38:
   if ((VAR_4 & 1) == 0)
     goto branch_taken;
   break;
 case 0x3c:
   if (VAR_4 & 1)
     goto branch_taken;
   break;
 case 0x39:
   if (VAR_4 == 0)
     goto branch_taken;
   break;
 case 0x3d:
   if (VAR_4 != 0)
     goto branch_taken;
   break;
 case 0x3a:
   if (VAR_4 < 0)
     goto branch_taken;
   break;
 case 0x3b:
   if (VAR_4 <= 0)
     goto branch_taken;
   break;
 case 0x3f:
   if (VAR_4 > 0)
     goto branch_taken;
   break;
 case 0x3e:
   if (VAR_4 >= 0)
     goto branch_taken;
   break;


 }
    }



  return (VAR_0 + 4);
}
