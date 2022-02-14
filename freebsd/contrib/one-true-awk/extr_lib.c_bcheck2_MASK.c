
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int,...) ;
 int VAR_0 ;

void FUNC_1(int VAR_1, int VAR_2, int VAR_3)
{
 if (VAR_1 == 1)
  FUNC_0(VAR_0, "\tmissing %c\n", VAR_3);
 else if (VAR_1 > 1)
  FUNC_0(VAR_0, "\t%d missing %c's\n", VAR_1, VAR_3);
 else if (VAR_1 == -1)
  FUNC_0(VAR_0, "\textra %c\n", VAR_3);
 else if (VAR_1 < -1)
  FUNC_0(VAR_0, "\t%d extra %c's\n", -VAR_1, VAR_3);
}
