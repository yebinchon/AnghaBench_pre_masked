
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int,unsigned char*,char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*,int,int,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char*,char*) ;
 char* FUNC_6 (unsigned int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

int
FUNC_9(char *VAR_2, char *VAR_3)
{
 char VAR_4[8];
 char VAR_5[8];
 char *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_8(VAR_2) / 2;
 if ((VAR_6 = FUNC_6((unsigned)VAR_8)) == ((void*)0)) {
  return(0);
 }

 FUNC_5(VAR_8, VAR_2, VAR_6);
 FUNC_7(VAR_3, VAR_4);
 FUNC_2(VAR_5, 8);

 VAR_7 = FUNC_3(VAR_4, VAR_6, VAR_8, VAR_0 | VAR_1, VAR_5);
 if (FUNC_0(VAR_7)) {
  FUNC_4(VAR_6);
  return (0);
 }
 FUNC_1(VAR_8, (unsigned char *) VAR_6, VAR_2);
 FUNC_4(VAR_6);
 return (1);
}
