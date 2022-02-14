
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 char VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(int VAR_3, char *VAR_4[])
{
 char *VAR_5;
 char VAR_6[50];

 FUNC_2(
     "Deprecated usage - please use 'set escape%s%s' in the future.\n",
    (VAR_3 > 2)? " ":"", (VAR_3 > 2)? VAR_4[1]: "");
 if (VAR_3 > 2)
  VAR_5 = VAR_4[1];
 else {
  FUNC_2("new escape character: ");
  (void) FUNC_1(VAR_6, sizeof(VAR_6), VAR_1);
  VAR_5 = VAR_6;
 }
 if (VAR_5[0] != '\0')
  VAR_0 = VAR_5[0];
 (void) FUNC_0(VAR_2);
 return 1;
}
