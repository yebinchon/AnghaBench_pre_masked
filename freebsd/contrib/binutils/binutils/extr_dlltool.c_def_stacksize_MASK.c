
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int,...) ;
 int FUNC_2 (char*) ;

void
FUNC_3 (int VAR_0, int VAR_1)
{
  char VAR_2[200];
  if (VAR_1 > 0)
    FUNC_1 (VAR_2, "-stack 0x%x,0x%x ", VAR_0, VAR_1);
  else
    FUNC_1 (VAR_2, "-stack 0x%x ", VAR_0);
  FUNC_0 (FUNC_2 (VAR_2));
}
