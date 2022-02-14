
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char**,char**) ;
 int FUNC_2 (char*,char*) ;
 int VAR_6 ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(char **VAR_7)
{
 char *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7, &VAR_8);
 if (VAR_9)
  return (VAR_9);

 if (!FUNC_3(VAR_8, "continue"))
  VAR_6 = VAR_0;
 else if (!FUNC_3(VAR_8, "panic"))
  VAR_6 = VAR_1;
 else if (!FUNC_3(VAR_8, "reboot"))
  VAR_6 = VAR_2;
 else if (!FUNC_3(VAR_8, "retry"))
  VAR_6 = VAR_3;
 else {
  FUNC_2("rootmount: %s: unknown action\n", VAR_8);
  VAR_9 = VAR_4;
 }

 FUNC_0(VAR_8, VAR_5);
 return (0);
}
