
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 () ;

void
FUNC_3()
{
 int VAR_4;
 FUNC_2();
 if (FUNC_1("Do you want to change our idea of what BIOS thinks ?"))
 {
  do
  {
   FUNC_0("BIOS's idea of #cylinders", VAR_0, VAR_4, 0);
   FUNC_0("BIOS's idea of #heads", VAR_2, VAR_4, 0);
   FUNC_0("BIOS's idea of #sectors", VAR_3, VAR_4, 0);
   VAR_1 = VAR_2 * VAR_3;
   FUNC_2();
  }
  while(!FUNC_1("Are you happy with this choice"));
 }
}
