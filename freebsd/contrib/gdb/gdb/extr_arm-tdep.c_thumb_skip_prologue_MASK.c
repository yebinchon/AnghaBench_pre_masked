
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 unsigned short FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_1 (CORE_ADDR VAR_0, CORE_ADDR VAR_1)
{
  CORE_ADDR VAR_2;





  int VAR_3 = 0;

  for (VAR_2 = VAR_0;
       VAR_2 + 2 < VAR_1 && VAR_2 < VAR_0 + 40;
       VAR_2 += 2)
    {
      unsigned short VAR_4 = FUNC_0 (VAR_2, 2);

      if ((VAR_4 & 0xfe00) == 0xb400)
 {
   VAR_3 |= 1;
 }
      else if ((VAR_4 & 0xff00) == 0xb000)

 {
   if ((VAR_3 & 1) == 0)
     continue;
   else
     VAR_3 |= 4;
 }
      else if ((VAR_4 & 0xff00) == 0xaf00)
 {
   VAR_3 |= 2;
 }
      else if (VAR_4 == 0x466f)
 {
   VAR_3 |= 2;
 }
      else if (VAR_3 == (4+2+1))
 {

   break;
 }
      else



 continue;
    }

  return VAR_2;
}
