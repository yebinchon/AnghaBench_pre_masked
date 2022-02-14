
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (long*,char*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_0, int VAR_1)
{
  if (VAR_1 <= 8)
    {
      if (VAR_1 == 8 || VAR_1 == 4)
 {
   long VAR_2[2];
   FUNC_0 (VAR_2, VAR_0, VAR_1);
   FUNC_1 ("\t0x%lx", VAR_2[0]);
   if (VAR_1 == 8)
     FUNC_1 (" 0x%lx", VAR_2[1]);
   FUNC_1 ("\n");
 }
      else
 {
   int VAR_3;
   FUNC_1 ("\t");
   for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
     FUNC_1 ("0x%x ", VAR_0[VAR_3]);
   FUNC_1 ("\n");
 }
    }
}
