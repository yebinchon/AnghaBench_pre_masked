
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
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;

const char *FUNC_3(int VAR_6)
{
 static char VAR_7[256];

 FUNC_0(VAR_7, 256);

 if (VAR_6 == VAR_5)
  FUNC_2(VAR_7, "unknown");
 if (VAR_6 == VAR_4)
  FUNC_2(VAR_7, "prompt");
 if (VAR_6 == VAR_1)
  FUNC_2(VAR_7, "comment");
 if (VAR_6 == VAR_3)
  FUNC_2(VAR_7, "menu");
 if (VAR_6 == VAR_2)
  FUNC_2(VAR_7, "default");
 if (VAR_6 == VAR_0)
  FUNC_2(VAR_7, "choice");





 return VAR_7;
}
