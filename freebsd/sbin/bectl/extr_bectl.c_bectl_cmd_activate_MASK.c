
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,char**,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,...) ;
 int VAR_3 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(int VAR_4, char *VAR_5[])
{
 int VAR_6, VAR_7;
 bool VAR_8;

 VAR_8 = 0;
 while ((VAR_7 = FUNC_2(VAR_4, VAR_5, "t")) != -1) {
  switch (VAR_7) {
  case 't':
   VAR_8 = 1;
   break;
  default:
   FUNC_1(VAR_3, "bectl activate: unknown option '-%c'\n",
       VAR_2);
   return (FUNC_4(0));
  }
 }

 VAR_4 -= VAR_1;
 VAR_5 += VAR_1;

 if (VAR_4 != 1) {
  FUNC_1(VAR_3, "bectl activate: wrong number of arguments\n");
  return (FUNC_4(0));
 }



 if ((VAR_6 = FUNC_0(VAR_0, VAR_5[0], VAR_8)) != 0)

  FUNC_3("did not successfully activate boot environment %s\n",
      VAR_5[0]);
 else
  FUNC_3("successfully activated boot environment %s\n", VAR_5[0]);

 if (VAR_8)
  FUNC_3("for next boot\n");

 return (VAR_6);
}
