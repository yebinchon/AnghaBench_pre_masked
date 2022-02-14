
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int input ;


 int FUNC_0 () ;
 int * FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;

void
FUNC_8(void)
{
 static char VAR_0[256];

 FUNC_3();

 FUNC_6("\n");




 FUNC_0();




 FUNC_6("\nType '?' for a list of commands, 'help' for more detailed help.\n");
 if (FUNC_1("prompt") == ((void*)0))
  FUNC_7("prompt", "${interpret}", 1);
 if (FUNC_1("interpret") == ((void*)0))
  FUNC_7("interpret", "OK", 1);

 for (;;) {
  VAR_0[0] = '\0';
  FUNC_2();
  FUNC_5(VAR_0, sizeof(VAR_0));
  FUNC_4(VAR_0);
 }
}
