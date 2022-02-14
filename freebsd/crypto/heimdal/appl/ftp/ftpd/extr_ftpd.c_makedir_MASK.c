
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (char*,int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*) ;

void
FUNC_6(char *VAR_1)
{

 FUNC_0("mkdir", VAR_1);
 if(VAR_0 && FUNC_2(VAR_1))
     return;
 if (FUNC_3(VAR_1, 0777) < 0)
  FUNC_4(550, VAR_1);
 else{
     if(VAR_0)
  FUNC_1(VAR_1, 0700);
     FUNC_5(257, "MKD command successful.");
 }
}
