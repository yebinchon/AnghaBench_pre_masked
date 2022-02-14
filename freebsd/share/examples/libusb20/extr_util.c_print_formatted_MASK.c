
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char) ;

void
FUNC_2(uint8_t *VAR_0, uint32_t VAR_1)
{
  int VAR_2, VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3 += 16)
    {
      FUNC_0("%02x: ", VAR_3);

      for (VAR_2 = 0; VAR_2 < 16 && VAR_2 + VAR_3 < VAR_1; VAR_2++)
 FUNC_0("%02x ", VAR_0[VAR_2 + VAR_3]);
      FUNC_0("  ");
      for (VAR_2 = 0; VAR_2 < 16 && VAR_2 + VAR_3 < VAR_1; VAR_2++)
 {
   uint8_t VAR_4 = VAR_0[VAR_2 + VAR_3];
   if(VAR_4 >= ' ' && VAR_4 <= '~')
     FUNC_0("%c", (char)VAR_4);
   else
     FUNC_1('.');
 }
      FUNC_1('\n');
    }
}
