
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 char* FUNC_0 (char*) ;

const char *
FUNC_1(int VAR_1)
{
 const char *VAR_2;


 VAR_2 = FUNC_0(VAR_0[0]);


 if (VAR_2 == ((void*)0) || !*VAR_2)
  VAR_2 = FUNC_0(VAR_0[VAR_1]);


 if (VAR_2 == ((void*)0) || !*VAR_2)
  VAR_2 = FUNC_0("LANG");


 if (VAR_2 == ((void*)0) || !*VAR_2)
  VAR_2 = "C";

 return (VAR_2);
}
