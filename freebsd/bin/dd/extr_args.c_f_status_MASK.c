
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2(char *VAR_4)
{

 if (FUNC_1(VAR_4, "none") == 0)
  VAR_3 |= VAR_0;
 else if (FUNC_1(VAR_4, "noxfer") == 0)
  VAR_3 |= VAR_1;
 else if (FUNC_1(VAR_4, "progress") == 0)
  VAR_3 |= VAR_2;
 else
  FUNC_0(1, "unknown status %s", VAR_4);
}
