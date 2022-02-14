
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int *,int ) ;
 char* FUNC_3 () ;
 int FUNC_4 (int,char**,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 () ;

int
FUNC_7(int VAR_1, char *VAR_2[])
{
 int VAR_3;
 int VAR_4;
 char *VAR_5;

 VAR_3 = 1;
 while ((VAR_4 = FUNC_4(VAR_1, VAR_2, "LP")) != -1)
  switch (VAR_4) {
  case 'L':
   VAR_3 = 0;
   break;
  case 'P':
   VAR_3 = 1;
   break;
  case '?':
  default:
   FUNC_6();
  }
 VAR_1 -= VAR_0;
 VAR_2 += VAR_0;

 if (VAR_1 != 0)
  FUNC_6();





 if ((!VAR_3 && (VAR_5 = FUNC_3()) != ((void*)0)) ||
     (VAR_5 = FUNC_2(((void*)0), 0)) != ((void*)0))
  FUNC_5("%s\n", VAR_5);
 else
  FUNC_0(1, ".");

 FUNC_1(0);
}
