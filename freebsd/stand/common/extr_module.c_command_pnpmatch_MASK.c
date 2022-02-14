
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char**,char*) ;
 char* FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(int VAR_5, char *VAR_6[])
{
 char *VAR_7;
 int VAR_8;

 VAR_4 = 0;
 VAR_3 = 0;
 VAR_1 = 1;
 VAR_2 = 1;
 while ((VAR_8 = FUNC_0(VAR_5, VAR_6, "vd")) != -1) {
  switch(VAR_8) {
  case 'v':
   VAR_4 = 1;
   break;
  case 'd':
   VAR_3 = 1;
   break;
  case '?':
  default:

   return(VAR_0);
  }
 }
 VAR_6 += (VAR_1 - 1);
 VAR_5 -= (VAR_1 - 1);

 VAR_7 = FUNC_1(VAR_6[1], VAR_6[2]);
 if (VAR_7)
  FUNC_2("Matched module: %s\n", VAR_7);
 else if(VAR_6[1])
  FUNC_2("No module matches %s\n", VAR_6[1]);

 return (VAR_0);
}
