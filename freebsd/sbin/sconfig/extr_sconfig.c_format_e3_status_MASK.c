
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static char *
FUNC_1 (unsigned long VAR_2)
{
 static char VAR_3 [80];

 VAR_3[0] = 0;
 if (VAR_2 & VAR_0) FUNC_0 (VAR_3, ",LOS");
 if (VAR_2 & VAR_1) FUNC_0 (VAR_3, ",XMIT");
 if (VAR_3[0] == ',')
  return VAR_3+1;
 return "Ok";
}
