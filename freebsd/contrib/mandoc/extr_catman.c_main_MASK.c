
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 (char*,int) ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,char const*,char const*) ;
 int FUNC_8 (int ,int ,int ,int*) ;
 int FUNC_9 () ;

int
FUNC_10(int VAR_7, char **VAR_8)
{
 const char *VAR_9, *VAR_10;
 int VAR_11[2];
 int VAR_12;
 int VAR_13;
 pid_t VAR_14;

 VAR_9 = ((void*)0);
 VAR_10 = "ascii";
 while ((VAR_13 = FUNC_4(VAR_7, VAR_8, "I:T:")) != -1) {
  switch (VAR_13) {
  case 'I':
   VAR_9 = VAR_5;
   break;
  case 'T':
   VAR_10 = VAR_5;
   break;
  default:
   FUNC_9();
  }
 }

 if (VAR_7 > 0) {
  VAR_7 -= VAR_6;
  VAR_8 += VAR_6;
 }
 if (VAR_7 != 2)
  FUNC_9();

 if (FUNC_8(VAR_0, VAR_4, VAR_1, VAR_11) == -1)
  FUNC_2(1, "socketpair");

 VAR_14 = FUNC_3();
 switch (VAR_14) {
 case -1:
  FUNC_2(1, "fork");
 case 0:
  FUNC_1(VAR_11[0]);
  FUNC_7(VAR_11[1], VAR_10, VAR_9);
 default:
  break;
 }
 FUNC_1(VAR_11[1]);

 if ((VAR_12 = FUNC_5(VAR_8[1], VAR_3 | VAR_2)) == -1)
  FUNC_2(1, "open(%s)", VAR_8[1]);

 if (FUNC_0(VAR_8[0]) == -1)
  FUNC_2(1, "chdir(%s)", VAR_8[0]);

 return FUNC_6(VAR_11[0], VAR_12) == -1 ? 1 : 0;
}
