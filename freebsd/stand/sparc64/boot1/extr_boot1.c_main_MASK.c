
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 () ;

int
FUNC_6(int VAR_2, char **VAR_3)
{
 const char *VAR_4;
 int VAR_5;

 VAR_4 = VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  switch (VAR_3[VAR_5][0]) {
  case '-':
   switch (VAR_3[VAR_5][1]) {
   default:
    FUNC_5();
   }
   break;
  default:
   VAR_4 = VAR_3[VAR_5];
   break;
  }
 }





 FUNC_4(" \n>> FreeBSD/sparc64 boot block\n   Boot path:   %s\n"
     "   Boot loader: %s\n", VAR_1, VAR_4);


 if (FUNC_0(VAR_1) == -1)
  FUNC_3("domount");




 FUNC_1(VAR_4);

 return (1);
}
