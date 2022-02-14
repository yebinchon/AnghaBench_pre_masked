
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2 (unsigned long VAR_0, int VAR_1, int VAR_2, unsigned VAR_3)
{
  if ((VAR_0 & 1) != 0)
    {
      FUNC_0 ("Base=0x%05lx000", VAR_0 >> 12);
      if ((VAR_0 & 0x100) && !VAR_1)
 FUNC_1 (" Global");
      if ((VAR_0 & 0x40) && !VAR_1)
 FUNC_1 (" Dirty");
      FUNC_0 (" %sAcc.", (VAR_0 & 0x20) ? "" : "Not-");
      FUNC_0 (" %sCached", (VAR_0 & 0x10) ? "" : "Not-");
      FUNC_0 (" Write-%s", (VAR_0 & 8) ? "Thru" : "Back");
      FUNC_0 (" %s", (VAR_0 & 4) ? "Usr" : "Sup");
      FUNC_0 (" Read-%s", (VAR_0 & 2) ? "Write" : "Only");
      if (VAR_3)
 FUNC_0 (" +0x%x", VAR_3);
      FUNC_1 ("\n");
    }
  else if (VAR_2)
    FUNC_0 ("Page%s not present or not supported; value=0x%lx.\n",
       VAR_1 ? " Table" : "", VAR_0 >> 1);
}
