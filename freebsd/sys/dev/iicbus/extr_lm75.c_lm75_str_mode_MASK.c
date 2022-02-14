
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_2 = -1;
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 > 2 && FUNC_1("interrupt", VAR_0, VAR_1) == 0)
  VAR_2 = 1;
 else if (VAR_1 > 2 && FUNC_1("comparator", VAR_0, VAR_1) == 0)
  VAR_2 = 0;

 return (VAR_2);
}
