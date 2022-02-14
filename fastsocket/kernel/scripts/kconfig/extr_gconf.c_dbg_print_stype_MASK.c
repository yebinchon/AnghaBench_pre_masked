
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;

const char *FUNC_3(int VAR_7)
{
 static char VAR_8[256];

 FUNC_0(VAR_8, 256);

 if (VAR_7 == VAR_6)
  FUNC_2(VAR_8, "unknown");
 if (VAR_7 == VAR_0)
  FUNC_2(VAR_8, "boolean");
 if (VAR_7 == VAR_5)
  FUNC_2(VAR_8, "tristate");
 if (VAR_7 == VAR_2)
  FUNC_2(VAR_8, "int");
 if (VAR_7 == VAR_1)
  FUNC_2(VAR_8, "hex");
 if (VAR_7 == VAR_4)
  FUNC_2(VAR_8, "string");
 if (VAR_7 == VAR_3)
  FUNC_2(VAR_8, "other");





 return VAR_8;
}
