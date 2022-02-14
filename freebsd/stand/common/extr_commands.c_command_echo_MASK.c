
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char**,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;
 char* FUNC_3 (int,char**) ;

__attribute__((used)) static int
FUNC_4(int VAR_3, char *VAR_4[])
{
 char *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = 0;
 VAR_1 = 1;
 VAR_2 = 1;
 while ((VAR_7 = FUNC_1(VAR_3, VAR_4, "n")) != -1) {
  switch (VAR_7) {
  case 'n':
   VAR_6 = 1;
   break;
  case '?':
  default:

   return (VAR_0);
  }
 }
 VAR_4 += (VAR_1);
 VAR_3 -= (VAR_1);

 VAR_5 = FUNC_3(VAR_3, VAR_4);
 if (VAR_5 != ((void*)0)) {
  FUNC_2("%s", VAR_5);
  FUNC_0(VAR_5);
 }
 if (!VAR_6)
  FUNC_2("\n");
 return (VAR_0);
}
