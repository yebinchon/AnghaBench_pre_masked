
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char*,unsigned char,...) ;

__attribute__((used)) static int
FUNC_4 (CORE_ADDR VAR_0, unsigned char *VAR_1, int VAR_2)
{
  int VAR_3;
  char VAR_4[200];

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    {
      if (((VAR_0 + VAR_3) & 3) == 0 && (VAR_3 + 3 < VAR_2))
 {

   FUNC_3 (VAR_4, "m %s %x%02x%02x%02x;l\r",
     FUNC_1 (VAR_0 + VAR_3),
     VAR_1[VAR_3], VAR_1[VAR_3 + 1], VAR_1[VAR_3 + 2], VAR_1[VAR_3 + 3]);
   FUNC_2 (VAR_4);
   VAR_3 += 3;
 }
      else
 {
   FUNC_3 (VAR_4, "m %s %x\r", FUNC_1 (VAR_0 + VAR_3), VAR_1[VAR_3]);
   FUNC_2 (VAR_4);
 }
    }

  FUNC_0 ();

  return VAR_2;
}
