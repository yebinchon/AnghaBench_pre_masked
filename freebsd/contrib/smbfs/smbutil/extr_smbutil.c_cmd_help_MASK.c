
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commands {int (* usage ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 struct commands* FUNC_3 (char*) ;
 int FUNC_4 () ;

int
FUNC_5(int VAR_1, char *VAR_2[])
{
 struct commands *VAR_3;
 char *VAR_4;

 if (VAR_1 < 2)
  FUNC_2();
 VAR_4 = VAR_2[1];
 VAR_3 = FUNC_3(VAR_4);
 if (VAR_3 == ((void*)0))
  FUNC_0(VAR_0, "unknown command %s", VAR_4);
 if (VAR_3->usage == ((void*)0))
  FUNC_0(VAR_0, "no specific help for command %s", VAR_4);
 VAR_3->usage();
 FUNC_1(0);
}
