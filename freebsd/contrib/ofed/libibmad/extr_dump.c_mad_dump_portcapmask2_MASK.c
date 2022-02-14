
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,...) ;

void FUNC_1(char *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 int VAR_4 = *(int *)VAR_2;
 char *VAR_5 = VAR_0;

 VAR_5 += FUNC_0(VAR_5, "0x%x\n", VAR_4);
 if (VAR_4 & (1 << 0))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsSetNodeDescriptionSupported\n");
 if (VAR_4 & (1 << 1))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsPortInfoExtendedSupported\n");
 if (VAR_4 & (1 << 2))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsVirtualizationSupported\n");
 if (VAR_4 & (1 << 3))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsSwitchPortStateTableSupported\n");
 if (VAR_4 & (1 << 4))
  VAR_5 += FUNC_0(VAR_5, "\t\t\t\tIsLinkWidth2xSupported\n");

 if (VAR_5 != VAR_0)
  *(--VAR_5) = 0;
}
