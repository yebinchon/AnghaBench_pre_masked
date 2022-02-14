
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,unsigned int) ;

__attribute__((used)) static void
FUNC_1 (char *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
  switch ((VAR_1 << 1) | ((VAR_2 >> 7) & 1))
    {
    case 0:
      FUNC_0 (VAR_0, "r%u", (VAR_2 & 0x1f));
      break;

    case 1:
      FUNC_0 (VAR_0, "f%u", (VAR_2 & 0x1f));
      break;

    case 2:
      FUNC_0 (VAR_0, "b%u", (VAR_2 & 0x1f));
      break;
    }
}
