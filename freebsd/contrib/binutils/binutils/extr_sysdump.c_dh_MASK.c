
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1 (unsigned char *VAR_0, int VAR_1)
{
  int VAR_2;
  int VAR_3;
  int VAR_4 = 16;

  FUNC_0 ("\n************************************************************\n");

  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2 += VAR_4)
    {
      for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
 {
   if (VAR_3 + VAR_2 < VAR_1)
     FUNC_0 ("%02x ", VAR_0[VAR_2 + VAR_3]);
   else
     FUNC_0 ("   ");
 }

      for (VAR_3 = 0; VAR_3 < VAR_4 && VAR_3 + VAR_2 < VAR_1; VAR_3++)
 {
   int VAR_5 = VAR_0[VAR_2 + VAR_3];

   if (VAR_5 < 32 || VAR_5 > 127)
     VAR_5 = '.';
   FUNC_0 ("%c", VAR_5);
 }

      FUNC_0 ("\n");
    }
}
