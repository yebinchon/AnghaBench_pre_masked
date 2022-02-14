
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_inst ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (CORE_ADDR VAR_1)
{
  t_inst VAR_2;
  CORE_ADDR VAR_3;
  int VAR_4 = 0;
  int VAR_5 = 0;


  VAR_3 = FUNC_1 (VAR_1);
  if (VAR_3 == 0)
    VAR_3 = VAR_1 + 100;




  for (; VAR_1 < VAR_3; VAR_1 += VAR_0)
    {
      unsigned long VAR_6;

      VAR_2 = FUNC_0 (VAR_1);
      VAR_6 = (VAR_2 >> 16) & 0xffff;

      if (VAR_6 == 0x27bd
   || VAR_6 == 0x67bd)
 VAR_4 = 1;
      else if (VAR_2 == 0x03a1e823 ||
        VAR_2 == 0x03a8e823)
 VAR_4 = 1;
      else if (((VAR_2 & 0xFFE00000) == 0xAFA00000
  || (VAR_2 & 0xFFE00000) == 0xFFA00000)
        && (VAR_2 & 0x001F0000))
 continue;

      else if ((VAR_2 & 0xFFE00000) == 0xE7A00000)
 continue;
      else if ((VAR_2 & 0xF3E00000) == 0xA3C00000 && (VAR_2 & 0x001F0000))

 continue;




      else if (VAR_2 == 0x03A0F021 || VAR_2 == 0x03a0f025 || VAR_2 == 0x03a0f02d)
 continue;

      else if ((VAR_2 & 0xFF9F07FF) == 0x00800021)
 continue;
      else if (VAR_6 == 0x3c1c)
 continue;
      else if (VAR_6 == 0x279c)
 continue;
      else if (VAR_2 == 0x0399e021
        || VAR_2 == 0x033ce021)
 continue;





      else if (!VAR_4)
 {
   if (VAR_6 == 0x3c01 ||
       VAR_6 == 0x3c08)
     {
       VAR_5 += VAR_0;
       continue;
     }
   else if (VAR_6 == 0x3421 ||
     VAR_6 == 0x3508 ||
     VAR_6 == 0x3401 ||
     VAR_6 == 0x3408)
     {
       VAR_5 += VAR_0;
       continue;
     }
   else
     break;
 }
      else
 break;
    }




  if (VAR_5 && !VAR_4)
    VAR_1 -= VAR_5;
  return VAR_1;
}
