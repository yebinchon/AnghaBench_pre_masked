
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char**,char**) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int*) ;

__attribute__((used)) static int
FUNC_6(void)
{
 pid_t VAR_2;
 int VAR_3;
 char *VAR_4[] = { ((void*)0), ((void*)0) };
 char *VAR_5[] = { ((void*)0), ((void*)0) };

 if ((VAR_4[0] = FUNC_4("true")) == ((void*)0))
  FUNC_0(VAR_0, "strdup(\"true\")");

 if ((VAR_5[0] = FUNC_4("FOO=BAZ")) == ((void*)0))
  FUNC_0(VAR_0, "strdup(\"FOO=BAZ\")");


 (void)FUNC_3(2);


 switch (VAR_2 = FUNC_2()) {
 case -1:
  return VAR_0;

 case 0:
  return VAR_1;

 default:
  FUNC_5(&VAR_3);
  break;
 }


 FUNC_1("/usr/bin/true", VAR_4, VAR_5);


 return VAR_0;
}
