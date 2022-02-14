
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,unsigned int) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_0, unsigned int VAR_1)
{
  static const char *VAR_2[16] =
  {
    "pr", "psp", "@priunat", "rp", "ar.bsp", "ar.bspstore", "ar.rnat",
    "ar.unat", "ar.fpsr", "ar.pfs", "ar.lc",
    "Unknown11", "Unknown12", "Unknown13", "Unknown14", "Unknown15"
  };

  switch ((VAR_1 >> 5) & 0x3)
    {
    case 0:
      FUNC_0 (VAR_0, "r%u", (VAR_1 & 0x1f));
      break;

    case 1:
      FUNC_0 (VAR_0, "f%u", (VAR_1 & 0x1f));
      break;

    case 2:
      FUNC_0 (VAR_0, "b%u", (VAR_1 & 0x1f));
      break;

    case 3:
      FUNC_1 (VAR_0, VAR_2[VAR_1 & 0xf]);
      break;
    }
}
