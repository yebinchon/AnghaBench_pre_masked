
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static char *
FUNC_1 (unsigned long VAR_9)
{
 static char VAR_10 [80];

 if (VAR_9 == 0)
  return "n/a";
 if (VAR_9 & VAR_8)
  return "Ok";
 VAR_10[0] = 0;
 if (VAR_9 & VAR_7) FUNC_0 (VAR_10, ",LOS");
 if (VAR_9 & VAR_0) FUNC_0 (VAR_10, ",AIS");
 if (VAR_9 & VAR_5) FUNC_0 (VAR_10, ",LOF");
 if (VAR_9 & VAR_6) FUNC_0 (VAR_10, ",LOMF");
 if (VAR_9 & VAR_2) FUNC_0 (VAR_10, ",CRC4E");
 if (VAR_9 & VAR_3) FUNC_0 (VAR_10, ",FARLOF");
 if (VAR_9 & VAR_1) FUNC_0 (VAR_10, ",AIS16");
 if (VAR_9 & VAR_4) FUNC_0 (VAR_10, ",FARLOMF");


 if (VAR_10[0] == ',')
  return VAR_10+1;
 return "Unknown";
}
