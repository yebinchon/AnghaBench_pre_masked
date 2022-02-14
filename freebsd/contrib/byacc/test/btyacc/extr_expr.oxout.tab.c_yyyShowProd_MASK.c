
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char,int ) ;
 int VAR_0 ;
 char* FUNC_3 (int,int) ;
 int FUNC_4 (int) ;

void FUNC_5(int VAR_1)
  {int VAR_2,VAR_3;

   VAR_3 = FUNC_4(VAR_1);
   for (VAR_2=0; VAR_2<VAR_3; VAR_2++)
     {
      FUNC_0(VAR_0,"%s",FUNC_3(VAR_1,VAR_2));
      if (VAR_2 == 0) FUNC_1(" : ",VAR_0); else FUNC_2(' ',VAR_0);
     }
   FUNC_1(";\n",VAR_0);
  }
