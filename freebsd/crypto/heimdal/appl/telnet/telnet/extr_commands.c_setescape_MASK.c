
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 char* FUNC_0 (char) ;
 char VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(int VAR_3, char *VAR_4[])
{
 char *VAR_5;
 char VAR_6[50];

 FUNC_3(
     "Deprecated usage - please use 'set escape%s%s' in the future.\r\n",
    (VAR_3 > 2)? " ":"", (VAR_3 > 2)? VAR_4[1]: "");
 if (VAR_3 > 2)
  VAR_5 = VAR_4[1];
 else {
  FUNC_3("new escape character: ");
  FUNC_2(VAR_6, sizeof(VAR_6), VAR_1);
  VAR_5 = VAR_6;
 }
 if (VAR_5[0] != '\0')
  VAR_0 = VAR_5[0];
 FUNC_3("Escape character is '%s'.\r\n", FUNC_0(VAR_0));

 FUNC_1(VAR_2);
 return 1;
}
